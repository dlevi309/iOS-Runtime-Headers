/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHAssetPropertySet.h>

@class NSSet;

@interface PHAssetKeywordProperties : PHAssetPropertySet {

	NSSet* _keywordTitles;

}

@property (nonatomic,copy,readonly) NSSet * keywordTitles;              //@synthesize keywordTitles=_keywordTitles - In the implementation block
+(id)propertiesToFetch;
+(id)entityName;
+(BOOL)isToMany;
+(id)propertySetName;
+(id)keyPathFromPrimaryObject;
+(id)keyPathToPrimaryObject;
-(NSSet *)keywordTitles;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
@end

