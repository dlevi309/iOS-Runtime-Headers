/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOServiceRequestConfiguring.h>

@class NSString;

@interface GEOServiceRequestDefaultConfig : NSObject <GEOServiceRequestConfiguring>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)urlType;
-(SCD_Struct_GE94)dataRequestKindForRequest:(id)arg1 traits:(id)arg2 ;
-(id)additionalURLQueryItems;
-(id)additionalHTTPHeaders;
-(id)debugRequestName;
-(id)serviceTypeNumber;
-(unsigned char)requestCounterInfoTypeForRequest:(id)arg1 ;
@end

