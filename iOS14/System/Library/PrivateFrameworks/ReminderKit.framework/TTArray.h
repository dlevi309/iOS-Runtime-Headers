/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
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
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(TTMergeableAttributedString *)contents;
-(void)removeLastObject;
-(void)saveToArchive:(StringArray*)arg1 ;
-(id)init;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)initWithArchive:(const StringArray*)arg1 andReplicaID:(id)arg2 ;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(NSObject*<CRUndoDelegate>)delegate;
-(void)edited:(unsigned long long)arg1 range:(NSRange)arg2 changeInLength:(long long)arg3 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(void)setDocument:(CRDocument *)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)textAttachmentAtIndex:(unsigned long long)arg1 ;
-(void)addUndoCommand:(id)arg1 ;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(unsigned long long)count;
-(NSArray *)nsArray;
-(void)mergeWith:(id)arg1 ;
-(id)initWithCRCoder:(id)arg1 stringArray:(const StringArray*)arg2 ;
-(id)serializeDataFromArchive:(const StringArray*)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)setDelegate:(NSObject*<CRUndoDelegate>)arg1 ;
-(NSString *)description;
-(void)addObject:(id)arg1 ;
-(id)initWithDocument:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)endEditing;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(NSUUID *)replicaUUID;
-(id)initWithContents:(id)arg1 ;
-(CRDocument *)document;
-(id)tombstone;
-(id)initWithCRCoder:(id)arg1 ;
-(BOOL)wantsUndoCommands;
-(void)encodeWithCRCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)beginEditing;
@end

