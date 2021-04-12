/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOPDTip, NSString;

@interface GEOMapItemTip : NSObject {

	GEOPDTip* _geoTip;

}

@property (nonatomic,retain) GEOPDTip * geoTip;                          //@synthesize geoTip=_geoTip - In the implementation block
@property (nonatomic,readonly) BOOL hasTipTime; 
@property (nonatomic,readonly) double tipTime; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * localizedSnippet; 
@property (nonatomic,readonly) NSString * bestImageURL; 
@property (nonatomic,readonly) BOOL hasTipId; 
@property (nonatomic,readonly) NSString * tipId; 
-(NSString *)tipId;
-(GEOPDTip *)geoTip;
-(BOOL)hasTipTime;
-(double)tipTime;
-(void)setGeoTip:(GEOPDTip *)arg1 ;
-(BOOL)hasTipId;
-(id)initWithGEOPDTip:(id)arg1 ;
-(NSString *)localizedSnippet;
-(NSString *)bestImageURL;
-(NSString *)name;
@end

