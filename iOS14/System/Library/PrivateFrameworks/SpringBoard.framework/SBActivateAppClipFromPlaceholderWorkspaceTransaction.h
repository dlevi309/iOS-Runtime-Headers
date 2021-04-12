/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBAppToAppWorkspaceTransaction.h>
#import <libobjc.A.dylib/BSTransactionObserver.h>

@class SBRotateScenesWorkspaceTransaction, NSString;

@interface SBActivateAppClipFromPlaceholderWorkspaceTransaction : SBAppToAppWorkspaceTransaction <BSTransactionObserver> {

	SBRotateScenesWorkspaceTransaction* _rotateScenesTransaction;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)transactionDidComplete:(id)arg1 ;
-(void)_begin;
-(unsigned long long)_concurrentOverlayDismissalOptions;
-(unsigned long long)_serialOverlayPreDismissalOptions;
@end

