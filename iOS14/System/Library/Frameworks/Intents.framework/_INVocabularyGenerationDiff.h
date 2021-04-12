/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


@class NSSet, NSArray, NSString;

@interface _INVocabularyGenerationDiff : NSObject {

	BOOL _isFullReset;
	NSSet* _deletedSiriIDs;
	NSArray* _updatedVocabularyItems;
	long long _countOfVocabularyItemsAfterApplying;
	NSString* _intentSlotName;
	NSString* _appBundleID;

}

@property (nonatomic,copy) NSSet * deletedSiriIDs;                                       //@synthesize deletedSiriIDs=_deletedSiriIDs - In the implementation block
@property (nonatomic,copy) NSArray * updatedVocabularyItems;                             //@synthesize updatedVocabularyItems=_updatedVocabularyItems - In the implementation block
@property (assign,nonatomic) long long countOfVocabularyItemsAfterApplying;              //@synthesize countOfVocabularyItemsAfterApplying=_countOfVocabularyItemsAfterApplying - In the implementation block
@property (assign,nonatomic) BOOL isFullReset;                                           //@synthesize isFullReset=_isFullReset - In the implementation block
@property (nonatomic,copy) NSString * intentSlotName;                                    //@synthesize intentSlotName=_intentSlotName - In the implementation block
@property (nonatomic,copy) NSString * appBundleID;                                       //@synthesize appBundleID=_appBundleID - In the implementation block
-(void)setAppBundleID:(NSString *)arg1 ;
-(NSString *)appBundleID;
-(NSSet *)deletedSiriIDs;
-(void)setIsFullReset:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasChanges;
-(NSString *)intentSlotName;
-(void)setUpdatedVocabularyItems:(NSArray *)arg1 ;
-(void)setDeletedSiriIDs:(NSSet *)arg1 ;
-(NSArray *)updatedVocabularyItems;
-(BOOL)isFullReset;
-(void)setCountOfVocabularyItemsAfterApplying:(long long)arg1 ;
-(void)setIntentSlotName:(NSString *)arg1 ;
-(long long)countOfVocabularyItemsAfterApplying;
@end

