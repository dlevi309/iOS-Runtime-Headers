/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <BusinessChatService/BCSRemoteFetch.h>
#import <libobjc.A.dylib/BCSConfigRemoteFetching.h>
#import <libobjc.A.dylib/BCSShardRemoteFetching.h>

@class NSString;

@interface BCSConfigRemoteFetch : BCSRemoteFetch <BCSConfigRemoteFetching, BCSShardRemoteFetching>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fetchConfigItemWithType:(long long)arg1 clientBundleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchConfigItemWithType:(long long)arg1 clientBundleID:(id)arg2 xpcActivity:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchShardMatching:(id)arg1 clientBundleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_configRequestForType:(long long)arg1 ;
-(id)_bloomFilterRequestForShardMatching:(id)arg1 timeout:(double)arg2 ;
@end

