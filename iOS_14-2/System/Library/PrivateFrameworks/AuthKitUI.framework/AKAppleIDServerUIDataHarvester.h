/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/


@class NSMutableDictionary, NSDictionary;

@interface AKAppleIDServerUIDataHarvester : NSObject {

	NSMutableDictionary* _harvestedData;

}

@property (nonatomic,copy,readonly) NSDictionary * harvestedData; 
-(id)init;
-(NSDictionary *)harvestedData;
-(void)harvestDataFromServerUIObjectModel:(id)arg1 ;
-(void)harvestDataFromServerHTTPResponse:(id)arg1 ;
-(void)_harvestDataFromClientInfo:(id)arg1 withExtractor:(id)arg2 ;
-(void)harvestIDMSRecoveryInfoFromClientInfo:(id)arg1 ;
-(void)_harvestIDMSRecoveryHeadersInfo:(id)arg1 ;
-(void)harvestIDMSRecoveryInfoFromHeaders:(id)arg1 ;
-(void)harvestDataFromCompanionResponse:(id)arg1 ;
@end

