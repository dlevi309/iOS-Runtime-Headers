/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)localIdentifierWithUUID:(id)arg1 ;
+(id)managedEntityName;
+(id)fetchType;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)identifierCode;
+(id)entityKeyMap;
+(id)fetchKeywordsWithOptions:(id)arg1 ;
+(id)fetchKeywordsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchKeywordsWithTitles:(id)arg1 options:(id)arg2 ;
+(id)fetchKeywordsForAsset:(id)arg1 options:(id)arg2 ;
-(id)description;
-(NSString *)title;
-(NSString *)shortcut;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
@end

