/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError, NSArray, SPSearchResultMarker;

@interface SPAdvertisementCacheSearchResult : NSObject <NSSecureCoding> {

	NSError* _error;
	NSArray* _beaconAdvertisements;
	SPSearchResultMarker* _searchResultMarker;

}

@property (nonatomic,retain) NSArray * beaconAdvertisements;                         //@synthesize beaconAdvertisements=_beaconAdvertisements - In the implementation block
@property (nonatomic,retain) SPSearchResultMarker * searchResultMarker;              //@synthesize searchResultMarker=_searchResultMarker - In the implementation block
@property (nonatomic,retain) NSError * error;                                        //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setSearchResultMarker:(SPSearchResultMarker *)arg1 ;
-(SPSearchResultMarker *)searchResultMarker;
-(void)setBeaconAdvertisements:(NSArray *)arg1 ;
-(NSArray *)beaconAdvertisements;
-(id)initWithBeaconAdvertisements:(id)arg1 searchResultMarker:(id)arg2 error:(id)arg3 ;
@end

