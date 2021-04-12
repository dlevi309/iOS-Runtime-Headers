/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface QLSpotlightSearchableItemInfo : NSObject <NSSecureCoding> {

	NSString* _queryString;
	NSString* _searchableItemUniqueIdentifier;
	NSString* _applicationBundleIdentifier;

}

@property (nonatomic,copy) NSString * queryString;                                 //@synthesize queryString=_queryString - In the implementation block
@property (nonatomic,copy) NSString * searchableItemUniqueIdentifier;              //@synthesize searchableItemUniqueIdentifier=_searchableItemUniqueIdentifier - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifier;                 //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)spotlightInfoWithUniqueIdentifier:(id)arg1 queryString:(id)arg2 applicationBundleIdentifier:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSString *)applicationBundleIdentifier;
-(NSString *)queryString;
-(void)setQueryString:(NSString *)arg1 ;
-(void)setSearchableItemUniqueIdentifier:(NSString *)arg1 ;
-(NSString *)searchableItemUniqueIdentifier;
@end

