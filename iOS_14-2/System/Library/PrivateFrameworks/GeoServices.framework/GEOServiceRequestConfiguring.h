/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOServiceRequestConfiguring <NSObject>
@optional
-(double)timeout;
-(id)additionalStatesForNetworkEvent;
-(unsigned long long)multipathServiceType;

@required
-(unsigned long long)urlType;
-(id)serviceTypeNumber;
-(id)additionalHTTPHeaders;
-(id)additionalURLQueryItems;
-(id)debugRequestName;
-(SCD_Struct_GE4*)dataRequestKindForRequest:(id)arg1 traits:(id)arg2;

@end

