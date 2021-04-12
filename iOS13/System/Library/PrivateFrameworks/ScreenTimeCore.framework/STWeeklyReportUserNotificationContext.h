/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <ScreenTimeCore/STUserNotificationContext.h>

@class NSData, NSNumber, NSString;

@interface STWeeklyReportUserNotificationContext : STUserNotificationContext {

	NSData* _weeklyReportData;
	double _deltaScreenTimeUsage;
	NSNumber* _totalUsage;
	NSString* _notificationBodyKey;

}

@property (nonatomic,retain) NSString * notificationBodyKey;              //@synthesize notificationBodyKey=_notificationBodyKey - In the implementation block
@property (assign,nonatomic) double deltaScreenTimeUsage;                 //@synthesize deltaScreenTimeUsage=_deltaScreenTimeUsage - In the implementation block
@property (nonatomic,copy) NSNumber * totalUsage;                         //@synthesize totalUsage=_totalUsage - In the implementation block
@property (nonatomic,retain) NSData * weeklyReportData;                   //@synthesize weeklyReportData=_weeklyReportData - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)customizeNotificationContent:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)setDeltaScreenTimeUsage:(double)arg1 ;
-(void)setTotalUsage:(NSNumber *)arg1 ;
-(NSString *)notificationBodyKey;
-(NSData *)weeklyReportData;
-(void)setDeltaScreenTimeUsage:(double)arg1 totalUsage:(id)arg2 ;
-(void)setWeeklyReportData:(NSData *)arg1 ;
-(double)deltaScreenTimeUsage;
-(NSNumber *)totalUsage;
-(void)setNotificationBodyKey:(NSString *)arg1 ;
@end

