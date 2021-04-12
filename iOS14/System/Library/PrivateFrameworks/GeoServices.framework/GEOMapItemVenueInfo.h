/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOMapItemVenueInfo.h>
@class NSArray, GEOMapItemParentVenue;


@protocol GEOMapItemVenueInfo <NSObject>
@property (nonatomic,readonly) id<GEOVenueIdentifier> venueIdentifier; 
@property (nonatomic,readonly) int venueFeatureType; 
@property (nonatomic,readonly) NSArray * filters; 
@property (nonatomic,readonly) GEOMapItemParentVenue * parent; 
@property (nonatomic,readonly) id<GEOMapItemVenueContents> contents; 
@required
-(id<GEOMapItemVenueContents>)contents;
-(GEOMapItemParentVenue *)parent;
-(NSArray *)filters;
-(id<GEOVenueIdentifier>)venueIdentifier;
-(int)venueFeatureType;

@end


@protocol GEOVenueIdentifier, GEOMapItemVenueContents;
@class NSArray, GEOMapItemParentVenue, NSString;

@interface GEOMapItemVenueInfo : NSObject <GEOMapItemVenueInfo> {

	id<GEOVenueIdentifier> _venueIdentifier;
	int _venueFeatureType;
	NSArray* _filters;
	GEOMapItemParentVenue* _parent;
	id<GEOMapItemVenueContents> _contents;

}

@property (nonatomic,readonly) id<GEOVenueIdentifier> venueIdentifier;              //@synthesize venueIdentifier=_venueIdentifier - In the implementation block
@property (nonatomic,readonly) int venueFeatureType;                                //@synthesize venueFeatureType=_venueFeatureType - In the implementation block
@property (nonatomic,readonly) NSArray * filters;                                   //@synthesize filters=_filters - In the implementation block
@property (nonatomic,readonly) GEOMapItemParentVenue * parent;                      //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) id<GEOMapItemVenueContents> contents;                //@synthesize contents=_contents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<GEOMapItemVenueContents>)contents;
-(GEOMapItemParentVenue *)parent;
-(id)init;
-(NSArray *)filters;
-(id<GEOVenueIdentifier>)venueIdentifier;
-(int)venueFeatureType;
-(id)initWithVenueInfo:(id)arg1 ;
-(id)_filtersFromVenueInfo:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 featureType:(int)arg2 filters:(id)arg3 parent:(id)arg4 contents:(id)arg5 ;
@end

