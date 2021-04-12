/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSArray.h>

@class _PFWeakReference, NSKnownKeysDictionary;

@interface _PFResultArray : NSArray {

	int _cd_rc;
	unsigned _count;
	unsigned _resultType;
	SCD_Struct_PF2* _resultSet;
	_PFWeakReference* _weakRequestStore;
	NSKnownKeysDictionary* _metadata;

}
+(void)initialize;
+(BOOL)accessInstanceVariablesDirectly;
+(Class)classForKeyedUnarchiver;
-(unsigned long long)retainCount;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)getObjects:(id*)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PF3*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 ;
-(Class)classForCoder;
-(unsigned long long)indexOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(Class)classForArchiver;
-(id)_metadata;
-(id)initWithObjects:(SCD_Struct_PF2*)arg1 count:(unsigned)arg2 store:(id)arg3 metadata:(id)arg4 ;
-(void*)hydratedRowAtIndex:(unsigned long long)arg1 ;
-(id)_sqlCore;
-(SCD_Struct_PF2*)_resultSet;
@end

