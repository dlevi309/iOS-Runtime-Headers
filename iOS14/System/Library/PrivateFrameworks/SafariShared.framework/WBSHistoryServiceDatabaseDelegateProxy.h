/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSHistoryServiceDatabaseDelegate.h>

@protocol NSXPCProxyCreating;
@class NSString;

@interface WBSHistoryServiceDatabaseDelegateProxy : NSObject <WBSHistoryServiceDatabaseDelegate> {

	id<NSXPCProxyCreating> _proxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProxy:(id)arg1 ;
-(/*^block*/id)_defaultProxyErrorHandlerWithSimpleReplyCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)reportSevereError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleEvent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reportPermanentIDsForItems:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reportPermanentIDsForVisits:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

