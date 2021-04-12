/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/MDLNamed.h>

@protocol MDLObjectContainerComponent;
@class NSMapTable, NSString, NSArray;

@interface MDLObject : NSObject <MDLNamed> {

	MDLObject* _parent;
	NSMapTable* _components;
	MDLObject* _instance;
	BOOL _hidden;
	NSString* name;
	id<MDLObjectContainerComponent> _children;

}

@property (nonatomic,copy,readonly) NSArray * components; 
@property (assign,nonatomic,__weak) MDLObject * parent; 
@property (nonatomic,retain) MDLObject * instance;                                  //@synthesize instance=_instance - In the implementation block
@property (nonatomic,readonly) NSString * path; 
@property (nonatomic,retain) id<MDLTransformComponent> transform; 
@property (nonatomic,retain) id<MDLObjectContainerComponent> children;              //@synthesize children=_children - In the implementation block
@property (assign,nonatomic) BOOL hidden;                                           //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,copy) NSString * name; 
-(id)init;
-(id)description;
-(NSString *)name;
-(void)addChild:(id)arg1 ;
-(MDLObject *)parent;
-(void)setParent:(MDLObject *)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id<MDLTransformComponent>)transform;
-(NSString *)path;
-(NSArray *)components;
-(void)setTransform:(id<MDLTransformComponent>)arg1 ;
-(MDLObject *)instance;
-(void)setInstance:(MDLObject *)arg1 ;
-(id<MDLObjectContainerComponent>)children;
-(void)setChildren:(id<MDLObjectContainerComponent>)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(id)recursiveDescription;
-(BOOL)hidden;
-(SCD_Struct_MD20)boundingBoxAtTime:(double)arg1 ;
-(void)setComponent:(id)arg1 forProtocol:(id)arg2 ;
-(id)componentConformingToProtocol:(id)arg1 ;
-(void)enumerateChildObjectsOfClass:(Class)arg1 root:(id)arg2 usingBlock:(/*^block*/id)arg3 stopPointer:(BOOL*)arg4 ;
-(id)objectAtPath:(id)arg1 ;
@end

