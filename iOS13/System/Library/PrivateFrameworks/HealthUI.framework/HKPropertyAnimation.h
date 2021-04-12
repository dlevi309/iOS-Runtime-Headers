/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CAMediaTimingFunction, NSDate;

@interface HKPropertyAnimation : NSObject <NSCopying> {

	NSString* _property;
	id _fromValue;
	id _toValue;
	double _duration;
	CAMediaTimingFunction* _timingFunction;
	long long _secondaryAnimationCurve;
	/*^block*/id _completion;
	/*^block*/id _propertyApplicationFunction;
	NSDate* _appliedDate;

}

@property (nonatomic,retain) NSDate * appliedDate;                                //@synthesize appliedDate=_appliedDate - In the implementation block
@property (nonatomic,retain) NSString * property;                                 //@synthesize property=_property - In the implementation block
@property (nonatomic,retain) id fromValue;                                        //@synthesize fromValue=_fromValue - In the implementation block
@property (nonatomic,retain) id toValue;                                          //@synthesize toValue=_toValue - In the implementation block
@property (assign,nonatomic) double duration;                                     //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;              //@synthesize timingFunction=_timingFunction - In the implementation block
@property (assign,nonatomic) long long secondaryAnimationCurve;                   //@synthesize secondaryAnimationCurve=_secondaryAnimationCurve - In the implementation block
@property (nonatomic,copy) id completion;                                         //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) id propertyApplicationFunction;                        //@synthesize propertyApplicationFunction=_propertyApplicationFunction - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)duration;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)_validate;
-(void)setDuration:(double)arg1 ;
-(CAMediaTimingFunction *)timingFunction;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(id)fromValue;
-(void)setFromValue:(id)arg1 ;
-(id)toValue;
-(void)setToValue:(id)arg1 ;
-(void)_finish;
-(NSString *)property;
-(void)setProperty:(NSString *)arg1 ;
-(void)setPropertyApplicationFunction:(id)arg1 ;
-(void)_applyWithCurrentDate:(id)arg1 ;
-(BOOL)_isCompleted;
-(long long)secondaryAnimationCurve;
-(void)setSecondaryAnimationCurve:(long long)arg1 ;
-(id)propertyApplicationFunction;
-(NSDate *)appliedDate;
-(void)setAppliedDate:(NSDate *)arg1 ;
@end

