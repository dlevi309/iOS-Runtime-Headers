/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/

#import <libobjc.A.dylib/ARUIAnimationSequencing.h>

@class ARUIObserverStore, CADisplayLink, NSString;

@interface ARUIRingGroupGlobalAnimationSequencer : NSObject <ARUIAnimationSequencing> {

	ARUIObserverStore* _observers;
	CADisplayLink* _displayLink;
	double _lastUpdateTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)addObserver:(id)arg1 ;
-(void)_displayLinkFired:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_updateDisplayLink;
-(id)_init;
-(BOOL)_needsDisplayLink;
@end

