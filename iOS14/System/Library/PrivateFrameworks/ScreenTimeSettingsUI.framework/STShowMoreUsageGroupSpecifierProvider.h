/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STUsageGroupSpecifierProvider.h>

@class PSSpecifier, NSArray;

@interface STShowMoreUsageGroupSpecifierProvider : STUsageGroupSpecifierProvider {

	PSSpecifier* _summarySpecifier;
	NSArray* _usageItems;
	unsigned long long _numberOfItemsToShow;
	PSSpecifier* _showMoreSpecifier;
	unsigned long long _totalNumberOfItemsToShow;

}

@property (nonatomic,readonly) PSSpecifier * showMoreSpecifier;                        //@synthesize showMoreSpecifier=_showMoreSpecifier - In the implementation block
@property (assign,nonatomic) unsigned long long totalNumberOfItemsToShow;              //@synthesize totalNumberOfItemsToShow=_totalNumberOfItemsToShow - In the implementation block
@property (nonatomic,retain) PSSpecifier * summarySpecifier;                           //@synthesize summarySpecifier=_summarySpecifier - In the implementation block
@property (nonatomic,copy) NSArray * usageItems;                                       //@synthesize usageItems=_usageItems - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfItemsToShow;                   //@synthesize numberOfItemsToShow=_numberOfItemsToShow - In the implementation block
-(id)init;
-(NSArray *)usageItems;
-(void)setUsageItems:(NSArray *)arg1 ;
-(void)setSummarySpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)summarySpecifier;
-(id)newSpecifierWithUsageItem:(id)arg1 ;
-(void)updateSpecifier:(id)arg1 usageItem:(id)arg2 ;
-(void)setNumberOfItemsToShow:(unsigned long long)arg1 ;
-(void)refreshUsageSpecifiersWithUpdates:(BOOL)arg1 ;
-(void)showMoreItems:(id)arg1 ;
-(unsigned long long)totalNumberOfItemsToShow;
-(PSSpecifier *)showMoreSpecifier;
-(unsigned long long)numberOfItemsToShow;
-(void)setTotalNumberOfItemsToShow:(unsigned long long)arg1 ;
@end

