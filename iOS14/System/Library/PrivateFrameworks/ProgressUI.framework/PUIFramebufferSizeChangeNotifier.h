/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)addListener:(/*^block*/id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3 ;
-(void)displayMonitor:(id)arg1 didUpdateIdentity:(id)arg2 withConfiguration:(id)arg3 ;
-(void)_onMainQueue_notifyListeners;
@end

