/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithGEOPDAssociatedApp:(id)arg1 ;
-(NSString *)preferredAppAdamId;
-(NSArray *)alternateAppAdamIds;
-(BOOL)hasPreferredAppAdamId;
-(GEOPDAssociatedApp *)geoAssociatedApp;
-(void)setGeoAssociatedApp:(GEOPDAssociatedApp *)arg1 ;
@end

