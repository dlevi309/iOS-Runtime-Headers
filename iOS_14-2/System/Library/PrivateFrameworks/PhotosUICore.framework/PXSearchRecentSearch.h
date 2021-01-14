/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface PXSearchRecentSearch : NSObject <NSSecureCoding> {

	NSString* _searchText;
	NSArray* _representedObjects;

}

@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * searchText;                     //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,readonly) NSArray * representedObjects;              //@synthesize representedObjects=_representedObjects - In the implementation block
+(id)new;
+(BOOL)supportsSecureCoding;
+(BOOL)_isSupportedRepresentedObjects:(id)arg1 ;
-(id)initWithRepresentedObjects:(id)arg1 searchText:(id)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSString *)searchText;
-(id)dictionaryForArchiving;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)representedObjects;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

