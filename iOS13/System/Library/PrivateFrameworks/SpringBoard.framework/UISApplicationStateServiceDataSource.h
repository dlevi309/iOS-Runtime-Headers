/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class NSDate;


@protocol UISApplicationStateServiceDataSource <NSObject>
@property (assign,nonatomic) BOOL usesBackgroundNetwork; 
@property (nonatomic,copy) id badgeValue; 
@property (nonatomic,retain) NSDate * nextWakeDate; 
@optional
-(void)setBadgeValue:(id)arg1;
-(id)badgeValue;
-(void)setUsesBackgroundNetwork:(BOOL)arg1;
-(BOOL)usesBackgroundNetwork;
-(NSDate *)nextWakeDate;
-(void)setNextWakeDate:(id)arg1;

@end

