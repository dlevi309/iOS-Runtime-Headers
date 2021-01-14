/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

