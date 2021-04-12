/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/


@class CRCarKitServiceClient;

@interface CRUsageInformation : NSObject {

	CRCarKitServiceClient* _serviceClient;

}

@property (nonatomic,retain) CRCarKitServiceClient * serviceClient;              //@synthesize serviceClient=_serviceClient - In the implementation block
@property (nonatomic,readonly) BOOL shouldSuggestCarPlayTips; 
-(id)init;
-(void)setServiceClient:(CRCarKitServiceClient *)arg1 ;
-(CRCarKitServiceClient *)serviceClient;
-(BOOL)shouldSuggestCarPlayTips;
@end

