/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class NSMutableDictionary;

@interface RTStateTransitionMotionActivityTypeHistogram : NSObject {

	NSMutableDictionary* _motionActivityTypeBins;

}

@property (nonatomic,retain) NSMutableDictionary * motionActivityTypeBins;              //@synthesize motionActivityTypeBins=_motionActivityTypeBins - In the implementation block
-(id)init;
-(void)show;
-(NSMutableDictionary *)motionActivityTypeBins;
-(void)addMotionActivityType:(unsigned long long)arg1 ;
-(unsigned long long)getDominantMotionActivityType;
-(void)setMotionActivityTypeBins:(NSMutableDictionary *)arg1 ;
@end

