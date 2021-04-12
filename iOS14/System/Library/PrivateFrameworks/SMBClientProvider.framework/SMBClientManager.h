/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SMBClientProvider.framework/SMBClientProvider
*/

#import <LiveFS/LiveFSClient.h>

@interface SMBClientManager : LiveFSClient
+(id)newManager;
-(id)volumes:(id*)arg1 ;
-(void)listenerForVolume:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)listenerForVolume:(id)arg1 error:(id*)arg2 ;
-(id)forgetVolume:(id)arg1 ;
-(void)addSMBServerOrShare:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)forgetVolume:(id)arg1 withFlags:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)volumesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)forgetVolume:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)addVolume:(id)arg1 atServer:(id)arg2 credentialType:(long long)arg3 credential:(id)arg4 ;
-(void)addVolumes:(id)arg1 atServer:(id)arg2 credentialType:(long long)arg3 credential:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)sharesAtServer:(id)arg1 credentialType:(long long)arg2 credential:(id)arg3 error:(id*)arg4 ;
-(void)sharesAtServer:(id)arg1 credentialType:(long long)arg2 credential:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)credentialTypesForServer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)mountsFromServer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

