/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellular.framework/SettingsCellular
*/

#import <Preferences/PSSpecifier.h>
#import <libobjc.A.dylib/PSBillingPeriodSource.h>

@protocol PSBillingPeriodSelectorSpecifierDelegate;
@interface PSBillingPeriodSelectorSpecifier : PSSpecifier <PSBillingPeriodSource> {

	id<PSBillingPeriodSelectorSpecifierDelegate> _delegate;
	unsigned long long _selectedPeriod;

}

@property (assign,nonatomic) unsigned long long selectedPeriod;                                         //@synthesize selectedPeriod=_selectedPeriod - In the implementation block
@property (assign,nonatomic,__weak) id<PSBillingPeriodSelectorSpecifierDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<PSBillingPeriodSelectorSpecifierDelegate>)delegate;
-(void)setDelegate:(id<PSBillingPeriodSelectorSpecifierDelegate>)arg1 ;
-(id)initWithStatisticsCache:(id)arg1 ;
-(unsigned long long)selectedPeriod;
-(void)setBillingPeriod:(id)arg1 specifier:(id)arg2 ;
-(id)getBillingPeriod:(id)arg1 ;
-(void)setSelectedPeriod:(unsigned long long)arg1 ;
@end

