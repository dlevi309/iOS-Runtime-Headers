/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/EDResumable.h>

@class EDRemoteClient, NSString;

@interface EDRemoteClientResumer : NSObject <EDResumable> {

	EDRemoteClient* _remoteClient;

}

@property (__weak) EDRemoteClient * remoteClient;                   //@synthesize remoteClient=_remoteClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)resumeForUpdates;
-(id)initWithRemoteClient:(id)arg1 ;
-(EDRemoteClient *)remoteClient;
-(void)setRemoteClient:(EDRemoteClient *)arg1 ;
@end

