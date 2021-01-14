/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDate *)endDate;
-(NSDate *)startDate;
-(long long)timeScope;
-(NSAttributedString *)secondaryValue;
-(id<WDDashboardCellSecondaryValueSourceDelegate>)secondaryValueSourceDelegate;
-(void)setSecondaryValueSourceDelegate:(id)arg1;

@end

