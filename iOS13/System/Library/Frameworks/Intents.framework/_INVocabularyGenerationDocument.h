/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSArray;

@interface _INVocabularyGenerationDocument : NSObject <NSCopying> {

	NSMutableDictionary* _itemsBySiriIDCache;
	NSMutableDictionary* _itemsByStringCache;
	BOOL _resetOnNextSync;
	BOOL _haveAssignedAllSiriIDs;
	NSString* _appBundleID;
	NSString* _intentSlot;
	NSString* _validity;
	NSString* _thisGeneration;
	NSArray* _vocabularyItems;

}

@property (assign,nonatomic) BOOL haveAssignedAllSiriIDs;              //@synthesize haveAssignedAllSiriIDs=_haveAssignedAllSiriIDs - In the implementation block
@property (assign,nonatomic) BOOL resetOnNextSync;                     //@synthesize resetOnNextSync=_resetOnNextSync - In the implementation block
@property (nonatomic,copy) NSString * appBundleID;                     //@synthesize appBundleID=_appBundleID - In the implementation block
@property (nonatomic,copy) NSString * intentSlot;                      //@synthesize intentSlot=_intentSlot - In the implementation block
@property (nonatomic,copy) NSString * validity;                        //@synthesize validity=_validity - In the implementation block
@property (nonatomic,copy) NSString * thisGeneration;                  //@synthesize thisGeneration=_thisGeneration - In the implementation block
@property (nonatomic,copy) NSArray * vocabularyItems;                  //@synthesize vocabularyItems=_vocabularyItems - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(NSString *)appBundleID;
-(id)_dictionaryRepresentation;
-(id)_initWithDictionary:(id)arg1 ;
-(void)setAppBundleID:(NSString *)arg1 ;
-(id)_itemsBySiriID;
-(id)_everyVocabularyItemSiriID;
-(id)_vocabularyItemForSiriID:(id)arg1 ;
-(id)_vocabularyItemWithString:(id)arg1 ;
-(void)assignMissingSiriIDsForOptimalDiffFromPreviousDocument:(id)arg1 ;
-(id)diffFromPreviousDocument:(id)arg1 ;
-(void)_clearVocabularyItemCaches;
-(void)setVocabularyItems:(NSArray *)arg1 ;
-(void)_addValueForSelector:(SEL)arg1 toDictionary:(id)arg2 ;
-(id)_valueForSelector:(SEL)arg1 ofClass:(Class)arg2 from:(id)arg3 ;
-(id)_stringForSelector:(SEL)arg1 from:(id)arg2 ;
-(void)_takeValuesFromDictionary:(id)arg1 ;
-(id)writeToFile:(id)arg1 createIntermediateDirectories:(BOOL)arg2 ;
-(BOOL)resetOnNextSync;
-(void)setResetOnNextSync:(BOOL)arg1 ;
-(NSString *)intentSlot;
-(void)setIntentSlot:(NSString *)arg1 ;
-(NSString *)validity;
-(void)setValidity:(NSString *)arg1 ;
-(NSString *)thisGeneration;
-(void)setThisGeneration:(NSString *)arg1 ;
-(NSArray *)vocabularyItems;
-(BOOL)haveAssignedAllSiriIDs;
-(void)setHaveAssignedAllSiriIDs:(BOOL)arg1 ;
@end

