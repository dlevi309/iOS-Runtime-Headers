/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/

#import <ShazamKit/SHRemoteStore.h>

@class SHProxyMatcher;

@interface SHAudioMatchingRemoteStore : SHRemoteStore {

	BOOL _sendNotifications;
	SHProxyMatcher* _proxyMatcher;

}

@property (nonatomic,retain) SHProxyMatcher * proxyMatcher;              //@synthesize proxyMatcher=_proxyMatcher - In the implementation block
@property (assign,nonatomic) BOOL sendNotifications;                     //@synthesize sendNotifications=_sendNotifications - In the implementation block
-(void)stop;
-(id)createMatcher;
-(BOOL)sendNotifications;
-(SHProxyMatcher *)proxyMatcher;
-(void)startOneMatchAttempt;
-(void)startMatching;
-(void)startMatchingUntilDeadline:(id)arg1 ;
-(void)startMatchingUntilResultFound;
-(void)setSendNotifications:(BOOL)arg1 ;
-(void)setProxyMatcher:(SHProxyMatcher *)arg1 ;
@end

