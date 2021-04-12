/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

@class HKDisplayType, HKDisplayCategory, NSString, NSDate;


@protocol WDDashboardCellPrimaryValueSource
@property (assign,nonatomic,__weak) id<WDDashboardCellPrimaryValueSourceDelegate> primaryValueSourceDelegate; 
@property (nonatomic,readonly) HKDisplayType * displayType; 
@property (nonatomic,readonly) HKDisplayCategory * displayCategory; 
@property (nonatomic,readonly) NSString * primaryValueContextualText; 
@property (nonatomic,readonly) NSDate * lastUpdated; 
@required
-(HKDisplayType *)displayType;
-(NSDate *)lastUpdated;
-(HKDisplayCategory *)displayCategory;
-(id<WDDashboardCellPrimaryValueSourceDelegate>)primaryValueSourceDelegate;
-(id)mostRecentValueWithValueFont:(id)arg1 unitFont:(id)arg2;
-(void)setPrimaryValueSourceDelegate:(id)arg1;
-(NSString *)primaryValueContextualText;

@end

