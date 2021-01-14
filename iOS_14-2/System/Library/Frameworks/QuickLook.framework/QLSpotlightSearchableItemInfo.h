/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)queryString;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setQueryString:(NSString *)arg1 ;
-(void)setApplicationBundleIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)applicationBundleIdentifier;
-(void)setSearchableItemUniqueIdentifier:(NSString *)arg1 ;
-(NSString *)searchableItemUniqueIdentifier;
@end

