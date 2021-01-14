/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_queue;
@class IDSService, NSObject, NSString;

@interface CMSM_IDSClient : NSObject <IDSServiceDelegate> {

	IDSService* pIdsService;
	NSObject*<OS_dispatch_queue> idsDispatchQueue;
	NSString* _lastSentRemotePlayingInfoQueryGUID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(void)updateLastSentRemotePlayingInfoQueryGUID:(id)arg1 ;
-(id)init;
-(BOOL)sendMessage:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6 ;
@end

