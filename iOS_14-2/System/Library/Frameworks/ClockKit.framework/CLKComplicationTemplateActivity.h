/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
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
-(id)initWithFamily:(long long)arg1 ;
-(BOOL)dotsAreHidden;
-(double)movePercentComplete;
-(double)exercisePercentComplete;
-(double)standPercentComplete;
-(void)setHideDots:(BOOL)arg1 ;
-(void)setMovePercentComplete:(double)arg1 ;
-(void)setExercisePercentComplete:(double)arg1 ;
-(void)setStandPercentComplete:(double)arg1 ;
-(long long)compatibleFamily;
-(void)_enumerateFloatKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateBOOLKeysWithBlock:(/*^block*/id)arg1 ;
@end

