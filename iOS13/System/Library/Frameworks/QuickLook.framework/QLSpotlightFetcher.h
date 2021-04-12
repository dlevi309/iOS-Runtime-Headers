/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(QLSpotlightSearchableItemInfo *)info;
-(id)itemSize;
-(BOOL)isLongFetchOperation;
-(void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)initWithSearchableItemUniqueIdentifier:(id)arg1 queryString:(id)arg2 applicationBundleIdentifier:(id)arg3 ;
@end

