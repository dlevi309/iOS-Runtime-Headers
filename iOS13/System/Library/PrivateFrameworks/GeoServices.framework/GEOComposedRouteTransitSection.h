/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOComposedRouteTransitSection <NSObject>
@property (nonatomic,readonly) SCD_Struct_GE68 fromNodeID; 
@property (nonatomic,readonly) SCD_Struct_GE68 toNodeID; 
@property (nonatomic,readonly) unsigned long long lineID; 
@property (nonatomic,readonly) BOOL isTransfer; 
@property (nonatomic,readonly) int toNodeSignificance; 
@required
-(unsigned long long)lineID;
-(BOOL)isTransfer;
-(SCD_Struct_GE68)fromNodeID;
-(SCD_Struct_GE68)toNodeID;
-(int)toNodeSignificance;

@end

