/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)_reachabilityChanged:(id)arg1 ;
-(void)_resetErrors;
-(void)reportTileLoadSuccess:(id)arg1 ;
-(BOOL)anyFailures;
-(void)reportLoadFailure:(id)arg1 ;
-(BOOL)networkAvailable;
@end

