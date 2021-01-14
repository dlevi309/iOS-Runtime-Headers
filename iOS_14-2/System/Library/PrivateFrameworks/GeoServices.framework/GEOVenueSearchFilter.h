/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOSearchFilter.h>

@protocol GEOVenueIdentifier;
@interface GEOVenueSearchFilter : NSObject <GEOSearchFilter> {

	id<GEOVenueIdentifier> _identifier;

}

@property (nonatomic,readonly) id<GEOVenueIdentifier> identifier;              //@synthesize identifier=_identifier - In the implementation block
-(id)init;
-(id<GEOVenueIdentifier>)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)applyToSearchParameters:(id)arg1 error:(id*)arg2 ;
@end

