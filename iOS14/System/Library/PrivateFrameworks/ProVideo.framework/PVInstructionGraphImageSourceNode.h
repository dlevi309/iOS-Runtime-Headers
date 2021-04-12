/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PVInstructionGraphSourceNode.h>
#import <libobjc.A.dylib/NSCacheDelegate.h>

@protocol PVImageDelegate;
@class NSURL, NSString;

@interface PVInstructionGraphImageSourceNode : PVInstructionGraphSourceNode <NSCacheDelegate> {

	CachedImageInfo* m_cachedImageInfo;
	HGRef<PVRenderManager>* m_renderManager;
	BOOL _useAnimationInfo;
	int _renderingIntent;
	NSURL* _url;
	NSString* _key;
	id<PVImageDelegate> _imageDelegate;

}

@property (nonatomic,retain) NSURL * url;                                    //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * key;                                 //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) id<PVImageDelegate> imageDelegate;              //@synthesize imageDelegate=_imageDelegate - In the implementation block
@property (assign,nonatomic) int renderingIntent;                            //@synthesize renderingIntent=_renderingIntent - In the implementation block
@property (assign,nonatomic) BOOL useAnimationInfo;                          //@synthesize useAnimationInfo=_useAnimationInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)purgeBitmapCache:(BOOL)arg1 ;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
-(NSURL *)url;
-(NSString *)key;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(void)dealloc;
-(void)setRenderingIntent:(int)arg1 ;
-(id)initWithURL:(id)arg1 animation:(id)arg2 isExporting:(BOOL)arg3 imageDelegate:(id)arg4 renderingIntent:(int)arg5 ;
-(int)renderingIntent;
-(id)initWithURL:(id)arg1 key:(id)arg2 transform:(CGAffineTransform)arg3 isExporting:(BOOL)arg4 imageDelegate:(id)arg5 renderingIntent:(int)arg6 ;
-(void)loadIGNode:(HGRef<PVInstructionGraphContext>*)arg1 returnLoadedEffects:(id)arg2 ;
-(HGRef<HGNode>*)internalHGNodeForTime:(SCD_Struct_PV22)arg1 trackInputs:(const PVInputHGNodeMap<PVInstructionGraphSourceNode *>Ref)arg2 renderer:(const HGRef<HGRenderer>Ref)arg3 igContext:(HGRef<PVInstructionGraphContext>*)arg4 ;
-(id)dotTreeLabel:(HGRef<PVInstructionGraphContext>*)arg1 ;
-(id)instructionGraphNodeDescription;
-(PCRect<double>)inputSizeForPVEffect:(id)arg1 igContext:(HGRef<PVInstructionGraphContext>*)arg2 ;
-(PCMatrix44Tmpl<double>)pixelTransformForPVEffect:(id)arg1 igContext:(HGRef<PVInstructionGraphContext>*)arg2 ;
-(id<PVImageDelegate>)imageDelegate;
-(void)setImageDelegate:(id<PVImageDelegate>)arg1 ;
-(void)setUseAnimationInfo:(BOOL)arg1 ;
-(id)newCVPixelBufferCacheItemForImage:(HGRef<PVInstructionGraphContext>*)arg1 ;
-(id)loadImageTiles:(CGImageRef)arg1 size:(CGSize)arg2 colorSpace:(id)arg3 imageProperties:(PVImageProperties*)arg4 ;
-(BOOL)useAnimationInfo;
-(void)enableHDRGainMapUsingAsset:(id)arg1 ;
@end
