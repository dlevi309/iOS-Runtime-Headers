/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <ClockKit/CLKComplicationTemplate.h>

@interface CLKComplicationTemplateActivity : CLKComplicationTemplate {

	long long _family;
	BOOL _hideDots;
	double _movePercentComplete;
	double _exercisePercentComplete;
	double _standPercentComplete;

}

@property (assign,nonatomic) double movePercentComplete;                      //@synthesize movePercentComplete=_movePercentComplete - In the implementation block
@property (assign,nonatomic) double exercisePercentComplete;                  //@synthesize exercisePercentComplete=_exercisePercentComplete - In the implementation block
@property (assign,nonatomic) double standPercentComplete;                     //@synthesize standPercentComplete=_standPercentComplete - In the implementation block
@property (assign,getter=dotsAreHidden,nonatomic) BOOL hideDots;              //@synthesize hideDots=_hideDots - In the implementation block
+(id)activityTemplateWithFamily:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_enumerateFloatKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateBOOLKeysWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
-(double)movePercentComplete;
-(void)setMovePercentComplete:(double)arg1 ;
-(double)exercisePercentComplete;
-(void)setExercisePercentComplete:(double)arg1 ;
-(double)standPercentComplete;
-(void)setStandPercentComplete:(double)arg1 ;
-(BOOL)dotsAreHidden;
-(void)setHideDots:(BOOL)arg1 ;
@end

