/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class NSMassFormatter;

@interface HKPersonWeightFormatter : NSObject {

	NSMassFormatter* _massFormatter;
	long long _localWeightUnit;

}

@property (nonatomic,readonly) long long localWeightUnit;              //@synthesize localWeightUnit=_localWeightUnit - In the implementation block
+(id)sharedFormatter;
-(id)init;
-(void)_localeChanged:(id)arg1 ;
-(void)_commonInit;
-(void)dealloc;
-(long long)localWeightUnit;
-(id)stringFromWeightValue:(double)arg1 inUnit:(long long)arg2 ;
-(id)stringFromWeightInKilograms:(id)arg1 ;
-(void)_updateRoundingIncrement;
@end

