/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)objectWithSCNNode:(id)arg1 ;
+(id)objectWithSCNNode:(id)arg1 bufferAllocator:(id)arg2 ;
-(void)_updateAssociatedSCNNodeWithGeometrySetter:(/*^block*/id)arg1 texturePathProvider:(/*^block*/id)arg2 vertexAttributeNamed:(id)arg3 materialPropertyNamed:(id)arg4 ;
-(id)_associatedSCNNode;
-(id<MDLObjectContainerComponent>)children;
-(void)setInstance:(MDLObject *)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(BOOL)hidden;
-(MDLObject *)parent;
-(id)init;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)addChild:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(id)recursiveDescription;
-(MDLObject *)instance;
-(NSString *)path;
-(void)setParent:(MDLObject *)arg1 ;
-(void)setTransform:(id<MDLTransformComponent>)arg1 ;
-(id<MDLTransformComponent>)transform;
-(NSString *)name;
-(NSArray *)components;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(void)setChildren:(id<MDLObjectContainerComponent>)arg1 ;
-(SCD_Struct_MD29)boundingBoxAtTime:(double)arg1 ;
-(void)setComponent:(id)arg1 forProtocol:(id)arg2 ;
-(id)componentConformingToProtocol:(id)arg1 ;
-(void)enumerateChildObjectsOfClass:(Class)arg1 root:(id)arg2 usingBlock:(/*^block*/id)arg3 stopPointer:(BOOL*)arg4 ;
-(id)objectAtPath:(id)arg1 ;
@end

