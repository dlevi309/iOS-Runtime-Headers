/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSDictionary, NSSet;

@interface RBInheritanceCollection : NSObject <NSCopying, NSMutableCopying, NSFastEnumeration> {

	NSDictionary* _inheritancesByEnvironment;
	NSSet* _inheritances;
	NSSet* _namespaces;

}
+(id)collectionWithInheritances:(id)arg1 ;
-(id)inheritancesForEnvironment:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_RB2*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(id)allNamespaces;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)allEnvironments;
-(id)_initWithInheritances:(id)arg1 ;
-(id)_initWithCollection:(id)arg1 ;
-(id)allInheritances;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

