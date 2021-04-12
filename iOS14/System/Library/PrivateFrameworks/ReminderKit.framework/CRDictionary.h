/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/CRDataType.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/CRCoding.h>

@class CRDocument, NSMapTable, NSString;

@interface CRDictionary : NSObject <CRDataType, NSFastEnumeration, CRCoding> {

	CRDocument* _document;
	NSMapTable* _contents;
	long long _removeClock;

}

@property (nonatomic,retain) NSMapTable * contents;                     //@synthesize contents=_contents - In the implementation block
@property (assign,nonatomic) long long removeClock;                     //@synthesize removeClock=_removeClock - In the implementation block
@property (assign,nonatomic,__weak) CRDocument * document;              //@synthesize document=_document - In the implementation block
@property (readonly) unsigned long long count; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMapTable *)contents;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_CR4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCRCoder:(id)arg1 dictionary:(Dictionary*)arg2 ;
-(void)encodeWithCRCoder:(id)arg1 dictionary:(Dictionary*)arg2 elementValueCoder:(/*^block*/id)arg3 ;
-(id)initWithCRCoder:(id)arg1 dictionary:(const Dictionary*)arg2 ;
-(id)initWithCRCoder:(id)arg1 dictionary:(const Dictionary*)arg2 elementValueDecoder:(/*^block*/id)arg3 ;
-(id)init;
-(void)setRemoveClock:(long long)arg1 ;
-(long long)removeClock;
-(void)mergeWithDictionary:(id)arg1 ;
-(void)enumerateKeysObjectsAndTimestampsUsingBlock:(/*^block*/id)arg1 ;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)setDocument:(CRDocument *)arg1 ;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(void)mergeWith:(id)arg1 ;
-(NSString *)description;
-(id)initWithDocument:(id)arg1 ;
-(id)keyEnumerator;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(void)setContents:(NSMapTable *)arg1 ;
-(unsigned long long)hash;
-(CRDocument *)document;
-(id)tombstone;
-(id)initWithCRCoder:(id)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

