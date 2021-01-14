/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>

@class NSString;

@interface GEOReachability : NSObject <GEOResourceManifestTileGroupObserver> {

	BOOL _networkReachable;
	unsigned long long _errorCount;
	int _symptomsAlternateAdviceToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedReachability;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(id)init;
-(void)_resetErrors;
-(void)reportTileLoadSuccess:(id)arg1 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)_reachabilityChanged:(id)arg1 ;
-(BOOL)networkAvailable;
-(void)reportLoadFailure:(id)arg1 ;
-(BOOL)anyFailures;
-(void)dealloc;
@end

