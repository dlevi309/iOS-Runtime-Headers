/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKNavigatorViewController.h>
#import <libobjc.A.dylib/OKNavigatorScrollViewControllerProxyExport.h>
#import <UIKit/UIScrollViewDelegate.h>

@class OKPageViewController, UIScrollView, NSTimer, NSMutableArray, NSMutableDictionary, NSString, OKTimerAnimation;

@interface OKNavigatorScrollViewControllerProxy : OKNavigatorViewController <OKNavigatorScrollViewControllerProxyExport, UIScrollViewDelegate> {

	OKPageViewController* _pageViewController;
	UIScrollView* _scrollView;
	double _velocityTimestamp;
	double _currentVelocity;
	double _currentTilt;
	double _currentRotationZ;
	NSTimer* _autopanningTimer;
	double _velocity2;
	NSMutableArray* _registeredObjects;
	NSMutableDictionary* _registeredActions;
	NSString* _viewDidScrollActionScript;
	CGPoint _lastOffset;
	OKTimerAnimation* _scrollingAnimation;
	double _velocity;
	double _tilt;
	double _rotationZ;

}

@property (assign,nonatomic) double velocity;                       //@synthesize velocity=_velocity - In the implementation block
@property (assign,nonatomic) double tilt;                           //@synthesize tilt=_tilt - In the implementation block
@property (assign,nonatomic) double rotationZ;                      //@synthesize rotationZ=_rotationZ - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(CGSize)contentSize;
-(double)velocity;
-(void)setVelocity:(double)arg1 ;
-(void)viewDidLoad;
-(CGPoint)contentOffset;
-(BOOL)prepareForDisplay;
-(CGRect)contentBounds;
-(double)tilt;
-(void)triggerAction;
-(void)updateParallax;
-(BOOL)prepareForWarmup;
-(BOOL)prepareForUnload;
-(CGSize)layoutFactor;
-(CGRect)visiblePageRect;
-(void)applySettings;
-(void)cancelCouchPotatoPlayback;
-(void)navigateToItemAtKeyPath:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updatePageViewController;
-(void)cleanupScrollEvents;
-(void)navigateToWidgetWithName:(id)arg1 animated:(BOOL)arg2 duration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)navigateToOffset:(CGPoint)arg1 animated:(BOOL)arg2 duration:(double)arg3 timingFunctionName:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)sectorKeysForRect:(CGRect)arg1 ;
-(id)keyForOffset:(CGPoint)arg1 ;
-(OKEventElement*)createElementWithObject:(id)arg1 atOffset:(CGPoint)arg2 withProbability:(unsigned long long)arg3 withLimit:(unsigned long long)arg4 ;
-(OKEventList*)createList;
-(void)insertElement:(OKEventElement*)arg1 inList:(OKEventList*)arg2 ;
-(void)deleteElement:(OKEventElement*)arg1 inList:(OKEventList*)arg2 ;
-(void)doMotionAction:(id)arg1 ;
-(void)doPanAction:(id)arg1 ;
-(void)setSettingContentSize:(CGSize)arg1 ;
-(void)doApplyMotion:(id)arg1 ;
-(void)setTilt:(double)arg1 ;
-(void)setRotationZ:(double)arg1 ;
-(double)rotationZ;
-(void)scrollViewDidScrollProxy;
-(void)registerObjectOnScrollingEvent:(id)arg1 ;
-(void)registerObject:(id)arg1 forActionAtOffset:(CGPoint)arg2 probability:(unsigned long long)arg3 andLimit:(unsigned long long)arg4 ;
-(void)removeRegisteredObject:(id)arg1 forActionAtOffset:(CGPoint)arg2 continuous:(BOOL)arg3 ;
-(id)settingViewDidScrollActionScript;
-(void)setSettingViewDidScrollActionScript:(id)arg1 ;
-(void)doSwipeAction:(id)arg1 ;
@end

