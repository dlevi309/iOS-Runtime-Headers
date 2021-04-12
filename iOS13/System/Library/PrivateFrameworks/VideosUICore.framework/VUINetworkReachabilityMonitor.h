/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
*/


@interface VUINetworkReachabilityMonitor : NSObject {

	BOOL _networkReachable;
	id _networkTypeChangedNotificationToken;
	id _networkReachabilityChangedNotificationToken;

}

@property (getter=isNetworkReachable) BOOL networkReachable;                              //@synthesize networkReachable=_networkReachable - In the implementation block
@property (nonatomic,retain) id networkTypeChangedNotificationToken;                      //@synthesize networkTypeChangedNotificationToken=_networkTypeChangedNotificationToken - In the implementation block
@property (nonatomic,retain) id networkReachabilityChangedNotificationToken;              //@synthesize networkReachabilityChangedNotificationToken=_networkReachabilityChangedNotificationToken - In the implementation block
+(id)sharedInstance;
+(BOOL)_isNetworkReachable;
-(id)init;
-(id)_init;
-(BOOL)isNetworkReachable;
-(void)setNetworkReachable:(BOOL)arg1 ;
-(void)_updateNetworkReachability;
-(id)networkTypeChangedNotificationToken;
-(void)setNetworkTypeChangedNotificationToken:(id)arg1 ;
-(id)networkReachabilityChangedNotificationToken;
-(void)setNetworkReachabilityChangedNotificationToken:(id)arg1 ;
@end

