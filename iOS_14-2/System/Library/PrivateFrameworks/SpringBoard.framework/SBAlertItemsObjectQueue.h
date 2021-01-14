/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableOrderedSet, NSString;

@interface SBAlertItemsObjectQueue : NSObject <BSDescriptionProviding, NSFastEnumeration> {

	NSMutableOrderedSet* _objects;

}

@property (nonatomic,retain) NSMutableOrderedSet * objects;              //@synthesize objects=_objects - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableOrderedSet *)objects;
-(void)setObjects:(NSMutableOrderedSet *)arg1 ;
-(id)succinctDescription;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_SB40*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(void)prependObject:(id)arg1 ;
-(id)dequeueAllObjects;
-(BOOL)hasObject;
-(id)objectsOfClass:(Class)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)appendObject:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(BOOL)hasObjectOfClass:(Class)arg1 ;
@end

