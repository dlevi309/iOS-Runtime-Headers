/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOPListStateCapturing.h>

@class geo_isolater, NSMutableArray, NSString;

@interface GEOResourceManifestUpdateAssertionRegistry : NSObject <GEOPListStateCapturing> {

	geo_isolater* _isolation;
	NSMutableArray* _assertions;
	unsigned long long _stateCaptureHandle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedRegistry;
-(id)init;
-(void)dealloc;
-(void)removeAssertion:(id)arg1 ;
-(id)captureStatePlistWithHints:(os_state_hints_s*)arg1 ;
-(BOOL)hasActiveAssertions;
-(id)activeAssertionsDescription;
-(id)addAssertionForProcess:(id)arg1 reason:(id)arg2 creationTimestamp:(double)arg3 ;
-(id)addInternalAssertionForReason:(id)arg1 ;
@end

