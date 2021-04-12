/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(unsigned long long)count;
-(id)member:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_CR4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)removeAllObjects;
-(BOOL)containsObject:(id)arg1 ;
-(void)setObject:(id)arg1 ;
-(NSArray *)allObjects;
-(CRDictionary *)dictionary;
-(id)anyObject;
-(void)setDictionary:(CRDictionary *)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)tombstone;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(id)initWithDocument:(id)arg1 ;
-(void)setDocument:(CRDocument *)arg1 ;
-(CRDocument *)document;
-(void)setUpdated:(id)arg1 ;
-(id)initWithCRCoder:(id)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 ;
-(void)mergeWith:(id)arg1 ;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(id)initWithCRCoder:(id)arg1 set:(const Dictionary*)arg2 ;
-(void)encodeWithCRCoder:(id)arg1 set:(Dictionary*)arg2 ;
-(void)encodeWithCRCoder:(id)arg1 set:(Dictionary*)arg2 elementValueCoder:(/*^block*/id)arg3 ;
-(id)initWithCRCoder:(id)arg1 set:(const Dictionary*)arg2 elementValueDecoder:(/*^block*/id)arg3 ;
@end

