/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@class _PFResultArray;

@interface _PFResultObject : NSDictionary {

	_PFResultArray* _parent_buffer;
	int _cd_rc;
	unsigned _count;
	unsigned long long _sql_entity_id;
	unsigned long long _primary_key;

}
+(Class)classForKeyedUnarchiver;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(oneway void)release;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PF4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)retain;
-(unsigned long long)count;
-(void)_setParentBuffer:(id)arg1 ;
-(id)keyEnumerator;
-(Class)classForCoder;
-(id)objectForKey:(id)arg1 ;
-(unsigned long long)retainCount;
-(void)dealloc;
@end

