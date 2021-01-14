/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLCombinedAssetSearchResult.h>

@class NSString;

@interface PLNamedCombinedAssetSearchResult : PLCombinedAssetSearchResult {

	NSString* _name;

}

@property (nonatomic,copy) NSString * name;              //@synthesize name=_name - In the implementation block
-(id)contentStrings;
-(id)matchRanges;
-(unsigned long long)matchCount;
-(BOOL)hasSpecialName;
-(id)initWithName:(id)arg1 assetSearchResults:(id)arg2 canOverlap:(BOOL)arg3 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
@end

