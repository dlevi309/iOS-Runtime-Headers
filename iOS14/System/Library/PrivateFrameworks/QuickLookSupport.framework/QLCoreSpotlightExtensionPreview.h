/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
*/

#import <QuickLookSupport/QLExtensionPreview.h>

@class NSString, NSURL;

@interface QLCoreSpotlightExtensionPreview : QLExtensionPreview {

	NSString* _searchableItemUniqueIdentifier;
	NSString* _query;
	NSString* _searchableItemTitle;
	NSURL* _searchableItemURL;

}

@property (copy) NSString * searchableItemUniqueIdentifier;              //@synthesize searchableItemUniqueIdentifier=_searchableItemUniqueIdentifier - In the implementation block
@property (copy) NSString * query;                                       //@synthesize query=_query - In the implementation block
@property (copy) NSString * searchableItemTitle;                         //@synthesize searchableItemTitle=_searchableItemTitle - In the implementation block
@property (copy) NSURL * searchableItemURL;                              //@synthesize searchableItemURL=_searchableItemURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)query;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setQuery:(NSString *)arg1 ;
-(void)setSearchableItemUniqueIdentifier:(NSString *)arg1 ;
-(NSString *)searchableItemUniqueIdentifier;
-(void)setSearchableItemURL:(NSURL *)arg1 ;
-(void)setSearchableItemTitle:(NSString *)arg1 ;
-(NSString *)searchableItemTitle;
-(NSURL *)searchableItemURL;
-(id)initWithQuery:(id)arg1 searchableItemURL:(id)arg2 searchableItemTitle:(id)arg3 searchableItemUUID:(id)arg4 description:(id)arg5 ;
@end

