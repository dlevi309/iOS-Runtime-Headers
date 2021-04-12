/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(GEOMapItemParentVenue *)parent;
-(id<GEOMapItemVenueContents>)contents;
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<GEOVenueIdentifier> venueIdentifier;              //@synthesize venueIdentifier=_venueIdentifier - In the implementation block
@property (nonatomic,readonly) int venueFeatureType;                                //@synthesize venueFeatureType=_venueFeatureType - In the implementation block
@property (nonatomic,readonly) NSArray * filters;                                   //@synthesize filters=_filters - In the implementation block
@property (nonatomic,readonly) GEOMapItemParentVenue * parent;                      //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) id<GEOMapItemVenueContents> contents;                //@synthesize contents=_contents - In the implementation block
-(id)init;
-(GEOMapItemParentVenue *)parent;
-(id<GEOMapItemVenueContents>)contents;
-(NSArray *)filters;
-(id<GEOVenueIdentifier>)venueIdentifier;
-(int)venueFeatureType;
-(id)initWithVenueInfo:(id)arg1 ;
-(id)_filtersFromVenueInfo:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 featureType:(int)arg2 filters:(id)arg3 parent:(id)arg4 contents:(id)arg5 ;
@end

