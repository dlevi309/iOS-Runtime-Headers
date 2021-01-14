/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class SPSearchResultMarker, NSNumber;

@interface SPBeaconPayloadCacheSearchCriteria : NSObject <NSSecureCoding> {

	SPSearchResultMarker* _searchResultMarker;
	NSNumber* _fetchLimit;

}

@property (nonatomic,retain) SPSearchResultMarker * searchResultMarker;              //@synthesize searchResultMarker=_searchResultMarker - In the implementation block
@property (nonatomic,copy) NSNumber * fetchLimit;                                    //@synthesize fetchLimit=_fetchLimit - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)fetchLimit;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setFetchLimit:(NSNumber *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSearchResultMarker:(SPSearchResultMarker *)arg1 ;
-(SPSearchResultMarker *)searchResultMarker;
@end

