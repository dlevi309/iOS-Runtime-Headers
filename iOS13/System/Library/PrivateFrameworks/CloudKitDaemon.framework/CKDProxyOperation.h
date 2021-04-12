/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDOperation.h>
#import <libobjc.A.dylib/CKDOperationInfoDelegate.h>

@class CKOperationResult, NSString;

@interface CKDProxyOperation : CKDOperation <CKDOperationInfoDelegate> {

	BOOL _didHandleCancel;
	/*^block*/id _operationProgressedBlock;
	CKOperationResult* _cachedResult;

}

@property (nonatomic,retain) CKOperationResult * cachedResult;                     //@synthesize cachedResult=_cachedResult - In the implementation block
@property (assign,nonatomic) BOOL didHandleCancel;                                 //@synthesize didHandleCancel=_didHandleCancel - In the implementation block
@property (nonatomic,copy) id operationProgressedBlock;                            //@synthesize operationProgressedBlock=_operationProgressedBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
-(void)main;
-(BOOL)isInvalidated;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(CKOperationResult *)cachedResult;
-(void)setCachedResult:(CKOperationResult *)arg1 ;
-(id)operationResult;
-(BOOL)isProxyOperation;
-(BOOL)shouldCheckAppVersion;
-(void)setOperationProgressedBlock:(id)arg1 ;
-(void)wasUnexpectedlyUnregisteredForOperationID:(id)arg1 ;
-(void)operationWithID:(id)arg1 didProgress:(id)arg2 ;
-(void)operationWithID:(id)arg1 didComplete:(id)arg2 ;
-(void)_cancelOnCallbackQueueIfNecessary;
-(id)operationProgressedBlock;
-(BOOL)didHandleCancel;
-(void)setDidHandleCancel:(BOOL)arg1 ;
@end

