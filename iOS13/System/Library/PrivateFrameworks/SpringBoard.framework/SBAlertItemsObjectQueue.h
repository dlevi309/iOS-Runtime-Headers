/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableOrderedSet;

@interface SBAlertItemsObjectQueue : NSObject <NSFastEnumeration> {

	NSMutableOrderedSet* _objects;

}

@property (nonatomic,retain) NSMutableOrderedSet * objects;              //@synthesize objects=_objects - In the implementation block
-(id)init;
-(void)removeObject:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_SB44*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(BOOL)containsObject:(id)arg1 ;
-(NSMutableOrderedSet *)objects;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)appendObject:(id)arg1 ;
-(void)setObjects:(NSMutableOrderedSet *)arg1 ;
-(id)dequeueAllObjects;
-(BOOL)hasObject;
-(void)prependObject:(id)arg1 ;
-(BOOL)hasObjectOfClass:(Class)arg1 ;
-(id)objectsOfClass:(Class)arg1 ;
@end

