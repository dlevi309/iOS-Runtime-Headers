/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/


@class EFMutableInt64Set, NSMutableArray, NSMutableDictionary, NSArray, MFMessageInfo;

@interface MFMessageInfoOrderedSet : NSObject {

	EFMutableInt64Set* _knownMessageIDs;
	NSMutableArray* _mutableMessageInfos;
	NSMutableDictionary* _duplicateMessageInfos;
	/*^block*/id _comparator;
	/*^block*/id _duplicatePreferenceComparator;

}

@property (nonatomic,copy) id comparator;                                           //@synthesize comparator=_comparator - In the implementation block
@property (nonatomic,copy) id duplicatePreferenceComparator;                        //@synthesize duplicatePreferenceComparator=_duplicatePreferenceComparator - In the implementation block
@property (nonatomic,readonly) NSArray * uniqueMessageInfos; 
@property (nonatomic,readonly) NSArray * allMessageInfos; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) unsigned long long countWithDuplicates; 
@property (nonatomic,readonly) MFMessageInfo * firstMessage; 
@property (nonatomic,readonly) MFMessageInfo * lastMessage; 
-(void)_invalidate;
-(id)duplicatePreferenceComparator;
-(void)setDuplicatePreferenceComparator:(id)arg1 ;
-(void)setComparator:(id)arg1 ;
-(void)_addMessageInfoToDuplicates:(id)arg1 ;
-(void)_removeDuplicatesForMessageInfo:(id)arg1 ;
-(unsigned long long)_scanForMessageInfoSimilarTo:(id)arg1 ;
-(unsigned long long)removeMessageInfoAtIndex:(unsigned long long)arg1 ;
-(id)_duplicateMessageInfosForMessageInfo:(id)arg1 ;
-(void)removeMessageInfosAtIndexes:(id)arg1 ;
-(void)removeAllMessageInfos;
-(void)replaceMessageInfo:(id)arg1 withReplacement:(id)arg2 inPlace:(BOOL)arg3 ;
-(id)allDuplicatesOfMessageInfo:(id)arg1 ;
-(void)enumerateUniqueMessageInfosWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)debugDescription;
-(unsigned long long)count;
-(id)comparator;
-(MFMessageInfo *)firstMessage;
-(id)initWithComparator:(/*^block*/id)arg1 ;
-(MFMessageInfo *)lastMessage;
-(unsigned long long)countWithDuplicates;
-(NSArray *)uniqueMessageInfos;
-(NSArray *)allMessageInfos;
-(unsigned long long)addMessageInfo:(id)arg1 ;
-(unsigned long long)indexOfMessageInfo:(id)arg1 ;
-(unsigned long long)removeMessageInfo:(id)arg1 ;
-(unsigned long long)indexWhereMessageInfoWouldBeInserted:(id)arg1 ;
-(id)messageInfoAtIndex:(unsigned long long)arg1 ;
-(id)messageInfoEquivalentToMessageInfo:(id)arg1 ;
-(id)duplicatesOfMessageInfo:(id)arg1 ;
@end
