/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_RB3*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)allNamespaces;
-(id)inheritancesForEnvironment:(id)arg1 ;
-(id)_initWithInheritances:(id)arg1 ;
-(id)_initWithCollection:(id)arg1 ;
-(id)allEnvironments;
-(id)allInheritances;
@end

