/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)_commonInit;
-(void)_localeChanged:(id)arg1 ;
-(id)stringFromWeightInKilograms:(id)arg1 ;
-(void)_updateRoundingIncrement;
-(id)stringFromWeightValue:(double)arg1 inUnit:(long long)arg2 ;
-(long long)localWeightUnit;
@end

