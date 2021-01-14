/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDate *)lastUpdated;
-(HKDisplayCategory *)displayCategory;
-(HKDisplayType *)displayType;
-(id<WDDashboardCellPrimaryValueSourceDelegate>)primaryValueSourceDelegate;
-(id)mostRecentValueWithValueFont:(id)arg1 unitFont:(id)arg2;
-(void)setPrimaryValueSourceDelegate:(id)arg1;
-(NSString *)primaryValueContextualText;

@end

