/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)captureState;
-(id)init;
-(id<RBBundlePropertiesManagerDelegate>)delegate;
-(NSString *)debugDescription;
-(void)setDelegate:(id<RBBundlePropertiesManagerDelegate>)arg1 ;
-(NSString *)stateCaptureTitle;
-(void)addProcess:(id)arg1 ;
-(void)bundlePropertiesProvider:(id)arg1 didChangePropertiesForProcessIdentities:(id)arg2 ;
-(id)propertiesForIdentity:(id)arg1 identifier:(id)arg2 ;
-(void)removeProcess:(id)arg1 ;
@end

