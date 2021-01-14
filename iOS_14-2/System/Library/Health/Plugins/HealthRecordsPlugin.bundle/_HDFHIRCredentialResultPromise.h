/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/


#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
@class HDFHIRCredentialResult;

@interface _HDFHIRCredentialResultPromise : NSObject {

	HDFHIRCredentialResult* _result;
	os_unfair_lock_s _resultLock;

}

@property (nonatomic,readonly) HDFHIRCredentialResult * result; 
-(id)init;
-(HDFHIRCredentialResult *)result;
-(void)fulfillWithResult:(id)arg1 ;
@end

