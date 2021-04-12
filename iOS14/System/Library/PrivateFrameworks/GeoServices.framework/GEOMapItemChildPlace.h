/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOPDChildPlace, GEOMapItemIdentifier, NSString;

@interface GEOMapItemChildPlace : NSObject {

	GEOPDChildPlace* _childPlace;
	GEOMapItemIdentifier* _identifier;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) GEOMapItemIdentifier * identifier; 
-(NSString *)name;
-(id)initWithChildPlace:(id)arg1 ;
-(GEOMapItemIdentifier *)identifier;
-(BOOL)isEqual:(id)arg1 ;
@end

