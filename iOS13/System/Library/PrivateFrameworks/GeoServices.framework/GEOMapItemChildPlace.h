/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOPDChildPlace, GEOMapItemIdentifier, NSString;

@interface GEOMapItemChildPlace : NSObject {

	GEOPDChildPlace* _childPlace;
	GEOMapItemIdentifier* _identifier;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) GEOMapItemIdentifier * identifier; 
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(GEOMapItemIdentifier *)identifier;
-(id)initWithChildPlace:(id)arg1 ;
@end

