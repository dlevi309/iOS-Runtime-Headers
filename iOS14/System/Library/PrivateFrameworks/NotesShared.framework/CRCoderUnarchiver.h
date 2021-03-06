/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <NotesShared/NotesShared-Structs.h>
#import <ReminderKit/CRCoder.h>

@class NSUUID, CRDocument, NSMutableArray, NSMutableOrderedSet;

@interface CRCoderUnarchiver : CRCoder {

	NSUUID* _replica;
	CRDocument* _document;
	Document* _currentDocument;
	NSMutableArray* _allocedDocObjects;
	const Document_DocObject* _currentDocObjectForDecodingPtr;
	NSMutableOrderedSet* _typeSetForDecoding;
	NSMutableOrderedSet* _keySet;
	NSMutableArray* _uuidArray;
	NSMutableArray* _completionHandlers;

}

@property (nonatomic,copy) NSUUID * replica;                                                        //@synthesize replica=_replica - In the implementation block
@property (nonatomic,retain) CRDocument * document;                                                 //@synthesize document=_document - In the implementation block
@property (assign,nonatomic) Document* currentDocument;                                             //@synthesize currentDocument=_currentDocument - In the implementation block
@property (nonatomic,retain) NSMutableArray * allocedDocObjects;                                    //@synthesize allocedDocObjects=_allocedDocObjects - In the implementation block
@property (assign,nonatomic) const Document_DocObject* currentDocObjectForDecodingPtr;              //@synthesize currentDocObjectForDecodingPtr=_currentDocObjectForDecodingPtr - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * typeSetForDecoding;                              //@synthesize typeSetForDecoding=_typeSetForDecoding - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * keySet;                                          //@synthesize keySet=_keySet - In the implementation block
@property (nonatomic,retain) NSMutableArray * uuidArray;                                            //@synthesize uuidArray=_uuidArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * completionHandlers;                                   //@synthesize completionHandlers=_completionHandlers - In the implementation block
+(void)initialize;
+(id)decodedDocumentFromData:(id)arg1 replica:(id)arg2 ;
-(id)decodeObjectForKey:(id)arg1 ;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(void)setKeySet:(NSMutableOrderedSet *)arg1 ;
-(const Document_DocObject*)currentDocumentObjectForDecoding;
-(void)setCurrentDocument:(Document*)arg1 ;
-(Document*)currentDocument;
-(id)decodeObjectForProtobufObjectID:(const ObjectID*)arg1 ;
-(void)addDecoderCompletionHandler:(/*^block*/id)arg1 dependency:(id)arg2 for:(id)arg3 ;
-(id)decodeStringForKey:(id)arg1 ;
-(int)decodeInt32ForKey:(id)arg1 ;
-(double)decodeDoubleForKey:(id)arg1 ;
-(void)setCompletionHandlers:(NSMutableArray *)arg1 ;
-(void)setDocument:(CRDocument *)arg1 ;
-(NSUUID *)replica;
-(BOOL)hasDecodableValueForKey:(id)arg1 ;
-(NSMutableArray *)allocedDocObjects;
-(id)decodeDocumentFromData:(id)arg1 replica:(id)arg2 ;
-(NSMutableOrderedSet *)typeSetForDecoding;
-(BOOL)willModifySelfInInitForClass:(Class)arg1 ;
-(void)setReplica:(NSUUID *)arg1 ;
-(void)setUuidArray:(NSMutableArray *)arg1 ;
-(NSMutableArray *)uuidArray;
-(void)setTypeSetForDecoding:(NSMutableOrderedSet *)arg1 ;
-(void)setAllocedDocObjects:(NSMutableArray *)arg1 ;
-(void)setCurrentDocObjectForDecodingPtr:(const Document_DocObject*)arg1 ;
-(void)sortCompletionHandlers;
-(id)allocedObjectAtIndex:(unsigned long long)arg1 outNeedsInit:(BOOL*)arg2 ;
-(const Document_DocObject*)currentDocObjectForDecodingPtr;
-(const ObjectID*)currentObjectIDForKey:(id)arg1 ;
-(id)decodeUUIDForKey:(id)arg1 ;
-(unsigned)decodeUInt32ForKey:(id)arg1 ;
-(id)decodeUUIDFromUUIDIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexForKey:(id)arg1 ;
-(unsigned long long)decodeUInt64ForKey:(id)arg1 ;
-(NSMutableArray *)completionHandlers;
-(CRDocument *)document;
-(NSMutableOrderedSet *)keySet;
@end

