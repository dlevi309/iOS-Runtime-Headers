/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPSpotlightQueryDescriptor.h>

@class NSString;

@interface FPSearchQueryDescriptor : FPSpotlightQueryDescriptor {

	NSString* _searchQueryString;

}

@property (copy) NSString * searchQueryString;              //@synthesize searchQueryString=_searchQueryString - In the implementation block
-(unsigned long long)hash;
-(id)_scopes;
-(NSString *)searchQueryString;
-(void)setSearchQueryString:(NSString *)arg1 ;
-(id)queryStringForMountPoint:(id)arg1 ;
-(BOOL)keepCollectorsAlive;
-(void)augmentQueryContext:(id)arg1 ;
-(BOOL)isEqualToItemQueryDescriptor:(id)arg1 ;
@end

