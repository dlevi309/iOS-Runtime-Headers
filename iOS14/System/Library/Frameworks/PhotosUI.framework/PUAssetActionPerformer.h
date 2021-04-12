/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUAssetActionPerformerDelegate, OS_os_log;
@class UIViewController, NSObject, NSArray, NSDictionary;

@interface PUAssetActionPerformer : NSObject {

	/*^block*/id _completionHandler;
	unsigned long long _actionType;
	unsigned long long _state;
	id<PUAssetActionPerformerDelegate> _delegate;
	UIViewController* _presentedViewController;
	unsigned long long _sourceContext;
	NSObject*<OS_os_log> _actionPerformerLog;
	NSArray* _assets;
	NSDictionary* _assetsByAssetCollection;

}

@property (assign,nonatomic,__weak) NSObject*<OS_os_log> actionPerformerLog;                  //@synthesize actionPerformerLog=_actionPerformerLog - In the implementation block
@property (nonatomic,copy,readonly) NSArray * assets;                                         //@synthesize assets=_assets - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * assetsByAssetCollection;                   //@synthesize assetsByAssetCollection=_assetsByAssetCollection - In the implementation block
@property (nonatomic,readonly) unsigned long long actionType;                                 //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                                      //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<PUAssetActionPerformerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIViewController * presentedViewController;                    //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (assign,nonatomic) unsigned long long sourceContext;                                //@synthesize sourceContext=_sourceContext - In the implementation block
-(NSArray *)assets;
-(unsigned long long)actionType;
-(BOOL)presentViewController:(id)arg1 ;
-(id)init;
-(void)performWithCompletionHandler:(/*^block*/id)arg1 ;
-(id<PUAssetActionPerformerDelegate>)delegate;
-(void)performUserInteractionTask;
-(void)setDelegate:(id<PUAssetActionPerformerDelegate>)arg1 ;
-(unsigned long long)state;
-(unsigned long long)sourceContext;
-(NSObject*<OS_os_log>)actionPerformerLog;
-(void)setSourceContext:(unsigned long long)arg1 ;
-(id)initWithActionType:(unsigned long long)arg1 assets:(id)arg2 orAssetsByAssetCollection:(id)arg3 ;
-(BOOL)_requiresUnlockedDevice;
-(void)_performUnlockIfNeeded;
-(void)_completeUnlockTaskWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)preheatUserInteractionTask;
-(BOOL)dismissViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)completeUserInteractionTaskWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)performBackgroundTask;
-(void)completeBackgroundTaskWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)_handleStepFinished:(unsigned long long)arg1 withSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)_transitionToState:(unsigned long long)arg1 withSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)_completeStateWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)setActionPerformerLog:(NSObject*<OS_os_log>)arg1 ;
-(NSDictionary *)assetsByAssetCollection;
-(UIViewController *)presentedViewController;
@end

