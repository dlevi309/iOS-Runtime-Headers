/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/


@class NSMutableDictionary, NSDictionary;

@interface AKAppleIDServerUIDataHarvester : NSObject {

	NSMutableDictionary* _harvestedData;

}

@property (nonatomic,copy,readonly) NSDictionary * harvestedData; 
-(id)init;
-(void)harvestDataFromServerHTTPResponse:(id)arg1 ;
-(NSDictionary *)harvestedData;
-(void)harvestDataFromServerUIObjectModel:(id)arg1 ;
-(void)_harvestDataFromClientInfo:(id)arg1 withExtractor:(id)arg2 ;
-(void)harvestIDMSRecoveryInfoFromClientInfo:(id)arg1 ;
-(void)_harvestIDMSRecoveryHeadersInfo:(id)arg1 ;
-(void)harvestIDMSRecoveryInfoFromHeaders:(id)arg1 ;
-(void)harvestDataFromCompanionResponse:(id)arg1 ;
@end

