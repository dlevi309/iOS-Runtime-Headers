/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSURL;

@interface VUIOpenURLHandler : NSObject {

	BOOL _openedByDeeplink;
	/*^block*/id _completionHandler;
	NSURL* _deferredOpenURL;
	/*^block*/id _deferredOpenURLCompletion;

}

@property (nonatomic,copy) id completionHandler;                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSURL * deferredOpenURL;                 //@synthesize deferredOpenURL=_deferredOpenURL - In the implementation block
@property (nonatomic,copy) id deferredOpenURLCompletion;              //@synthesize deferredOpenURLCompletion=_deferredOpenURLCompletion - In the implementation block
@property (assign,nonatomic) BOOL openedByDeeplink;                   //@synthesize openedByDeeplink=_openedByDeeplink - In the implementation block
+(id)sharedInstance;
+(id)_getIDfromURLQueryParameters:(id)arg1 idKeyName:(id)arg2 ;
+(void)_insertPageBehindTop:(id)arg1 viewControllers:(id)arg2 clearStack:(BOOL)arg3 ;
+(void)_handleDeeplinkAction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)_pushPageViewControllers:(id)arg1 viewControllers:(id)arg2 skipLastViewController:(BOOL)arg3 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)_processLocalLink:(id)arg1 appContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_processNonLocalLink:(id)arg1 appContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleOpenURLRouterDataSource:(id)arg1 appContext:(id)arg2 clearStack:(BOOL)arg3 startDate:(id)arg4 ;
-(void)setDeferredOpenURL:(NSURL *)arg1 ;
-(void)setDeferredOpenURLCompletion:(id)arg1 ;
-(NSURL *)deferredOpenURL;
-(id)deferredOpenURLCompletion;
-(void)processURL:(id)arg1 appContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_processLocalLibraryLink:(id)arg1 playbackInitiationDate:(id)arg2 openURLCompletionDate:(id)arg3 ;
-(void)_fetchLocalMediaWithAdamID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)parseURL:(id)arg1 appContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)processEntityWithContextData:(id)arg1 appContext:(id)arg2 ;
-(void)saveDeferredURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleDeferredURLWithAppContext:(id)arg1 ;
-(BOOL)openedByDeeplink;
-(void)setOpenedByDeeplink:(BOOL)arg1 ;
@end

