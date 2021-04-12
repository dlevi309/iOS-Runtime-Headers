/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <libobjc.A.dylib/ATXCachedTransitionPredictorProtocol.h>

@protocol ATXLocationManagerProtocol;
@class ATXPredictedTransitionsCache, NSString;

@interface ATXCommutePredictor : NSObject <ATXCachedTransitionPredictorProtocol> {

	ATXPredictedTransitionsCache* _cache;
	id<ATXLocationManagerProtocol> _manager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)prewarmOnActivity:(id)arg1 ;
-(id)getNextTransitionOnActivity:(id)arg1 ;
-(id)initWithTransitionsCache:(id)arg1 locationManager:(id)arg2 ;
@end

