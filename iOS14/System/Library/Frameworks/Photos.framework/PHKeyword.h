/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHObject.h>

@class NSString;

@interface PHKeyword : PHObject {

	NSString* _title;
	NSString* _shortcut;

}

@property (nonatomic,readonly) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * shortcut;              //@synthesize shortcut=_shortcut - In the implementation block
+(id)entityKeyMap;
+(id)identifierCode;
+(id)fetchType;
+(id)localIdentifierWithUUID:(id)arg1 ;
+(id)fetchKeywordsWithOptions:(id)arg1 ;
+(id)fetchKeywordsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchKeywordsWithTitles:(id)arg1 options:(id)arg2 ;
+(id)fetchKeywordsForAsset:(id)arg1 options:(id)arg2 ;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)managedEntityName;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
-(NSString *)shortcut;
-(id)description;
-(NSString *)title;
@end

