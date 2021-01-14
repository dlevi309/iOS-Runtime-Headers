/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/


@interface MPUNotificationObserver : NSObject {

	id _notificationObservationToken;

}

@property (nonatomic,retain) id notificationObservationToken;              //@synthesize notificationObservationToken=_notificationObservationToken - In the implementation block
+(id)observerWithName:(id)arg1 object:(id)arg2 queue:(id)arg3 observationHandler:(/*^block*/id)arg4 ;
-(void)dealloc;
-(id)initWithName:(id)arg1 object:(id)arg2 queue:(id)arg3 observationHandler:(/*^block*/id)arg4 ;
-(id)notificationObservationToken;
-(void)setNotificationObservationToken:(id)arg1 ;
@end

