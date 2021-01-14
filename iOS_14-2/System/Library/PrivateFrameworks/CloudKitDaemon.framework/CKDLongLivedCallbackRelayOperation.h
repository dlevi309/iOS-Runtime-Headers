/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDOperation.h>
#import <libobjc.A.dylib/CKDOperationInfoDelegate.h>

@class NSString;

@interface CKDLongLivedCallbackRelayOperation : CKDOperation <CKDOperationInfoDelegate>

@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(BOOL)isInvalidated;
-(void)main;
-(void)cancel;
-(BOOL)isLongLivedCallbackRelayOperation;
-(BOOL)shouldCheckAppVersion;
-(void)wasUnexpectedlyUnregisteredForOperationID:(id)arg1 ;
-(void)operationWithID:(id)arg1 receivedCallback:(id)arg2 ;
@end

