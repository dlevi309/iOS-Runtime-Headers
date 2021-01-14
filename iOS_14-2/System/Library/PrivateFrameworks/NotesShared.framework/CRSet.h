/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/CRDataType.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/CRCoding.h>

@class CRDictionary, NSHashTable, CRDocument, NSArray, NSString;

@interface CRSet : NSObject <CRDataType, NSFastEnumeration, CRCoding> {

	CRDictionary* _dictionary;
	NSHashTable* _observers;

}

@property (nonatomic,retain) CRDictionary * dictionary;                 //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                   //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic,__weak) CRDocument * document; 
@property (readonly) unsigned long long count; 
@property (copy,readonly) NSArray * allObjects; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_CR14*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(void)setDictionary:(CRDictionary *)arg1 ;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)setDocument:(CRDocument *)arg1 ;
-(id)anyObject;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(unsigned long long)count;
-(id)initWithCRCoder:(id)arg1 set:(const Dictionary*)arg2 ;
-(void)encodeWithCRCoder:(id)arg1 set:(Dictionary*)arg2 ;
-(void)encodeWithCRCoder:(id)arg1 set:(Dictionary*)arg2 elementValueCoder:(/*^block*/id)arg3 ;
-(id)initWithCRCoder:(id)arg1 set:(const Dictionary*)arg2 elementValueDecoder:(/*^block*/id)arg3 ;
-(void)mergeWith:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)member:(id)arg1 ;
-(NSArray *)allObjects;
-(void)setObject:(id)arg1 ;
-(NSString *)description;
-(void)addObject:(id)arg1 ;
-(id)initWithDocument:(id)arg1 ;
-(CRDictionary *)dictionary;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(void)setUpdated:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)removeAllObjects;
-(void)removeObject:(id)arg1 ;
-(unsigned long long)hash;
-(CRDocument *)document;
-(id)tombstone;
-(id)initWithCRCoder:(id)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

