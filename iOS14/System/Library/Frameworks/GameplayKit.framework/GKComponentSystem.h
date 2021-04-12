/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray, NSArray;

@interface GKComponentSystem : NSObject <NSFastEnumeration> {

	NSMutableArray* _components;
	Class _componentClass;

}

@property (nonatomic,readonly) Class componentClass;                     //@synthesize componentClass=_componentClass - In the implementation block
@property (nonatomic,retain,readonly) NSArray * components; 
-(id)performSelector:(SEL)arg1 withObject:(id)arg2 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_GK6*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)addComponent:(id)arg1 ;
-(NSArray *)components;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)removeComponent:(id)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)removeComponentWithEntity:(id)arg1 ;
-(void)updateWithDeltaTime:(double)arg1 ;
-(Class)classForGenericArgumentAtIndex:(unsigned long long)arg1 ;
-(Class)componentClass;
-(id)initWithComponentClass:(Class)arg1 ;
-(void)addComponentWithEntity:(id)arg1 ;
@end

