/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

