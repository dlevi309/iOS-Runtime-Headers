/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/

#import <libobjc.A.dylib/SBUIActiveOrientationObserver.h>

@protocol SSActiveInterfaceOrientationObserverDelegate;
@class NSString;

@interface SSActiveInterfaceOrientationObserver : NSObject <SBUIActiveOrientationObserver> {

	id<SSActiveInterfaceOrientationObserverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SSActiveInterfaceOrientationObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopObserving;
-(void)_registerForActiveInterfaceOrientationChanges;
-(id<SSActiveInterfaceOrientationObserverDelegate>)delegate;
-(void)beginObserving;
-(id)_sbUIUserAgent;
-(void)_unregisterForActiveInterfaceOrientationChanges;
-(void)setDelegate:(id<SSActiveInterfaceOrientationObserverDelegate>)arg1 ;
-(void)_observeActiveInterfaceOrientationChangeToOrientation:(long long)arg1 withDuration:(double)arg2 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3 ;
-(void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1 ;
@end

