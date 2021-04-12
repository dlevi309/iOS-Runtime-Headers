/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSKnownKeysMappingStrategy.h>

@interface NSKnownKeysMappingStrategy1 : NSKnownKeysMappingStrategy {

	int _cd_rc;
	int _reserved64;
	void* _table;
	unsigned long long _length;
	id _reserved1;
	id* _keys;

}
+(id)alloc;
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(Class)classForKeyedUnarchiver;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)accessInstanceVariablesDirectly;
-(id)initForKeys:(id)arg1 ;
-(id*)keys;
-(oneway void)release;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PF4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(BOOL)_tryRetain;
-(id)retain;
-(BOOL)_isDeallocating;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)length;
-(unsigned long long)fastIndexForKnownKey:(id)arg1 ;
-(id)initForKeys:(id*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)indexForKey:(id)arg1 ;
-(id)description;
-(Class)classForCoder;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)allKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

