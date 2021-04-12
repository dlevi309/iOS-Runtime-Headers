/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
*/


@interface CTCellularPlanJsonResponseParser : NSObject
+(id)sessionIdFromObject:(id)arg1 ;
+(id)sessionIdFromJsonData:(id)arg1 ;
+(BOOL)parseCreateSessionResponseData:(id)arg1 intoSessionId:(id*)arg2 podId:(id*)arg3 urls:(id*)arg4 error:(id*)arg5 ;
+(BOOL)parseHandoffTokenResponseData:(id)arg1 intoHandoffToken:(id*)arg2 error:(id*)arg3 ;
+(BOOL)parseInitiatePurchaseResponseData:(id)arg1 intoShouldPurchase:(BOOL*)arg2 responseCode:(int*)arg3 responseText:(id*)arg4 buddyML:(id*)arg5 error:(id*)arg6 ;
+(BOOL)parsePurchaseResponseData:(id)arg1 intoShouldDownloadProfile:(BOOL*)arg2 iccid:(id*)arg3 responseCode:(int*)arg4 responseText:(id*)arg5 error:(id*)arg6 ;
+(BOOL)parseSubscriptionsResponseData:(id)arg1 intoSubscriptions:(id*)arg2 error:(id*)arg3 ;
+(BOOL)parseCountryListResponseData:(id)arg1 intoSupportedCountryList:(id*)arg2 intoUnsupportedCountryList:(id*)arg3 error:(id*)arg4 ;
+(BOOL)parseResponseJson:(id)arg1 setUrl:(id*)arg2 setParameters:(id*)arg3 ;
@end

