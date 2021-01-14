/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
*/

#import <libobjc.A.dylib/CARSessionObserving.h>
#import <libobjc.A.dylib/ATXMotionManagerDelegate.h>
#import <libobjc.A.dylib/ATXModeFeaturizer.h>

@protocol ATXModeFeaturizerDelegate;
@class _PASLock, NSString;

@interface ATXModeDrivingFeaturizer : NSObject <CARSessionObserving, ATXMotionManagerDelegate, ATXModeFeaturizer> {

	_PASLock* _lock;
	id<ATXModeFeaturizerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<ATXModeFeaturizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)sessionDidDisconnect:(id)arg1 ;
-(void)sessionDidConnect:(id)arg1 ;
-(void)stopListening;
-(id)init;
-(id<ATXModeFeaturizerDelegate>)delegate;
-(void)beginListening;
-(void)setDelegate:(id<ATXModeFeaturizerDelegate>)arg1 ;
-(id)provideFeatures;
-(void)_updateFeatures;
-(void)didUpdateMotionType:(long long)arg1 isActive:(BOOL)arg2 ;
@end

