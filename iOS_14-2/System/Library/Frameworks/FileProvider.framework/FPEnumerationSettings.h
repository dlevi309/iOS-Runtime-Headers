/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FileProvider-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSFileProviderSearchQuery;

@interface FPEnumerationSettings : NSObject <NSSecureCoding, NSCopying> {

	NSArray* _sortDescriptors;
	NSFileProviderSearchQuery* _searchQuery;

}

@property (copy) NSArray * sortDescriptors;                            //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (copy) NSFileProviderSearchQuery * searchQuery;              //@synthesize searchQuery=_searchQuery - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)sortDescriptors;
-(NSFileProviderSearchQuery *)searchQuery;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(void)setSearchQuery:(NSFileProviderSearchQuery *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

