/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CLLocation *)currentLocation;
-(void)pause;
-(void)resume;
-(void)_queue_loadLocation:(id)arg1 ;
-(void)locationManagerDidUpdateLocation:(id)arg1 ;
@end

