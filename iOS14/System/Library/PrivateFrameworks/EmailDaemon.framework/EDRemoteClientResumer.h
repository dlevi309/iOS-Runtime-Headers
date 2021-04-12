/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

