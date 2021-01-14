/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Coherence.framework/Coherence
*/

#import <Coherence/Coherence-Structs.h>
#import <libobjc.A.dylib/CRDataType.h>

@protocol TTMergeableStringDelegate;
@class NSUUID, TTVectorMultiTimestamp, NSObject, NSHashTable, NSMutableAttributedString, CRTTCompatibleDocument, NSString;

@interface TTMergeableString : NSObject <CRDataType> {

	vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> >* _startNodes;
	vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> >* _endNodes;
	vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> >* _orderedSubstrings;
	unsigned _unserializedClock;
	unsigned long long _editCount;
	BOOL _cacheInvalid;
	/*^block*/id _updateRangeBlock;
	BOOL _hasLocalChanges;
	NSUUID* _replicaUUID;
	TTVectorMultiTimestamp* _timestamp;
	NSObject*<TTMergeableStringDelegate> _delegate;
	NSHashTable* _objectsNeedingUpdatedRanges;
	NSMutableAttributedString* _attributedString;
	unsigned long long _replicaTextClock;
	unsigned long long _replicaStyleClock;

}

@property (nonatomic,retain) CRTTCompatibleDocument * document; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TTVectorMultiTimestamp * timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasLocalChanges;                                              //@synthesize hasLocalChanges=_hasLocalChanges - In the implementation block
@property (nonatomic,retain) NSUUID * replicaUUID;                                              //@synthesize replicaUUID=_replicaUUID - In the implementation block
@property (nonatomic,retain) NSMutableAttributedString * attributedString;                      //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,readonly) unsigned long long replicaTextClock;                             //@synthesize replicaTextClock=_replicaTextClock - In the implementation block
@property (nonatomic,readonly) unsigned long long replicaStyleClock;                            //@synthesize replicaStyleClock=_replicaStyleClock - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<TTMergeableStringDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSHashTable * objectsNeedingUpdatedRanges;                       //@synthesize objectsNeedingUpdatedRanges=_objectsNeedingUpdatedRanges - In the implementation block
+(id)unserialisedReplicaID;
-(void)invalidateCache;
-(id)serialize;
-(void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setReplicaUUID:(NSUUID *)arg1 ;
-(unsigned long long)mergeWithString:(id)arg1 mergeTimestamps:(BOOL)arg2 ;
-(void)saveToArchive:(String*)arg1 ;
-(id)initWithArchive:(const String*)arg1 andReplicaID:(id)arg2 andSharedTimestamp:(id)arg3 ;
-(void)setAttributedString:(NSMutableAttributedString *)arg1 ;
-(id)init;
-(id)initWithReplicaID:(id)arg1 asFragment:(BOOL)arg2 ;
-(id)initWithArchive:(const String*)arg1 andReplicaID:(id)arg2 ;
-(void)getSubstrings:(vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> >*)arg1 forCharacterRange:(NSRange)arg2 ;
-(void)deleteSubstrings:(vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> >*)arg1 withCharacterRanges:(vector<_NSRange, std::__1::allocator<_NSRange> >*)arg2 ;
-(vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> >*)orderedSubstrings;
-(TopoSubstring*)splitTopoSubstring:(TopoSubstring*)arg1 atIndex:(unsigned)arg2 ;
-(TopoIDRange)insertAttributedString:(id)arg1 after:(TopoSubstring*)arg2 before:(TopoSubstring*)arg3 ;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(NSObject*<TTMergeableStringDelegate>)delegate;
-(id)selectionForCharacterRanges:(id)arg1 selectionAffinity:(unsigned long long)arg2 ;
-(id)characterRangesForSelection:(id)arg1 selectedSubstringsBlock:(/*^block*/id)arg2 ;
-(BOOL)shouldInvalidateCachedSubstringsWithTimestamp:(id)arg1 ;
-(void)updateClock;
-(void)updateSubstringIndexes;
-(long long)substring:(TopoSubstring*)arg1 modifiedAfter:(id)arg2 ;
-(void)setDocument:(CRTTCompatibleDocument *)arg1 ;
-(void)getSubstrings:(vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> >*)arg1 inOrderedSubstrings:(vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> >*)arg2 forCharacterRange:(NSRange)arg3 ;
-(BOOL)textEitherSideOfSelectionAnchor:(TopoID)arg1 wasModifiedAfter:(id)arg2 ;
-(void)updateTopoIDRange:(TopoIDRange)arg1 toNewRangeID:(TopoIDRange)arg2 ;
-(void)traverseUnordered:(/*^block*/id)arg1 ;
-(NSHashTable *)objectsNeedingUpdatedRanges;
-(void)generateIdsForLocalChangesSafeForSharedTimestamp:(BOOL)arg1 ;
-(void)cleanupObjectsNeedingUpdatedRanges;
-(vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> >*)startNodes;
-(void)dumpMergeData:(id)arg1 ;
-(void)checkTimestampLogStyleErrors:(BOOL)arg1 ;
-(BOOL)canMergeString:(id)arg1 ;
-(void)sortSplitNodes;
-(void)updateAttributedStringAfterMerge;
-(BOOL)graphIsEqual:(id)arg1 ;
-(id)replicaUUIDForCharacterAtIndex:(unsigned long long)arg1 ;
-(id)selectionForCharacterRanges:(id)arg1 ;
-(id)characterRangesForSelection:(id)arg1 ;
-(void)resetLocalReplicaClocksToTimestampValues;
-(void)_testSetTextTimestamp:(unsigned long long)arg1 ;
-(void)updateTimestampsInRange:(NSRange)arg1 ;
-(TTVectorMultiTimestamp *)timestamp;
-(void)moveRange:(NSRange)arg1 toIndex:(unsigned long long)arg2 ;
-(TopoSubstring*)getSubstringBeforeTopoID:(TopoID)arg1 ;
-(void)getSubstrings:(vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> >*)arg1 forTopoIDRange:(TopoIDRange)arg2 ;
-(void)getCharacterRanges:(vector<_NSRange, std::__1::allocator<_NSRange> >*)arg1 forSubstrings:(vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> >*)arg2 ;
-(unsigned long long)getCharacterIndexForCharID:(TopoID)arg1 ;
-(void)enumerateSubstrings:(/*^block*/id)arg1 ;
-(void)enumerateRangesModifiedAfter:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)selection:(id)arg1 wasModifiedAfter:(id)arg2 ;
-(unsigned long long)mergeWithString:(id)arg1 ;
-(id)dotDescription:(unsigned long long)arg1 ;
-(BOOL)hasLocalChanges;
-(void)setHasLocalChanges:(BOOL)arg1 ;
-(unsigned long long)replicaTextClock;
-(unsigned long long)replicaStyleClock;
-(NSMutableAttributedString *)attributedString;
-(BOOL)check:(id*)arg1 ;
-(id)initWithArchive:(const String*)arg1 andReplicaID:(id)arg2 withOrderedSubstrings:(vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> >*)arg3 timestamp:(id)arg4 ;
-(id)i_saveDeltasSinceTimestamp:(id)arg1 toArchive:(String*)arg2 ;
-(void)saveDeltaSinceTimestamp:(id)arg1 toArchive:(String*)arg2 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withAttributedString:(id)arg2 ;
-(unsigned long long)length;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(void)updateCache;
-(void)mergeWith:(id)arg1 ;
-(void)setDelegate:(NSObject*<TTMergeableStringDelegate>)arg1 ;
-(id)initWithArchive:(const String*)arg1 andReplicaID:(id)arg2 withOrderedSubstrings:(vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> >*)arg3 ;
-(void)saveSubstrings:(vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> >*)arg1 archiveSet:(unordered_set<TopoSubstring *, std::__1::hash<TopoSubstring *>, std::__1::equal_to<TopoSubstring *>, std::__1::allocator<TopoSubstring *> >*)arg2 linkSet:(unordered_set<TopoSubstring *, std::__1::hash<TopoSubstring *>, std::__1::equal_to<TopoSubstring *>, std::__1::allocator<TopoSubstring *> >*)arg3 archivedString:(id*)arg4 toArchive:(String*)arg5 ;
-(id)serializeDeltaSinceTimestamp:(id)arg1 ;
-(NSString *)description;
-(void)endEditing;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(void)deleteCharactersInRange:(NSRange)arg1 ;
-(unsigned long long)hash;
-(NSUUID *)replicaUUID;
-(void)coalesce;
-(id)string;
-(vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> >*)endNodes;
-(void)insertString:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(CRTTCompatibleDocument *)document;
-(id)tombstone;
-(id)initWithReplicaID:(id)arg1 ;
-(id)initWithData:(id)arg1 andReplicaID:(id)arg2 ;
-(BOOL)isFragment;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(TTVectorMultiTimestamp *)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)generateIdsForLocalChanges;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)beginEditing;
@end

