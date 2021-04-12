/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

@class NSAttributedString, NSDate;


@protocol WDDashboardCellSecondaryValueSource
@property (assign,nonatomic,__weak) id<WDDashboardCellSecondaryValueSourceDelegate> secondaryValueSourceDelegate; 
@property (nonatomic,readonly) NSAttributedString * secondaryValue; 
@property (nonatomic,readonly) long long timeScope; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@required
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSAttributedString *)secondaryValue;
-(long long)timeScope;
-(id<WDDashboardCellSecondaryValueSourceDelegate>)secondaryValueSourceDelegate;
-(void)setSecondaryValueSourceDelegate:(id)arg1;

@end

