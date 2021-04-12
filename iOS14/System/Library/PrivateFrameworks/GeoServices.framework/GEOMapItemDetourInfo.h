/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOPDResultDetourInfo, NSData;

@interface GEOMapItemDetourInfo : NSObject {

	GEOPDResultDetourInfo* _detourInfo;

}

@property (getter=_detourInfo,nonatomic,readonly) GEOPDResultDetourInfo * detourInfo;              //@synthesize detourInfo=_detourInfo - In the implementation block
@property (nonatomic,readonly) double detourTime; 
@property (nonatomic,readonly) double timeToPlace; 
@property (nonatomic,readonly) double detourDistance; 
@property (nonatomic,readonly) double distanceToPlace; 
@property (nonatomic,readonly) NSData * detourInfoAsData; 
-(id)init;
-(NSData *)detourInfoAsData;
-(id)initWithResultDetourInfo:(id)arg1 ;
-(id)_detourInfo;
-(double)detourTime;
-(double)timeToPlace;
-(double)detourDistance;
-(double)distanceToPlace;
@end

