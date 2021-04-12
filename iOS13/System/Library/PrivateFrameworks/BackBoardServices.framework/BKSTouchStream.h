/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/


@interface BKSTouchStream : NSObject {

	unsigned _reference;

}

@property (assign) unsigned reference;              //@synthesize reference=_reference - In the implementation block
-(void)invalidate;
-(id)initWithContextID:(unsigned)arg1 displayUUID:(id)arg2 identifier:(unsigned char)arg3 policy:(id)arg4 ;
-(void)setEventDispatchMode:(unsigned char)arg1 ambiguityRecommendation:(unsigned char)arg2 lastTouchTimestamp:(double)arg3 ;
-(void)setEventDispatchMode:(unsigned char)arg1 lastTouchTimestamp:(double)arg2 ;
-(unsigned)reference;
-(void)setReference:(unsigned)arg1 ;
@end

