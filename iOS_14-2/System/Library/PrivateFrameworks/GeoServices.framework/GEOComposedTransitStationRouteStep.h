/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedTransitRouteStep.h>

@class GEOTransitTransferInfo, GEOTransitEnterExitInfo, GEOPBTransitAccessPoint, NSString;

@interface GEOComposedTransitStationRouteStep : GEOComposedTransitRouteStep {

	unsigned _expectedTime;
	BOOL _isArrivalUncertain;
	GEOTransitTransferInfo* _transitTransfer;
	GEOTransitEnterExitInfo* _enterExitInfo;
	GEOPBTransitAccessPoint* _accessPoint;

}

@property (nonatomic,readonly) GEOPBTransitAccessPoint * accessPoint;                 //@synthesize accessPoint=_accessPoint - In the implementation block
@property (nonatomic,readonly) unsigned expectedTime;                                 //@synthesize expectedTime=_expectedTime - In the implementation block
@property (nonatomic,readonly) GEOTransitTransferInfo * transitTransfer;              //@synthesize transitTransfer=_transitTransfer - In the implementation block
@property (nonatomic,readonly) BOOL isArrivalUncertain;                               //@synthesize isArrivalUncertain=_isArrivalUncertain - In the implementation block
@property (nonatomic,readonly) NSString * exitSign; 
@property (nonatomic,readonly) BOOL displayStop; 
@property (nonatomic,readonly) BOOL hasDisplayStop; 
+(BOOL)supportsSecureCoding;
-(id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 step:(id)arg3 stepIndex:(unsigned long long)arg4 duration:(unsigned)arg5 pointRange:(NSRange)arg6 ;
-(GEOPBTransitAccessPoint *)accessPoint;
-(GEOTransitTransferInfo *)transitTransfer;
-(BOOL)isArrivalUncertain;
-(unsigned)expectedTime;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)exitSign;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_GE98)startGeoCoordinate;
-(SCD_Struct_GE98)endGeoCoordinate;
-(BOOL)displayStop;
-(BOOL)hasDisplayStop;
@end

