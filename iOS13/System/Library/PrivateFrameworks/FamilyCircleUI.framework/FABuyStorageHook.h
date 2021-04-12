/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <libobjc.A.dylib/PSCloudStorageOffersManagerDelegate.h>
#import <libobjc.A.dylib/AAUIServerHook.h>

@protocol AAUIServerHookDelegate;
@class PSCloudStorageOffersManager, NSString, AAUIServerHookResponse;

@interface FABuyStorageHook : NSObject <PSCloudStorageOffersManagerDelegate, AAUIServerHook> {

	PSCloudStorageOffersManager* _storageOffersManager;
	/*^block*/id _completion;
	BOOL _loadingStorage;
	id<AAUIServerHookDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) AAUIServerHookResponse * serverHookResponse; 
@property (assign,nonatomic,__weak) id<AAUIServerHookDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
-(id<AAUIServerHookDelegate>)delegate;
-(void)setDelegate:(id<AAUIServerHookDelegate>)arg1 ;
-(void)manager:(id)arg1 loadDidFailWithError:(id)arg2 ;
-(void)managerDidCancel:(id)arg1 ;
-(void)manager:(id)arg1 didCompleteWithError:(id)arg2 ;
-(BOOL)shouldMatchElement:(id)arg1 ;
-(BOOL)shouldMatchModel:(id)arg1 ;
-(void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)processObjectModel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_invokeBuyStorageWithServerAttributes:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_completionWithSuccess:(BOOL)arg1 error:(id)arg2 ;
@end

