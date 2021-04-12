/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/

#import <libobjc.A.dylib/SBPluginBundleController.h>

@protocol SBUIPluginControllerHost;
@class NSString;

@interface SBUIPluginController : NSObject <SBPluginBundleController> {

	id<SBUIPluginControllerHost> _host;
	BOOL _isVisible;

}

@property (assign,getter=isVisible,nonatomic) BOOL visible;                         //@synthesize isVisible=_isVisible - In the implementation block
@property (assign,nonatomic,__weak) id<SBUIPluginControllerHost> host;              //@synthesize host=_host - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SBUIPluginControllerHost>)host;
-(void)setHost:(id<SBUIPluginControllerHost>)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(void)registeredWithHost;
-(BOOL)supportedAndEnabled;
-(BOOL)wantsActivationEvent:(int)arg1 eventSource:(int)arg2 interval:(double*)arg3 ;
-(void)prepareForActivationEvent:(int)arg1 eventSource:(int)arg2 afterInterval:(double)arg3 ;
-(void)cancelPendingActivationEvent:(int)arg1 ;
-(BOOL)handleActivationEvent:(int)arg1 eventSource:(int)arg2 context:(void*)arg3 ;
-(BOOL)handledPasscodeUnlockWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)handledButtonDownEventFromSource:(int)arg1 ;
-(BOOL)handledButtonUpEventFromSource:(int)arg1 ;
-(BOOL)handledButtonTapFromSource:(int)arg1 ;
-(id)viewControllerForActivationContext:(id)arg1 ;
@end

