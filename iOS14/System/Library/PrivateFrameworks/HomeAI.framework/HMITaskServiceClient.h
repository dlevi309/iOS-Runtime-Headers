/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HMITaskService.h>

@class VCPHomeKitAnalysisService;

@interface HMITaskServiceClient : HMITaskService {

	VCPHomeKitAnalysisService* _remote;

}

@property (readonly) VCPHomeKitAnalysisService * remote;              //@synthesize remote=_remote - In the implementation block
+(id)logCategory;
-(id)init;
-(VCPHomeKitAnalysisService *)remote;
-(int)submitTaskWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)cancelTask:(int)arg1 ;
@end

