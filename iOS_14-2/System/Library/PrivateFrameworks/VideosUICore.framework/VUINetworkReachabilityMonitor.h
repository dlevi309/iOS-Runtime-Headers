/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isNetworkReachable;
-(id)init;
-(void)setNetworkReachable:(BOOL)arg1 ;
-(id)_init;
-(void)_updateNetworkReachability;
-(id)networkTypeChangedNotificationToken;
-(void)setNetworkTypeChangedNotificationToken:(id)arg1 ;
-(id)networkReachabilityChangedNotificationToken;
-(void)setNetworkReachabilityChangedNotificationToken:(id)arg1 ;
@end

