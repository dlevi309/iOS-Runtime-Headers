/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/RBBundlePropertiesLSProviderDelegate.h>
#import <libobjc.A.dylib/RBBundlePropertiesManaging.h>
#import <libobjc.A.dylib/RBStateCapturing.h>

@protocol RBBundlePropertiesManagerDelegate;
@class RBBundlePropertiesLSProvider, RBBundlePropertiesBSXPCProvider, RBBundlePropertiesBackgroundRefreshProvider, RBProcessIndex, NSString;

@interface RBBundlePropertiesManager : NSObject <RBBundlePropertiesLSProviderDelegate, RBBundlePropertiesManaging, RBStateCapturing> {

	RBBundlePropertiesLSProvider* _lsProvider;
	RBBundlePropertiesBSXPCProvider* _xpcProvider;
	RBBundlePropertiesBackgroundRefreshProvider* _bgRefreshProvider;
	RBProcessIndex* _processIndex;
	id<RBBundlePropertiesManagerDelegate> _delegate;
	os_unfair_lock_s _lock;

}

@property (assign,nonatomic,__weak) id<RBBundlePropertiesManagerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * stateCaptureTitle; 
-(id)init;
-(NSString *)debugDescription;
-(id<RBBundlePropertiesManagerDelegate>)delegate;
-(void)setDelegate:(id<RBBundlePropertiesManagerDelegate>)arg1 ;
-(id)captureState;
-(void)removeProcess:(id)arg1 ;
-(void)addProcess:(id)arg1 ;
-(id)propertiesForIdentity:(id)arg1 identifier:(id)arg2 ;
-(NSString *)stateCaptureTitle;
-(void)bundlePropertiesProvider:(id)arg1 didChangePropertiesForProcessIdentities:(id)arg2 ;
@end

