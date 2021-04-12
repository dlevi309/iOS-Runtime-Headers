/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessoryiAP2Shim.framework/AccessoryiAP2Shim
*/


#import <AccessoryiAP2Shim/AccessoryiAP2Shim-Structs.h>
@class NSString;

@interface ACCiAP2ShimServerUnregisteredClient : NSObject {

	int _processId;
	NSString* _bundleId;
	SBSProcessAssertionRef _processAssertion;
	long long _processAssertionStartTime;

}

@property (nonatomic,readonly) SBSProcessAssertionRef processAssertion;              //@synthesize processAssertion=_processAssertion - In the implementation block
@property (nonatomic,readonly) long long processAssertionStartTime;                  //@synthesize processAssertionStartTime=_processAssertionStartTime - In the implementation block
@property (nonatomic,readonly) NSString * bundleId;                                  //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) int processId;                                        //@synthesize processId=_processId - In the implementation block
-(NSString *)bundleId;
-(int)processId;
-(id)initWithBundleId:(id)arg1 ;
-(SBSProcessAssertionRef)processAssertion;
-(int)_getProcessId;
-(id)_applicationInfoForBundleIDSync:(id)arg1 ;
-(void)takeProcessAssertion:(id)arg1 ;
-(void)releaseProcessAssertion;
-(long long)processAssertionStartTime;
@end

