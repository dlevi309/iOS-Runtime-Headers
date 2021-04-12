/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <libobjc.A.dylib/ATXHeroAppPredictionXPCInterface.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class _PASLock, NSXPCListener, NSString;

@interface ATXHeroAppPredictions : NSObject <ATXHeroAppPredictionXPCInterface, NSXPCListenerDelegate> {

	_PASLock* _lock;
	NSXPCListener* _listener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)donateHeroAppPredictionsWithBundleIds:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)invalidatePredictionsWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)predictionCount;
-(unsigned long long)getPredictionIndexForBundleIdentifier:(id)arg1 ;
-(void)setGuardedDataNow:(id)arg1 ;
-(void)_invalidatePredictionsIfNeeded;
@end

