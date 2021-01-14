/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)captureStatePlistWithHints:(os_state_hints_s*)arg1 ;
-(void)removeAssertion:(id)arg1 ;
-(id)addAssertionForProcess:(id)arg1 reason:(id)arg2 creationTimestamp:(double)arg3 ;
-(BOOL)hasActiveAssertions;
-(id)addInternalAssertionForReason:(id)arg1 ;
-(id)activeAssertionsDescription;
-(void)dealloc;
@end

