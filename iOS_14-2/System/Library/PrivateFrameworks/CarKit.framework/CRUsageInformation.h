/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/


@class CRCarKitServiceClient;

@interface CRUsageInformation : NSObject {

	CRCarKitServiceClient* _serviceClient;

}

@property (nonatomic,retain) CRCarKitServiceClient * serviceClient;              //@synthesize serviceClient=_serviceClient - In the implementation block
@property (nonatomic,readonly) BOOL shouldSuggestCarPlayTips; 
-(id)init;
-(CRCarKitServiceClient *)serviceClient;
-(void)setServiceClient:(CRCarKitServiceClient *)arg1 ;
-(BOOL)shouldSuggestCarPlayTips;
@end

