/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LimitAdTracking.framework/LimitAdTracking
*/


@interface ADOptInStatusClient : NSObject
+(id)sharedInstance;
-(void)clearAdvertisingIdentifier;
-(id)advertisingIdentifier;
-(void)refreshOptInStatus;
-(void)refreshOptInStatusRefreshingWeakToken:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)advertisingIdentifierChanged:(/*^block*/id)arg1 ;
-(void)setOptInStatus:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

