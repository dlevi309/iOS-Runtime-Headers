/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PVInstructionGraphSourceNode.h>

@protocol PVCompositeDelegate, PVImageSeqDelegate;
@class NSURL, NSString, PVImageBuffer, PVInstructionGraphNode, NSDictionary, NSObject;

@interface PVInstructionGraphSourceCompositeNode : PVInstructionGraphSourceNode {

	HGRef<PVRenderManager>* _renderManager;
	int _nodeType;
	int _trackID;
	unsigned _outputFormat;
	id<PVCompositeDelegate> _delegate;
	NSURL* _imageURL;
	NSString* _imageKey;
	PVImageBuffer* _imageBuffer;
	PVInstructionGraphNode* _graphNode;
	NSDictionary* _inputMap;
	id<PVImageSeqDelegate> _imageSeqDelegate;
	id<PVCompositeDelegate> _renderDelegate;
	NSObject* _metadata;
	CGSize _outputSize;

}

@property (assign,nonatomic) int nodeType;                                         //@synthesize nodeType=_nodeType - In the implementation block
@property (assign,nonatomic) int trackID;                                          //@synthesize trackID=_trackID - In the implementation block
@property (nonatomic,retain) NSURL * imageURL;                                     //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,retain) NSString * imageKey;                                  //@synthesize imageKey=_imageKey - In the implementation block
@property (nonatomic,retain) PVImageBuffer * imageBuffer;                          //@synthesize imageBuffer=_imageBuffer - In the implementation block
@property (assign,nonatomic) CGSize outputSize;                                    //@synthesize outputSize=_outputSize - In the implementation block
@property (assign,nonatomic) unsigned outputFormat;                                //@synthesize outputFormat=_outputFormat - In the implementation block
@property (nonatomic,retain) PVInstructionGraphNode * graphNode;                   //@synthesize graphNode=_graphNode - In the implementation block
@property (nonatomic,retain) NSDictionary * inputMap;                              //@synthesize inputMap=_inputMap - In the implementation block
@property (nonatomic,retain) id<PVImageSeqDelegate> imageSeqDelegate;              //@synthesize imageSeqDelegate=_imageSeqDelegate - In the implementation block
@property (nonatomic,retain) id<PVCompositeDelegate> renderDelegate;               //@synthesize renderDelegate=_renderDelegate - In the implementation block
@property (nonatomic,retain) NSObject * metadata;                                  //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) id<PVCompositeDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
+(id)newSourceCompositeNodeWithGraphNode:(id)arg1 outputSize:(CGSize)arg2 outputFormat:(unsigned)arg3 ;
+(id)newSourceCompositeNodeWithDelegate:(id)arg1 inputs:(id)arg2 metadata:(id)arg3 outputSize:(CGSize)arg4 outputFormat:(unsigned)arg5 ;
+(id)newSourceCompositeNodeWithURL:(id)arg1 key:(id)arg2 imageDelegate:(id)arg3 ;
+(id)newSourceCompositeNodeWithPVImageBuffer:(id)arg1 ;
+(id)newSourceCompositeNodeWithTrack:(int)arg1 outputSize:(CGSize)arg2 ;
-(id)init;
-(id<PVCompositeDelegate>)delegate;
-(void)setDelegate:(id<PVCompositeDelegate>)arg1 ;
-(unsigned)outputFormat;
-(void)setOutputFormat:(unsigned)arg1 ;
-(PVImageBuffer *)imageBuffer;
-(void)setMetadata:(NSObject *)arg1 ;
-(NSObject *)metadata;
-(int)trackID;
-(void)setOutputSize:(CGSize)arg1 ;
-(CGSize)outputSize;
-(int)nodeType;
-(NSURL *)imageURL;
-(void)setTrackID:(int)arg1 ;
-(id)requiredSourceTrackIDs;
-(void)setImageURL:(NSURL *)arg1 ;
-(id<PVCompositeDelegate>)renderDelegate;
-(void)setRenderDelegate:(id<PVCompositeDelegate>)arg1 ;
-(void)setNodeType:(int)arg1 ;
-(void)setImageKey:(NSString *)arg1 ;
-(NSString *)imageKey;
-(void)setImageBuffer:(PVImageBuffer *)arg1 ;
-(PVInstructionGraphNode *)graphNode;
-(id)getAllSourceNodes;
-(void)loadIGNode:(HGRef<PVInstructionGraphContext>*)arg1 returnLoadedEffects:(id)arg2 ;
-(HGRef<HGNode>*)internalHGNodeForTime:(SCD_Struct_PV0)arg1 trackInputs:(const PVInputHGNodeMap<PVInstructionGraphSourceNode *>*)arg2 renderer:(const HGRef<HGRenderer>Ref)arg3 igContext:(HGRef<PVInstructionGraphContext>*)arg4 ;
-(id)dotTreeLabel:(HGRef<PVInstructionGraphContext>*)arg1 ;
-(id)instructionGraphNodeDescription;
-(void)unloadIGNode;
-(PCRect<double>)inputSizeForPVEffect:(id)arg1 igContext:(HGRef<PVInstructionGraphContext>*)arg2 ;
-(PCMatrix44Tmpl<double>)pixelTransformForPVEffect:(id)arg1 igContext:(HGRef<PVInstructionGraphContext>*)arg2 ;
-(void)setImageSeqDelegate:(id<PVImageSeqDelegate>)arg1 ;
-(void)setGraphNode:(PVInstructionGraphNode *)arg1 ;
-(void)setInputMap:(NSDictionary *)arg1 ;
-(NSDictionary *)inputMap;
-(void)addDotTreeLinks:(HGRef<PVInstructionGraphContext>*)arg1 ;
-(id<PVImageSeqDelegate>)imageSeqDelegate;
-(id)renderFrameForTime:(SCD_Struct_PV0)arg1 inputs:(id)arg2 ;
-(HGRef<HGNode>*)nodeForCompositeTrackMap:(const map<int, __CVBuffer *, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, __CVBuffer *> > >*)arg1 ;
@end

