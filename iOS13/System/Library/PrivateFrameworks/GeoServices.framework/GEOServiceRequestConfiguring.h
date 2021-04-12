/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOServiceRequestConfiguring <NSObject>
@optional
-(double)timeout;
-(unsigned long long)multipathServiceType;

@required
-(unsigned long long)urlType;
-(SCD_Struct_GE5*)dataRequestKindForRequest:(id)arg1 traits:(id)arg2;
-(id)additionalURLQueryItems;
-(id)additionalHTTPHeaders;
-(id)debugRequestName;
-(id)serviceTypeNumber;
-(unsigned char)requestCounterInfoTypeForRequest:(id)arg1;

@end

