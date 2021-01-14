/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <libobjc.A.dylib/CPSButtonDelegate.h>
#import <libobjc.A.dylib/CPSApplicationStateObserving.h>

@protocol CPSNavigationAlertQueueDelegate, CPTemplateDelegate;
@class CPNavigationAlert, CPSNavigationAlertView, NSTimer, CPSApplicationStateMonitor, NSString;

@interface CPSNavigationAlertQueue : NSObject <CPSButtonDelegate, CPSApplicationStateObserving> {

	id<CPSNavigationAlertQueueDelegate> _delegate;
	CPNavigationAlert* _currentAlert;
	CPSNavigationAlertView* _currentAlertView;
	NSTimer* _alertTimer;
	id<CPTemplateDelegate> _templateDelegate;
	CPSApplicationStateMonitor* _applicationStateMonitor;

}

@property (nonatomic,retain) NSTimer * alertTimer;                                                     //@synthesize alertTimer=_alertTimer - In the implementation block
@property (assign,nonatomic,__weak) id<CPTemplateDelegate> templateDelegate;                           //@synthesize templateDelegate=_templateDelegate - In the implementation block
@property (assign,nonatomic,__weak) CPSApplicationStateMonitor * applicationStateMonitor;              //@synthesize applicationStateMonitor=_applicationStateMonitor - In the implementation block
@property (nonatomic,__weak,readonly) id<CPSNavigationAlertQueueDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CPNavigationAlert * currentAlert;                                       //@synthesize currentAlert=_currentAlert - In the implementation block
@property (nonatomic,readonly) CPSNavigationAlertView * currentAlertView;                              //@synthesize currentAlertView=_currentAlertView - In the implementation block
@property (nonatomic,readonly) BOOL isDisplayingAlert; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CPSNavigationAlertQueueDelegate>)delegate;
-(CPSApplicationStateMonitor *)applicationStateMonitor;
-(void)setApplicationStateMonitor:(CPSApplicationStateMonitor *)arg1 ;
-(CPNavigationAlert *)currentAlert;
-(void)didSelectButton:(id)arg1 ;
-(id<CPTemplateDelegate>)templateDelegate;
-(void)setTemplateDelegate:(id<CPTemplateDelegate>)arg1 ;
-(void)applicationStateMonitor:(id)arg1 didBecomeActive:(BOOL)arg2 ;
-(NSTimer *)alertTimer;
-(void)beginAnimatingAlertIfPossible;
-(CPSNavigationAlertView *)currentAlertView;
-(BOOL)_canBeginAnimatingAlert;
-(void)_startAlertAnimations;
-(void)_visibleAlertTimerFired:(id)arg1 ;
-(void)dismissCurrentNavigationAlertAnimated:(BOOL)arg1 context:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithDelegate:(id)arg1 applicationStateMonitor:(id)arg2 ;
-(BOOL)isDisplayingAlert;
-(void)prepareNavigationAlert:(id)arg1 templateDelegate:(id)arg2 animated:(BOOL)arg3 ;
-(void)setAlertTimer:(NSTimer *)arg1 ;
@end

