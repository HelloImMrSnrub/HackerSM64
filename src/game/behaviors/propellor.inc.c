void bhv_propellor(void) {
    //thanks cammie
    if (!(GET_BPARAM1(o->oBehParams) == 0 )) {

        cur_obj_scale((GET_BPARAM1(o->oBehParams)) * 0.25);
    }

    o->oFaceAngleYaw = o->oFaceAngleYaw + (1400.0f / (o->header.gfx.scale[2]));
}