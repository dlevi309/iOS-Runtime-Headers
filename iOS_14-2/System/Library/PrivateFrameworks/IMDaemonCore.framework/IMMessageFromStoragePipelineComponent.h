/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <IMCorePipeline/IMPipelineComponent.h>

@class IMDMessageFromStorageController, NSString;

@interface IMMessageFromStoragePipelineComponent : IMPipelineComponent {

	unsigned long long _processingType;
	id _broadcaster;
	IMDMessageFromStorageController* _storageController;
	NSString* _service;

}
-(id)runIndividuallyWithInput:(id)arg1 ;
-(id)initWithStorageProcessingType:(unsigned long long)arg1 storageController:(id)arg2 broadcaster:(id)arg3 account:(id)arg4 ;
@end

