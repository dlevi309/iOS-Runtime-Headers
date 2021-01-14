/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSCloudHistoryServiceProtocol.h>

@protocol NSXPCProxyCreating;
@class NSString;

@interface WBSCloudHistoryServiceProxy : NSObject <WBSCloudHistoryServiceProtocol> {

	id<NSXPCProxyCreating> _proxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProxy:(id)arg1 ;
-(/*^block*/id)_defaultProxyErrorHandlerWithSimpleReplyCompletionHandler:(/*^block*/id)arg1 ;
-(void)saveChangesBypassingThrottler:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchAndMergeChangesBypassingThrottler:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resetForAccountChangeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchDateOfNextPermittedSaveChangesAttemptWithCompletionHandler:(/*^block*/id)arg1 ;
@end

