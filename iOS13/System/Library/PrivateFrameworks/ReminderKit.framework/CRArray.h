/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/CRCoding.h>
#import <libobjc.A.dylib/CRUndoDelegate.h>
#import <libobjc.A.dylib/CRDataType.h>

@protocol CRUndoDelegate;
@class CRDocument, NSObject, TTArray, CRDictionary, NSString, NSUUID;

@interface CRArray : NSObject <CRCoding, CRUndoDelegate, CRDataType> {

	BOOL _moveClock;
	CRDocument* _document;
	NSObject*<CRUndoDelegate> _delegate;
	TTArray* _array;
	CRDictionary* _contents;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TTArray * array;                                        //@synthesize array=_array - In the implementation block
@property (nonatomic,retain) CRDictionary * contents;                                //@synthesize contents=_contents - In the implementation block
@property (assign,nonatomic) BOOL moveClock;                                         //@synthesize moveClock=_moveClock - In the implementation block
@property (assign,nonatomic,__weak) CRDocument * document;                           //@synthesize document=_document - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<CRUndoDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSUUID * replicaUUID; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(TTArray *)array;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)removeLastObject;
-(NSObject*<CRUndoDelegate>)delegate;
-(void)setDelegate:(NSObject*<CRUndoDelegate>)arg1 ;
-(void)setArray:(TTArray *)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(CRDictionary *)contents;
-(id)tombstone;
-(void)setContents:(CRDictionary *)arg1 ;
-(id)initWithDocument:(id)arg1 ;
-(void)setDocument:(CRDocument *)arg1 ;
-(CRDocument *)document;
-(id)_addObject:(id)arg1 ;
-(NSUUID *)replicaUUID;
-(void)moveObjectFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)addUndoCommandsForObject:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)wantsUndoCommands;
-(id)initWithCRCoder:(id)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 ;
-(void)mergeWith:(id)arg1 ;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(id)initWithTTArray:(id)arg1 contents:(id)arg2 document:(id)arg3 ;
-(id)_insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)_insertObject:(id)arg1 withIdentifier:(id)arg2 atIndex:(unsigned long long)arg3 forUndo:(BOOL)arg4 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 forUndo:(BOOL)arg2 ;
-(void)setMoveClock:(BOOL)arg1 ;
-(BOOL)moveClock;
-(unsigned long long)firstIndexOf:(id)arg1 fromIndex:(unsigned long long)arg2 ;
-(void)encodeWithCRCoder:(id)arg1 array:(Array*)arg2 ;
-(id)initWithCRCoder:(id)arg1 array:(const Array*)arg2 ;
@end

