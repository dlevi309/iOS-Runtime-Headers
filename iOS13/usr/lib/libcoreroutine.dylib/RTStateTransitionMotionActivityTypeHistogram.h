/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

