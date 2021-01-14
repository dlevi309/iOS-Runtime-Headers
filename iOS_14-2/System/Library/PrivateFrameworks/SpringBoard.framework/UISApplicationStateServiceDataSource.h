/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class NSDate;


@protocol UISApplicationStateServiceDataSource <NSObject>
@property (assign,nonatomic) BOOL usesBackgroundNetwork; 
@property (nonatomic,copy) id badgeValue; 
@property (nonatomic,retain) NSDate * nextWakeDate; 
@optional
-(id)badgeValue;
-(void)setBadgeValue:(id)arg1;
-(void)setUsesBackgroundNetwork:(BOOL)arg1;
-(BOOL)usesBackgroundNetwork;
-(void)setNextWakeDate:(id)arg1;
-(NSDate *)nextWakeDate;

@end

