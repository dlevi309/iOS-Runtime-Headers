/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PromotedContentUI.framework/PromotedContentUI
*/

#import <PromotedContentUI/PromotedContentUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/APPCMetricRegister.h>

@class APPrivacyMarker, APPCPromotedContentInfo;

@interface APPCMetricsView : UIView <APPCMetricRegister> {

	 startsCollapsed;
	 frameObserver;
	 currentlyViewable;
	 context;
	 promotedContent;
	 debugView;
	 forcedReadiness;
	 wasTapped;
	 isBackgrounded;
	 timingTracking;
	 visibilityChecker;
	 needToSendOnScreen;
	 interactionPresentationDelegate;
	 visbilityCheckingView;
	 offsetObserver;
	 _isCollapsed;
	 readinessObserver;
	 visibleThresholds;
	 contentView;
	 ready;
	 readyDelegate;
	 promotedContentInfo;

}

@property (assign,__weak,nonatomic) id<APPCMetricsInteractionPresentationDelegate> interactionPresentationDelegate; 
@property (assign,nonatomic) BOOL ready; 
@property (readonly,nonatomic) APPrivacyMarker * privacyMarkerView; 
@property (readonly,nonatomic) CGRect privacyMarkerFrame; 
@property (assign,__weak,nonatomic) id<APPCMetricsViewReadyDelegate> readyDelegate; 
@property (readonly,nonatomic) id<APPCDiagnosticMetricsHelping> diagnosticMetricHelper; 
@property (assign,nonatomic) CGRect frame; 
@property (retain,nonatomic) APPCPromotedContentInfo * promotedContentInfo; 
-(BOOL)ready;
-(void)willMoveToSuperview:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)appWillResignActive:(id)arg1 ;
-(CGRect)frame;
-(void)didMoveToSuperview;
-(void)collapse;
-(void)expand;
-(void)setReady:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id<APPCDiagnosticMetricsHelping>)diagnosticMetricHelper;
-(void)unloadAdViewIfRequired;
-(void)willEnterforeground;
-(void)appBackgrounded:(id)arg1 ;
-(void)appForegrounded:(id)arg1 ;
-(APPCPromotedContentInfo *)promotedContentInfo;
-(void)registerHandlerForAllMetricsWithClosure:(/*^block*/id)arg1 ;
-(void)removeHandler;
-(id<APPCMetricsInteractionPresentationDelegate>)interactionPresentationDelegate;
-(void)setInteractionPresentationDelegate:(id<APPCMetricsInteractionPresentationDelegate>)arg1 ;
-(APPrivacyMarker *)privacyMarkerView;
-(CGRect)privacyMarkerFrame;
-(id<APPCMetricsViewReadyDelegate>)readyDelegate;
-(void)setReadyDelegate:(id<APPCMetricsViewReadyDelegate>)arg1 ;
-(void)setPromotedContentInfo:(APPCPromotedContentInfo *)arg1 ;
-(BOOL)safeExpandAndReturnError:(id*)arg1 ;
-(BOOL)safeCollapseAndReturnError:(id*)arg1 ;
@end

