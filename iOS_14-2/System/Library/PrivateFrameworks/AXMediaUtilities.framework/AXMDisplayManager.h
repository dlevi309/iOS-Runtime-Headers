/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isInitialized;
-(void)_updateDisplay:(id)arg1 withCADisplay:(id)arg2 ;
-(double)mobileGestaltOrientation;
-(AXMDisplay *)frontBoardMainDisplay;
-(AXMDisplay *)coreAnimationMainDisplay;
-(id)initAndWaitForMainDisplayConfiguration;
-(void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2 ;
-(void)_updateDisplayPropertiesWithConfiguration:(id)arg1 ;
-(NSString *)description;
-(id)initWithCompletion:(/*^block*/id)arg1 ;
-(FBSDisplayMonitor *)displayMonitor;
-(void)_updateDisplay:(id)arg1 withConfiguration:(id)arg2 ;
-(long long)_discreteOrientationForOrientation:(double)arg1 ;
-(void)setMobileGestaltOrientation:(double)arg1 ;
-(void)setDisplayMonitor:(FBSDisplayMonitor *)arg1 ;
-(void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3 ;
-(void)displayMonitor:(id)arg1 didUpdateIdentity:(id)arg2 withConfiguration:(id)arg3 ;
-(id)_displayPropertiesFromMobileGestalt;
-(void)dealloc;
@end

