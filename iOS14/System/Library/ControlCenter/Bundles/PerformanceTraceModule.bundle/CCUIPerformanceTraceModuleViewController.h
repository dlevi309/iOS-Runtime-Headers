/*
* Generated on Thursday, January 14, 2021 at 2:29:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/PerformanceTraceModule.bundle/PerformanceTraceModule
*/

#import <PerformanceTraceModule/PerformanceTraceModule-Structs.h>
#import <ControlCenterUIKit/CCUIButtonModuleViewController.h>
#import <libobjc.A.dylib/CCUIContentModuleContentViewController.h>
#import <libobjc.A.dylib/TCArtraceSessionDelegate.h>
#import <libobjc.A.dylib/PTTraceSessionDelegate.h>

@class UIViewPropertyAnimator, TCArtraceSession, NSArray, PTTraceSession, CCUIContentModuleContext, NSString;

@interface CCUIPerformanceTraceModuleViewController : CCUIButtonModuleViewController <CCUIContentModuleContentViewController, TCArtraceSessionDelegate, PTTraceSessionDelegate> {

	unsigned long long state;
	TCArtraceSession* _traceSession;
	NSArray* _traceStartScenes;
	PTTraceSession* _performanceTraceSession;
	CCUIContentModuleContext* _contentModuleContext;

}

@property (nonatomic,retain) CCUIContentModuleContext * contentModuleContext;               //@synthesize contentModuleContext=_contentModuleContext - In the implementation block
@property (nonatomic,readonly) double preferredExpandedContentHeight; 
@property (nonatomic,readonly) double preferredExpandedContentWidth; 
@property (nonatomic,readonly) double preferredExpandedContinuousCornerRadius; 
@property (nonatomic,readonly) BOOL providesOwnPlatter; 
@property (nonatomic,readonly) UIViewPropertyAnimator * customAnimator; 
@property (nonatomic,readonly) BOOL shouldPerformHoverInteraction; 
@property (nonatomic,readonly) BOOL shouldPerformClickInteraction; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSupported;
-(void)buttonTapped:(id)arg1 forEvent:(id)arg2 ;
-(BOOL)shouldBeginTransitionToExpandedContentModule;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setContentModuleContext:(CCUIContentModuleContext *)arg1 ;
-(CCUIContentModuleContext *)contentModuleContext;
-(double)preferredExpandedContentHeight;
-(BOOL)_canShowWhileLocked;
-(void)_stopRecording;
-(void)_updateState:(int)arg1 ;
-(void)_startRecording;
-(void)performanceTraceDidStart:(id)arg1 ;
-(void)performanceTraceDidComplete:(id)arg1 withToken:(id)arg2 withError:(id)arg3 ;
-(id)_getFGSceneIdentifiers;
-(void)artraceSession:(id)arg1 didReceiveOutput:(id)arg2 ;
-(void)artraceSessionDidComplete:(id)arg1 ;
@end

