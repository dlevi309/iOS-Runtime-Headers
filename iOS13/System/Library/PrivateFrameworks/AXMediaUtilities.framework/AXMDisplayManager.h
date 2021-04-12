/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <libobjc.A.dylib/FBSDisplayObserving.h>

@protocol OS_dispatch_queue;
@class NSObject, AXMDisplay, FBSDisplayMonitor, NSString;

@interface AXMDisplayManager : NSObject <FBSDisplayObserving> {

	NSObject*<OS_dispatch_queue> _queue;
	AXMDisplay* _queue_CoreAnimationMainDisplay;
	AXMDisplay* _queue_FrontBoardMainDisplay;
	BOOL _initialized;
	FBSDisplayMonitor* _displayMonitor;
	double _mobileGestaltOrientation;

}

@property (nonatomic,retain) FBSDisplayMonitor * displayMonitor;                   //@synthesize displayMonitor=_displayMonitor - In the implementation block
@property (assign,nonatomic) double mobileGestaltOrientation;                      //@synthesize mobileGestaltOrientation=_mobileGestaltOrientation - In the implementation block
@property (nonatomic,readonly) AXMDisplay * frontBoardMainDisplay; 
@property (nonatomic,readonly) AXMDisplay * coreAnimationMainDisplay; 
@property (nonatomic,readonly) BOOL isInitialized; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3 ;
-(void)displayMonitor:(id)arg1 didUpdateIdentity:(id)arg2 withConfiguration:(id)arg3 ;
-(void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2 ;
-(BOOL)isInitialized;
-(id)initWithCompletion:(/*^block*/id)arg1 ;
-(FBSDisplayMonitor *)displayMonitor;
-(AXMDisplay *)coreAnimationMainDisplay;
-(void)setDisplayMonitor:(FBSDisplayMonitor *)arg1 ;
-(void)_updateDisplay:(id)arg1 withConfiguration:(id)arg2 ;
-(void)_updateDisplay:(id)arg1 withCADisplay:(id)arg2 ;
-(AXMDisplay *)frontBoardMainDisplay;
-(id)_displayPropertiesFromMobileGestalt;
-(double)mobileGestaltOrientation;
-(long long)_discreteOrientationForOrientation:(double)arg1 ;
-(void)_updateDisplayPropertiesWithConfiguration:(id)arg1 ;
-(id)initAndWaitForMainDisplayConfiguration;
-(void)setMobileGestaltOrientation:(double)arg1 ;
@end

