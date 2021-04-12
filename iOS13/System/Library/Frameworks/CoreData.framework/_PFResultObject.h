/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)retainCount;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PF3*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectForKey:(id)arg1 ;
-(id)keyEnumerator;
-(Class)classForCoder;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(Class)classForArchiver;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(void)_setParentBuffer:(id)arg1 ;
-(unsigned long long*)_columnOffsets;
-(id)number32FromPtr:(void*)arg1 ;
-(id)number64FromPtr:(void*)arg1 ;
-(id)doubleFromPtr:(void*)arg1 ;
-(id)taggedStringFromPtr:(unsigned long long*)arg1 withLength:(unsigned long long)arg2 ;
-(id)stringFromPtr:(void*)arg1 ;
-(id)dataFromPtr:(void*)arg1 ;
-(id)objectIDFromPtr:(void*)arg1 ;
-(unsigned long long)_countByEnumeratingWithState:(SCD_Struct_PF3*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 forKeys:(BOOL)arg4 ;
-(unsigned long long)_valueCountByEnumeratingWithState:(SCD_Struct_PF3*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
@end

