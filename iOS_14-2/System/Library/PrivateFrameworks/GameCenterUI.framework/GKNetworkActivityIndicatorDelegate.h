/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <libobjc.A.dylib/GKDaemonProxyNetworkActivityIndicatorDelegate.h>

@class NSString;

@interface GKNetworkActivityIndicatorDelegate : NSObject <GKDaemonProxyNetworkActivityIndicatorDelegate> {

	int _networkIndicatorCount;

}

@property (assign,nonatomic) int networkIndicatorCount;              //@synthesize networkIndicatorCount=_networkIndicatorCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginNetworkActivity;
-(void)endNetworkActivity;
-(void)resetNetworkActivity;
-(int)networkIndicatorCount;
-(void)setNetworkIndicatorCount:(int)arg1 ;
@end

