/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RERelevanceProviderManager.h>
#import <libobjc.A.dylib/REEngineLocationManagerObserver.h>
#import <libobjc.A.dylib/RESharedLocationRelevanceProviderManagerProperties.h>

@class CLLocation, NSString;

@interface RESharedLocationRelevanceProviderManager : RERelevanceProviderManager <REEngineLocationManagerObserver, RESharedLocationRelevanceProviderManagerProperties> {

	CLLocation* _lastLocationUpdate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLLocation * currentLocation; 
+(BOOL)_wantsSeperateRelevanceQueue;
-(void)pause;
-(void)resume;
-(CLLocation *)currentLocation;
-(void)_queue_loadLocation:(id)arg1 ;
-(void)locationManagerDidUpdateLocation:(id)arg1 ;
@end

