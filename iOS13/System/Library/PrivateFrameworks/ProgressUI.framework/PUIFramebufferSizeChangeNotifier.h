/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProgressUI.framework/ProgressUI
*/

#import <libobjc.A.dylib/FBSDisplayObserving.h>

@class NSMutableArray, FBSDisplayMonitor, NSString;

@interface PUIFramebufferSizeChangeNotifier : NSObject <FBSDisplayObserving> {

	NSMutableArray* _listeners;
	FBSDisplayMonitor* _displayMonitor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3 ;
-(void)displayMonitor:(id)arg1 didUpdateIdentity:(id)arg2 withConfiguration:(id)arg3 ;
-(id)addListener:(/*^block*/id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)_onMainQueue_notifyListeners;
@end

