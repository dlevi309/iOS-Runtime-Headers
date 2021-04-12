/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithResultDetourInfo:(id)arg1 ;
-(id)_detourInfo;
-(double)detourTime;
-(double)timeToPlace;
-(double)detourDistance;
-(double)distanceToPlace;
-(NSData *)detourInfoAsData;
@end

