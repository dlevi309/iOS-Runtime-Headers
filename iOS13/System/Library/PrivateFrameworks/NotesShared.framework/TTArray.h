/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/CRCoding.h>
#import <libobjc.A.dylib/TTMergeableStringDelegate.h>
#import <libobjc.A.dylib/CRDataType.h>

@protocol CRUndoDelegate;
@class CRDocument, NSObject, TTMergeableAttributedString, NSString, NSArray, NSUUID;

@interface TTArray : NSObject <CRCoding, TTMergeableStringDelegate, CRDataType> {

	CRDocument* _document;
	NSObject*<CRUndoDelegate> _delegate;
	TTMergeableAttributedString* _contents;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) TTMergeableAttributedString * contents;               //@synthesize contents=_contents - In the implementation block
@property (nonatomic,readonly) NSArray * nsArray; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSUUID * replicaUUID; 
@property (assign,nonatomic,__weak) CRDocument * document;                           //@synthesize document=_document - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<CRUndoDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)beginEditing;
-(void)endEditing;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)removeLastObject;
-(NSObject*<CRUndoDelegate>)delegate;
-(void)setDelegate:(NSObject*<CRUndoDelegate>)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(TTMergeableAttributedString *)contents;
-(void)edited:(unsigned long long)arg1 range:(NSRange)arg2 changeInLength:(long long)arg3 ;
-(id)tombstone;
-(id)initWithDocument:(id)arg1 ;
-(void)setDocument:(CRDocument *)arg1 ;
-(CRDocument *)document;
-(id)initWithContents:(id)arg1 ;
-(NSUUID *)replicaUUID;
-(BOOL)wantsUndoCommands;
-(id)initWithCRCoder:(id)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 ;
-(void)mergeWith:(id)arg1 ;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(void)saveToArchive:(StringArray*)arg1 ;
-(id)initWithArchive:(const StringArray*)arg1 andReplicaID:(id)arg2 ;
-(id)textAttachmentAtIndex:(unsigned long long)arg1 ;
-(void)addUndoCommand:(id)arg1 ;
-(NSArray *)nsArray;
-(id)initWithCRCoder:(id)arg1 stringArray:(const StringArray*)arg2 ;
-(id)serializeDataFromArchive:(const StringArray*)arg1 ;
@end

