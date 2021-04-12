/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOPListStateCapturing.h>

@class NSString;

@interface GEOTileRequestBalancer : NSObject <GEOPListStateCapturing> {

	void* _requesters;
	void* _randomIndexGenerator;
	unsigned long long _maxRunningOperationsCount;
	unsigned long long _stateCaptureHandle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)balancerForRequester:(id)arg1 tileKeys:(id)arg2 priorities:(id)arg3 ;
+(unsigned long long)maxRunningOperationsCount;
+(void)setMaxRunningOperationsCount:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)requester:(id)arg1 updateRunningOperationsCount:(unsigned long long)arg2 ;
-(void)removeRequester:(id)arg1 ;
-(void)requester:(id)arg1 removeTileKey:(const GEOTileKey*)arg2 ;
-(void)requester:(id)arg1 updatePriority:(unsigned)arg2 tileKey:(const GEOTileKey*)arg3 ;
-(id)captureStatePlistWithHints:(os_state_hints_s*)arg1 ;
-(id)_initWithMaxRunningOperationsCount:(unsigned long long)arg1 ;
-(void)_addRequester:(id)arg1 tileKeys:(id)arg2 priorities:(id)arg3 ;
-(vector<(anonymous namespace)::RequesterTileKeys, std::__1::allocator<(anonymous namespace)::RequesterTileKeys> >*)requesters;
-(void)_startOperations;
-(void)_removeRequester:(id)arg1 ;
-(void)_requester:(id)arg1 updateRunningOperationsCount:(unsigned long long)arg2 ;
-(void)_requester:(id)arg1 updatePriority:(unsigned)arg2 tileKey:(GEOTileKey)arg3 ;
-(void)_requester:(id)arg1 removeTileKey:(GEOTileKey)arg2 ;
-(void)_pruneEmptyRequesters;
-(void)_startOperationsWithAvailableCount:(unsigned long long)arg1 ;
-(_wrap_iter<(anonymous namespace)::RequesterTileKeys *>*)_next_requester;
-(void)_requester:(id)arg1 incrementRunningOperationsCount:(unsigned long long)arg2 ;
@end

