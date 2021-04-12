/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreOverlays.framework/AppStoreOverlays
*/

#import <libobjc.A.dylib/ASORemoteAppOverlayDelegate.h>

@protocol ASORemoteContextProvider, ASOOverlay;
@class ASCSignpostSpan, ASOOverlayTransitionContext, NSString;

@interface ASORemoteOverlay : NSObject <ASORemoteAppOverlayDelegate> {

	BOOL _isLoaded;
	BOOL _isActive;
	id<ASORemoteContextProvider> _contextProvider;
	id<ASOOverlay> _overlay;
	ASCSignpostSpan* _hostSpan;
	ASOOverlayTransitionContext* _presentationTransitionContext;

}

@property (assign,nonatomic) BOOL isLoaded;                                                            //@synthesize isLoaded=_isLoaded - In the implementation block
@property (assign,nonatomic) BOOL isActive;                                                            //@synthesize isActive=_isActive - In the implementation block
@property (nonatomic,retain) ASOOverlayTransitionContext * presentationTransitionContext;              //@synthesize presentationTransitionContext=_presentationTransitionContext - In the implementation block
@property (assign,nonatomic,__weak) id<ASORemoteContextProvider> contextProvider;                      //@synthesize contextProvider=_contextProvider - In the implementation block
@property (nonatomic,retain) id<ASOOverlay> overlay;                                                   //@synthesize overlay=_overlay - In the implementation block
@property (nonatomic,retain,readonly) ASCSignpostSpan * hostSpan;                                      //@synthesize hostSpan=_hostSpan - In the implementation block
@property (nonatomic,copy,readonly) id<ASOOverlayConfiguration> overlayConfiguration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)dismissOverlayOperationWithContextProvider:(id)arg1 ;
-(void)setIsLoaded:(BOOL)arg1 ;
-(id<ASORemoteContextProvider>)contextProvider;
-(BOOL)isActive;
-(id)context;
-(void)setContextProvider:(id<ASORemoteContextProvider>)arg1 ;
-(void)setOverlay:(id<ASOOverlay>)arg1 ;
-(id<ASOOverlay>)overlay;
-(void)finishWithError:(id)arg1 ;
-(void)setIsActive:(BOOL)arg1 ;
-(BOOL)isLoaded;
-(id<ASOOverlayConfiguration>)overlayConfiguration;
-(void)remoteStoreOverlayDidFailToLoadWithError:(id)arg1 ;
-(void)remoteStoreOverlayWillStartPresenting:(id)arg1 executeBlock:(/*^block*/id)arg2 ;
-(void)remoteStoreOverlayDidFinishPresentation:(id)arg1 ;
-(void)remoteStoreOverlayWillStartDismissing:(id)arg1 executeBlock:(/*^block*/id)arg2 ;
-(void)remoteStoreOverlayDidFinishDismissal:(id)arg1 ;
-(id)initWithOverlay:(id)arg1 contextProvider:(id)arg2 hostSpan:(id)arg3 ;
-(id)presentOverlayOperation;
-(ASOOverlayTransitionContext *)presentationTransitionContext;
-(ASCSignpostSpan *)hostSpan;
-(void)setPresentationTransitionContext:(ASOOverlayTransitionContext *)arg1 ;
@end

