/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol MDLObjectContainerComponent, MDLAssetResolver, MDLMeshBufferAllocator;
@class NSURL, NSMutableArray, NSMapTable, MDLVertexDescriptor, NSUnitLength, MDLAnimatedVector3Array;

@interface MDLAsset : NSObject <NSCopying, NSFastEnumeration> {

	NSURL* _URL;
	NSMutableArray* _objects;
	id<MDLObjectContainerComponent> _masters;
	id<MDLObjectContainerComponent> _animations;
	double _startTime;
	double _endTime;
	 _upAxis;
	float _metersPerUnit;
	BOOL _isSceneKitBridged;
	NSMapTable* _components;
	NSURL* _temporaryFolderURL;
	double _frameInterval;
	id<MDLAssetResolver> _resolver;
	id<MDLMeshBufferAllocator> _bufferAllocator;
	MDLVertexDescriptor* _vertexDescriptor;
	double __timeCodesPerSecond;
	NSUnitLength* _unitLength;
	MDLAnimatedVector3Array* _extents;

}

@property (nonatomic,readonly) MDLAABBRef _bounds; 
@property (assign,nonatomic) double _timeCodesPerSecond;                                       //@synthesize _timeCodesPerSecond=__timeCodesPerSecond - In the implementation block
@property (nonatomic,retain) NSURL * _temporaryFolderURL;                                      //@synthesize temporaryFolderURL=_temporaryFolderURL - In the implementation block
@property (nonatomic,retain) NSUnitLength * unitLength;                                        //@synthesize unitLength=_unitLength - In the implementation block
@property (assign,nonatomic) float metersPerUnit;                                              //@synthesize metersPerUnit=_metersPerUnit - In the implementation block
@property (nonatomic,retain) MDLAnimatedVector3Array * extents;                                //@synthesize extents=_extents - In the implementation block
@property (nonatomic,readonly) {? boundingBox; 
@property (assign,nonatomic) double frameInterval;                                             //@synthesize frameInterval=_frameInterval - In the implementation block
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) double endTime; 
@property (assign,nonatomic)  upAxis;                                                          //@synthesize upAxis=_upAxis - In the implementation block
@property (nonatomic,retain,readonly) NSURL * URL; 
@property (nonatomic,retain) id<MDLAssetResolver> resolver;                                    //@synthesize resolver=_resolver - In the implementation block
@property (nonatomic,retain,readonly) id<MDLMeshBufferAllocator> bufferAllocator;              //@synthesize bufferAllocator=_bufferAllocator - In the implementation block
@property (nonatomic,retain,readonly) MDLVertexDescriptor * vertexDescriptor;                  //@synthesize vertexDescriptor=_vertexDescriptor - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,retain) id<MDLObjectContainerComponent> masters;                          //@synthesize masters=_masters - In the implementation block
@property (nonatomic,retain) id<MDLObjectContainerComponent> animations;                       //@synthesize animations=_animations - In the implementation block
+(id)assetWithSCNNode:(id)arg1 ;
+(id)assetWithSCNNode:(id)arg1 bufferAllocator:(id)arg2 ;
+(id)assetWithSCNScene:(id)arg1 ;
+(id)assetWithSCNScene:(id)arg1 bufferAllocator:(id)arg2 ;
+(BOOL)canExportFileExtension:(id)arg1 ;
+(BOOL)canImportFileExtension:(id)arg1 ;
+(id)placeLightProbesWithDensity:(float)arg1 heuristic:(long long)arg2 usingIrradianceDataSource:(id)arg3 ;
+(void)convertToUSDZ:(id)arg1 writeToURL:(id)arg2 ;
+(void)convertToUSDZWithURL:(id)arg1 ;
+(BOOL)isValidUSDZResource:(id)arg1 ;
-(id)objects;
-(id<MDLAssetResolver>)resolver;
-(id<MDLObjectContainerComponent>)animations;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(MDLAABBRef)_bounds;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_MD5*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id<MDLMeshBufferAllocator>)bufferAllocator;
-(void)setStartTime:(double)arg1 ;
-(unsigned long long)count;
-(void)setFrameInterval:(double)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)components;
-(NSURL *)_temporaryFolderURL;
-()upAxis;
-(double)frameInterval;
-(id)description;
-(void)addObject:(id)arg1 ;
-(id)initWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)setAnimations:(id<MDLObjectContainerComponent>)arg1 ;
-({?)boundingBox;
-(void)removeObject:(id)arg1 ;
-(NSURL *)URL;
-(void)setResolver:(id<MDLAssetResolver>)arg1 ;
-(void)_commonInit;
-(void)setEndTime:(double)arg1 ;
-(id<MDLObjectContainerComponent>)masters;
-(MDLAnimatedVector3Array *)extents;
-(double)endTime;
-(MDLVertexDescriptor *)vertexDescriptor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)startTime;
-(void)dealloc;
-({?=})boundingBoxAtTime:(double)arg1 ;
-(id)initWithBufferAllocator:(id)arg1 ;
-(void)_conformVertexBuffers:(id)arg1 error:(id*)arg2 ;
-(id)initWithURL:(id)arg1 vertexDescriptor:(id)arg2 bufferAllocator:(id)arg3 ;
-(void)setComponent:(id)arg1 forProtocol:(id)arg2 ;
-(id)componentConformingToProtocol:(id)arg1 ;
-(void)enumerateChildObjectsOfClass:(Class)arg1 usingBlock:(/*^block*/id)arg2 stopPointer:(BOOL*)arg3 ;
-(id)childObjectsOfClass:(Class)arg1 ;
-(void)resolveTextures;
-(id)initWithURL:(id)arg1 vertexDescriptor:(id)arg2 bufferAllocator:(id)arg3 preserveTopology:(BOOL)arg4 error:(id*)arg5 ;
-(id)initWithURL:(id)arg1 bufferAllocator:(id)arg2 preserveIndexing:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)exportAssetToURL:(id)arg1 error:(id*)arg2 ;
-(id)objectAtPath:(id)arg1 ;
-(void)loadTextures;
-(id)initWithData:(id)arg1 name:(id)arg2 vertexDescriptor:(id)arg3 bufferAllocator:(id)arg4 preserveTopology:(BOOL)arg5 error:(id*)arg6 ;
-(id)initThroughSCNKitBridgeWithURL:(id)arg1 preserveTopology:(BOOL)arg2 error:(id)arg3 ;
-(BOOL)exportAssetToURL:(id)arg1 ;
-(void)setMasters:(id<MDLObjectContainerComponent>)arg1 ;
-(void)set_temporaryFolderURL:(NSURL *)arg1 ;
-(void)setUpAxis:;
-(double)_timeCodesPerSecond;
-(void)set_timeCodesPerSecond:(double)arg1 ;
-(NSUnitLength *)unitLength;
-(void)setUnitLength:(NSUnitLength *)arg1 ;
-(float)metersPerUnit;
-(void)setMetersPerUnit:(float)arg1 ;
-(void)setExtents:(MDLAnimatedVector3Array *)arg1 ;
@end

