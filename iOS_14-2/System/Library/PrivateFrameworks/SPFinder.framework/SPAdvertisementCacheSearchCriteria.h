/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class SPSearchResultMarker;

@interface SPAdvertisementCacheSearchCriteria : NSObject <NSSecureCoding> {

	SPSearchResultMarker* _searchResultMarker;

}

@property (nonatomic,retain) SPSearchResultMarker * searchResultMarker;              //@synthesize searchResultMarker=_searchResultMarker - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSearchResultMarker:(SPSearchResultMarker *)arg1 ;
-(SPSearchResultMarker *)searchResultMarker;
@end

