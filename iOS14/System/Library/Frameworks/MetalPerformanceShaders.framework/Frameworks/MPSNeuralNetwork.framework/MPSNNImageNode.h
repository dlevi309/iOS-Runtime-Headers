/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/


@protocol MPSHandle, MPSImageAllocator;
@class MPSNNFilterNode;

@interface MPSNNImageNode : NSObject {

	id<MPSHandle> _handle;
	MPSNNFilterNode* _parent;
	id<MPSImageAllocator> _imageAllocator;
	unsigned long long _clientCount;
	unsigned long long _format;
	BOOL _exportFromGraph;
	BOOL _synchronize;
	BOOL _stopGradient;
	BOOL _initializedWithParent;

}

@property (nonatomic,retain) id<MPSHandle> handle;                              //@synthesize handle=_handle - In the implementation block
@property (assign,nonatomic) unsigned long long format;                         //@synthesize format=_format - In the implementation block
@property (nonatomic,retain) id<MPSImageAllocator> imageAllocator;              //@synthesize imageAllocator=_imageAllocator - In the implementation block
@property (assign,nonatomic) BOOL exportFromGraph;                              //@synthesize exportFromGraph=_exportFromGraph - In the implementation block
@property (assign,nonatomic) BOOL synchronizeResource;                          //@synthesize synchronize=_synchronize - In the implementation block
@property (assign,nonatomic) BOOL stopGradient;                                 //@synthesize stopGradient=_stopGradient - In the implementation block
+(id)nodeWithHandle:(id)arg1 ;
+(id)exportedNodeWithHandle:(id)arg1 ;
-(id)debugQuickLookObject;
-(void)setFormat:(unsigned long long)arg1 ;
-(void)setHandle:(id<MPSHandle>)arg1 ;
-(id)initWithHandle:(id)arg1 ;
-(unsigned long long)format;
-(id<MPSHandle>)handle;
-(id)debugDescription;
-(id)initWithParent:(id)arg1 ;
-(id<MPSImageAllocator>)imageAllocator;
-(void)setImageAllocator:(id<MPSImageAllocator>)arg1 ;
-(BOOL)exportFromGraph;
-(void)setExportFromGraph:(BOOL)arg1 ;
-(BOOL)synchronizeResource;
-(BOOL)stopGradient;
-(void)setSynchronizeResource:(BOOL)arg1 ;
-(void)setStopGradient:(BOOL)arg1 ;
-(void)dealloc;
@end

