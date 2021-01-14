/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/


@interface BKSTouchStream : NSObject {

	unsigned _reference;

}

@property (assign) unsigned reference;              //@synthesize reference=_reference - In the implementation block
-(unsigned)reference;
-(void)setEventDispatchMode:(unsigned char)arg1 lastTouchTimestamp:(double)arg2 ;
-(void)invalidate;
-(void)setEventDispatchMode:(unsigned char)arg1 ambiguityRecommendation:(unsigned char)arg2 lastTouchTimestamp:(double)arg3 ;
-(id)initWithContextID:(unsigned)arg1 displayUUID:(id)arg2 identifier:(unsigned char)arg3 policy:(id)arg4 ;
-(void)setReference:(unsigned)arg1 ;
@end

