/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPSpotlightQueryDescriptor.h>

@class NSString;

@interface FPSearchQueryDescriptor : FPSpotlightQueryDescriptor {

	NSString* _searchQueryString;

}

@property (copy) NSString * searchQueryString;              //@synthesize searchQueryString=_searchQueryString - In the implementation block
-(void)setSearchQueryString:(NSString *)arg1 ;
-(id)_scopes;
-(id)queryStringForMountPoint:(id)arg1 ;
-(id)name;
-(BOOL)keepCollectorsAlive;
-(void)augmentQueryContext:(id)arg1 ;
-(BOOL)isEqualToItemQueryDescriptor:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)searchQueryString;
@end

