/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOComposedRouteTransitSection <NSObject>
@property (nonatomic,readonly) SCD_Struct_GE92 fromNodeID; 
@property (nonatomic,readonly) SCD_Struct_GE92 toNodeID; 
@property (nonatomic,readonly) unsigned long long lineID; 
@property (nonatomic,readonly) BOOL isTransfer; 
@property (nonatomic,readonly) int toNodeSignificance; 
@required
-(unsigned long long)lineID;
-(SCD_Struct_GE92)toNodeID;
-(BOOL)isTransfer;
-(SCD_Struct_GE92)fromNodeID;
-(int)toNodeSignificance;

@end

