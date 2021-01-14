/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/CRCoder.h>

@class NSMutableOrderedSet;

@interface CRCoderArchiver : CRCoder {

	vector<CRDT::Document_DocObject *, std::__1::allocator<CRDT::Document_DocObject *> >* currentDocObjectEncodingStack;
	NSMutableOrderedSet* _uuidSet;
	NSMutableOrderedSet* _keySet;
	NSMutableOrderedSet* _encodedObjects;
	Document* _currentDocument;

}

@property (nonatomic,retain) NSMutableOrderedSet * uuidSet;                     //@synthesize uuidSet=_uuidSet - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * keySet;                      //@synthesize keySet=_keySet - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * encodedObjects;              //@synthesize encodedObjects=_encodedObjects - In the implementation block
@property (assign,nonatomic) Document* currentDocument;                         //@synthesize currentDocument=_currentDocument - In the implementation block
+(void)initialize;
+(id)encodedDataWithDocument:(id)arg1 ;
-(void)setKeySet:(NSMutableOrderedSet *)arg1 ;
-(void)setUuidSet:(NSMutableOrderedSet *)arg1 ;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(Document_DocObject*)currentDocumentObjectForEncoding;
-(id)encodeDocument:(id)arg1 ;
-(void)setCurrentDocument:(Document*)arg1 ;
-(void)setEncodedObjects:(NSMutableOrderedSet *)arg1 ;
-(NSMutableOrderedSet *)uuidSet;
-(Document*)currentDocument;
-(void)setTypeIndexForCurrentCustomObjectIfNecessary:(id)arg1 ;
-(Document_CustomObject*)currentCustomObjectForEncoding;
-(ObjectID*)mutableObjectIDForKey:(id)arg1 ;
-(void)encodeObject:(id)arg1 forObjectID:(ObjectID*)arg2 ;
-(void)encodeUUID:(id)arg1 forKey:(id)arg2 ;
-(void)encodeUInt32:(unsigned)arg1 forKey:(id)arg2 ;
-(unsigned long long)encodeUUIDIndexFromUUID:(id)arg1 ;
-(NSMutableOrderedSet *)encodedObjects;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(void)encodeInt32:(int)arg1 forKey:(id)arg2 ;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(int)indexForKey:(id)arg1 ;
-(void)encodeUInt64:(unsigned long long)arg1 forKey:(id)arg2 ;
-(NSMutableOrderedSet *)keySet;
-(void)encodeString:(id)arg1 forKey:(id)arg2 ;
@end
