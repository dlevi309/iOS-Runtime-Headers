/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QLItemFetcher.h>

@class NSString, QLSpotlightSearchableItemInfo;

@interface QLSpotlightFetcher : QLItemFetcher {

	NSString* _searchableItemUniqueIdentifier;
	NSString* _queryString;
	NSString* _applicationBundleIdentifier;
	QLSpotlightSearchableItemInfo* _info;

}

@property (readonly) QLSpotlightSearchableItemInfo * info;              //@synthesize info=_info - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithSearchableItemUniqueIdentifier:(id)arg1 queryString:(id)arg2 applicationBundleIdentifier:(id)arg3 ;
-(id)itemSize;
-(QLSpotlightSearchableItemInfo *)info;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isLongFetchOperation;
-(void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
@end

