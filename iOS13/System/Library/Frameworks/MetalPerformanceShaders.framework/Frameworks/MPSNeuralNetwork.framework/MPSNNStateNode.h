/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/


@protocol MPSHandle;
@class MPSNNFilterNode;

@interface MPSNNStateNode : NSObject {

	id<MPSHandle> _handle;
	MPSNNFilterNode* _parent;
	unsigned long long _clientCount;
	BOOL _synchronize;
	BOOL _exportFromGraph;
	BOOL _initializedWithParent;

}

@property (nonatomic,retain) id<MPSHandle> handle;                  //@synthesize handle=_handle - In the implementation block
@property (assign,nonatomic) BOOL exportFromGraph;                  //@synthesize exportFromGraph=_exportFromGraph - In the implementation block
@property (assign,nonatomic) BOOL synchronizeResource;              //@synthesize synchronize=_synchronize - In the implementation block
-(void)dealloc;
-(id)debugDescription;
-(id)initWithParent:(id)arg1 ;
-(id<MPSHandle>)handle;
-(id)debugQuickLookObject;
-(void)setHandle:(id<MPSHandle>)arg1 ;
-(BOOL)exportFromGraph;
-(void)setExportFromGraph:(BOOL)arg1 ;
-(BOOL)synchronizeResource;
-(void)setSynchronizeResource:(BOOL)arg1 ;
@end

