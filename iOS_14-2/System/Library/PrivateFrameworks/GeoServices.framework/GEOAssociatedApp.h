/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOPDAssociatedApp, NSString, NSArray;

@interface GEOAssociatedApp : NSObject {

	GEOPDAssociatedApp* _geoAssociatedApp;

}

@property (nonatomic,retain) GEOPDAssociatedApp * geoAssociatedApp;              //@synthesize geoAssociatedApp=_geoAssociatedApp - In the implementation block
@property (nonatomic,readonly) BOOL hasPreferredAppAdamId; 
@property (nonatomic,readonly) NSString * preferredAppAdamId; 
@property (nonatomic,readonly) NSArray * alternateAppAdamIds; 
-(NSString *)preferredAppAdamId;
-(NSArray *)alternateAppAdamIds;
-(BOOL)hasPreferredAppAdamId;
-(id)initWithGEOPDAssociatedApp:(id)arg1 ;
-(GEOPDAssociatedApp *)geoAssociatedApp;
-(void)setGeoAssociatedApp:(GEOPDAssociatedApp *)arg1 ;
@end

