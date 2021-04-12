/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@interface PHALocalNotificationInterface : NSObject {

	BOOL _isNotificationRegistered;

}

@property (assign) BOOL isNotificationRegistered;              //@synthesize isNotificationRegistered=_isNotificationRegistered - In the implementation block
+(id)localNotificationInterface;
-(id)init;
-(void)fireLocalNotificationWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isNotificationRegistered;
-(void)setIsNotificationRegistered:(BOOL)arg1 ;
@end

