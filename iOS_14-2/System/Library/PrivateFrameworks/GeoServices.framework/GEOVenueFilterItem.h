/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOVenueFilterItem.h>

@protocol GEOVenueFilterItem
@property (nonatomic,readonly) id<GEOVenueIdentifier> filterID; 
@property (nonatomic,readonly) id<GEOVenueLabel> label; 
@property (nonatomic,readonly) BOOL describesParentVenue; 
@required
-(id<GEOVenueIdentifier>)filterID;
-(BOOL)describesParentVenue;
-(id<GEOVenueLabel>)label;

@end


@protocol GEOVenueIdentifier, GEOVenueLabel;
@interface GEOVenueFilterItem : NSObject <GEOVenueFilterItem> {

	id<GEOVenueIdentifier> _filterID;
	id<GEOVenueLabel> _label;
	BOOL _describesParentVenue;

}

@property (nonatomic,readonly) id<GEOVenueIdentifier> filterID;              //@synthesize filterID=_filterID - In the implementation block
@property (nonatomic,readonly) id<GEOVenueLabel> label;                      //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) BOOL describesParentVenue;                    //@synthesize describesParentVenue=_describesParentVenue - In the implementation block
-(id)init;
-(id<GEOVenueIdentifier>)filterID;
-(id)initWithLabel:(id)arg1 filterID:(id)arg2 ;
-(BOOL)describesParentVenue;
-(id)initWithFilterElementInfo:(id)arg1 ;
-(id<GEOVenueLabel>)label;
@end

