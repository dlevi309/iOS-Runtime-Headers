/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PVEffect.h>

@class NSLock, NSURL, NSString, NSArray, NSMutableDictionary;

@interface PVMotionEffect : PVEffect {

	void* _document;
	double _docPixelAspectRatio;
	double _docDurInSeconds;
	unsigned _docFrames;
	double _docFrameRate;
	CGSize _documentSize;
	CGSize _currentDocumentSize;
	double _effectOutputAspect;
	unsigned _effectIndex;
	unsigned _numInputs;
	BOOL _needsCrop;
	NSLock* _documentLock;
	METimeRemap* _timeRemap;
	OZChannelBool* _buildInEnableChan;
	OZChannelBool* _buildOutEnableChan;
	map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int> > >* _dropZoneIndexToID;
	FigTime _motionPosterTime;
	BOOL _cachedPosterTime;
	atomic<DocLoadStatus> _docLoadStatus;
	NSURL* _projectURL;
	NSString* _projectPath;
	unsigned _topLevelGroupID;
	int _topLevelGroupIDStatus;
	vector<unsigned int, std::__1::allocator<unsigned int> >* _textObjectIDs;
	NSArray* _defaultAttributedStrings;
	SCD_Struct_PV20 _renderStartOffset;
	BOOL _needToUpdateSceneDuration;
	BOOL _cachedRenderDirty;
	NSMutableDictionary* _cachedPublishedParams;
	NSMutableDictionary* _parametersThatInvalidateCache;
	FigTime _loopTime;

}

@property (assign,nonatomic) FigTime loopTime;                                                 //@synthesize loopTime=_loopTime - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedPublishedParams;                      //@synthesize cachedPublishedParams=_cachedPublishedParams - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * parametersThatInvalidateCache;              //@synthesize parametersThatInvalidateCache=_parametersThatInvalidateCache - In the implementation block
+(void)initializeMotionInternal;
+(void)handleCleanupEffectsCache;
+(void)handleApplicationWillTerminate;
+(void)handleApplicationDidReceiveMemoryWarning;
+(void)registerEffects;
+(id)newEffectWithURL:(id)arg1 ;
+(id)newEffectWithData:(id)arg1 ;
+(id)effectMap;
+(id)_effectPathFromID:(id)arg1 ;
+(void)registerTemplateInDirectory:(id)arg1 relPath:(id)arg2 effectID:(id)arg3 doingRescan:(BOOL)arg4 origCache:(id)arg5 newCache:(id)arg6 ;
+(BOOL)replacedMappedEffectWithNewPath:(id)arg1 ;
+(id)_bundleLibPaths;
+(void)mapTemplatesInDirectory:(id)arg1 doingRescan:(BOOL)arg2 origCache:(id)arg3 newCache:(id)arg4 ;
+(id)_userLibPaths;
+(void)scanTemplatesInDirectory:(id)arg1 doingRescan:(BOOL)arg2 replaceMappedEffectPath:(BOOL)arg3 origCache:(id)arg4 newCache:(id)arg5 ;
+(void)registerNoneEffectForType:(id)arg1 effectID:(id)arg2 origCache:(id)arg3 newCache:(id)arg4 ;
+(void)initializeMotion;
+(SCD_Struct_PV20)liveTitlePickerLoopTime;
+(id)parameterKeyToPublishedParameterNameMap;
+(void)setLiveTitlePickerLoopTime:(SCD_Struct_PV20)arg1 ;
+(id)publishedParameterNameToParameterKeyMap;
+(void)extractMetadataFromContentsOfFile:(id)arg1 toCacheEntry:(id)arg2 ;
+(void)clearPreviewStats;
-(void)dealloc;
-(BOOL)isReady;
-(int)orientation;
-(int)origin;
-(void)releaseResources;
-(CGSize)outputSize;
-(CGSize)documentSize;
-(id)effectParameters;
-(void)setEffectParameters:(id)arg1 ;
-(void)setRollRadians:(double)arg1 ;
-(void)loadDocument;
-(id)initWithEffectID:(id)arg1 ;
-(BOOL)isTextFlipped;
-(id)defaultAttributedString:(unsigned long long)arg1 ;
-(id)textEditingBounds:(SCD_Struct_PV20)arg1 ;
-(id)textTransforms:(SCD_Struct_PV20)arg1 ;
-(BOOL)textImagePoints:(CGPoint*)arg1 textAtIndex:(unsigned long long)arg2 time:(SCD_Struct_PV20)arg3 includeDropShadow:(BOOL)arg4 ;
-(void)disableRenderingTextObjectAtIndex:(unsigned)arg1 ;
-(void)enableRenderingTextObjectAtIndex:(unsigned)arg1 ;
-(BOOL)supportsFlippingText;
-(BOOL)supportsOrientation;
-(double)topLevelOpacity;
-(BOOL)imagePoints:(CGPoint*)arg1 time:(SCD_Struct_PV20)arg2 includeDropShadow:(BOOL)arg3 ;
-(BOOL)imagePointsAtPosterFrameTime:(CGPoint*)arg1 componentTime:(SCD_Struct_PV20)arg2 includeDropShadow:(BOOL)arg3 ;
-(BOOL)topLevelGroupBounds:(CGRect*)arg1 atTime:(SCD_Struct_PV20)arg2 includeDropShadow:(BOOL)arg3 includeMasks:(BOOL)arg4 ;
-(BOOL)topLevelGroupBoundsAtPosterFrame:(CGRect*)arg1 includeDropShadow:(BOOL)arg2 includeMasks:(BOOL)arg3 ;
-(id)topLevelGroupTransformAtTime:(SCD_Struct_PV20)arg1 ;
-(id)topLevelGroupTransformAtPosterFrame:(SCD_Struct_PV20)arg1 ;
-(BOOL)resourcesAreReady;
-(id)topLevelGroupTransform;
-(BOOL)loadResources;
-(void)updateInspectableProperties:(id)arg1 ;
-(HGRef<HGNode>*)previewHGNodeForTime:(SCD_Struct_PV20)arg1 inputHGNode:(HGRef<HGNode>*)arg2 outputSize:(CGSize)arg3 renderer:(HGRenderer*)arg4 ;
-(HGRef<HGNode>*)hgNodeForTime:(SCD_Struct_PV20)arg1 inputs:(const PVInputHGNodeMap<unsigned int>*)arg2 renderer:(const HGRef<HGRenderer>*)arg3 igContext:(HGRef<PVInstructionGraphContext>*)arg4 ;
-(BOOL)supportsExtendedRangeInputs;
-(void)loadEffectInternal;
-(void)setTopLevelGroupTransform:(id)arg1 ;
-(BOOL)isTranscription;
-(BOOL)shouldRenderPreviewAtPosterTime;
-(void)clearTranscription;
-(void)resetToDefaultTranscriptionForLocaleID:(id)arg1 ;
-(void)setTranscriptionText:(id)arg1 ;
-(BOOL)transcriptionHitTest:(CGPoint)arg1 time:(SCD_Struct_PV20)arg2 ;
-(BOOL)hasBuiltInEnvironment;
-(void)applyInspectableProperties;
-(id)projectURL;
-(id)projectPath;
-(void)computeLoopMarkerBasedOnTranscription;
-(void)computeIntroOutroPoints;
-(void)buildDropZoneIdMap;
-(void)storeDefaultStrings;
-(int)posterFrameTime:(FigTime*)arg1 ;
-(FigTime)motionTimeFromComponentTime:(SCD_Struct_PV20)arg1 effectRange:(SCD_Struct_PV27)arg2 ;
-(BOOL)renderCachingCannotNotBeEnabled:(BOOL)arg1 isTextRenderingDisabled:(BOOL)arg2 isAtPosterFrame:(BOOL)arg3 hasAdditionalScale:(BOOL)arg4 hasTransformAnimation:(BOOL)arg5 ;
-(void)didSetCacheInvalidatingParameter:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isSketch;
-(void)adjustCutawayInputs:(map<unsigned int, HGRef<HGNode>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, HGRef<HGNode> > > >*)arg1 splitCropRectA:(id)arg2 splitCropRectB:(id)arg3 pipRect:(id)arg4 pipScaleFactor:(id)arg5 renderScale:(float)arg6 pipNeedsCrop:(BOOL)arg7 ;
-(void)adjustTransitionInputs:(map<unsigned int, HGRef<HGNode>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, HGRef<HGNode> > > >*)arg1 renderScale:(float)arg2 renderer:(const HGRef<HGRenderer>*)arg3 inputANeedsBackground:(BOOL)arg4 inputBNeedsBackground:(BOOL)arg5 slideCropRectA:(id)arg6 slideCropRectB:(id)arg7 ;
-(void)adjustPosition:(id)arg1 ;
-(void)applyConcatenatedTLGroupAndClipTransforms:(id)arg1 time:(SCD_Struct_PV20)arg2 ;
-(void)adjustCamera:(id)arg1 ;
-(HGRect)makeCropRectForDOD:(HGRect)arg1 renderRect:(CGRect)arg2 renderScale:(float)arg3 ;
-(void)setIsFrontFacingCamera:(BOOL)arg1 ;
-(void)setQuaternion:(double)arg1 :(double)arg2 :(double)arg3 :(double)arg4 ;
-(BOOL)hasEmojiRenderingWorkaround;
-(void)disableElementWithPublishedParam:(PCString*)arg1 disable:(BOOL)arg2 ;
-(BOOL)isSingleWordTranscription;
-(void)disableWordFadeOutIfNecessary;
-(void)setTopLevelGroupTransform_NoLock:(id)arg1 ;
-(void)setEffectOutputAspectWithNumber:(id)arg1 ;
-(void)adjustKenBurnsAnimation:(id)arg1 ;
-(void)adjustCutawayBorder:(id)arg1 ;
-(void)adjustCutawayFadeAnimation:(id)arg1 ;
-(void)setMaskPoints:(id)arg1 ;
-(void)setSketchStrokes:(id)arg1 ;
-(void)setupTitleParameters:(id)arg1 ;
-(void)setupTranscriptionParameters:(id)arg1 ;
-(void)setupPublishedParameters:(id)arg1 ;
-(void)setBuildInEnabled:(BOOL)arg1 ;
-(void)setBuildOutEnabled:(BOOL)arg1 ;
-(void)setTopLevelOpacity:(double)arg1 ;
-(void)setForceDisableLoop:(BOOL)arg1 ;
-(void)setForceDisableBuildAnimation:(BOOL)arg1 ;
-(void)disableBackgroundMovie:(BOOL)arg1 ;
-(int)_worldSpaceImagePoints:(CGPoint*)arg1 objectID:(unsigned)arg2 time:(FigTime)arg3 componentTime:(SCD_Struct_PV20)arg4 includeDropShadow:(BOOL)arg5 includeMasks:(BOOL)arg6 flatten:(BOOL)arg7 ;
-(FigTime)_posterTimeOrMotionTimeFromComponentTime:(SCD_Struct_PV20)arg1 effectRange:(SCD_Struct_PV27)arg2 ;
-(int)_objectTransform:(PCMatrix44Tmpl<double>*)arg1 objectID:(unsigned)arg2 time:(FigTime)arg3 componentTime:(SCD_Struct_PV20)arg4 flatten:(BOOL)arg5 ;
-(int)_objectBounds:(PCRect<double>*)arg1 objectID:(unsigned)arg2 time:(FigTime)arg3 includeDropShadow:(BOOL)arg4 includeMasks:(BOOL)arg5 ;
-(BOOL)parameterInvalidatesCache:(id)arg1 ;
-(BOOL)didCacheInvalidatingParameterChange:(id)arg1 key:(id)arg2 ;
-(NSMutableDictionary *)parametersThatInvalidateCache;
-(id)publishedParams;
-(vector<unsigned int, std::__1::allocator<unsigned int> >*)_textObjectIDs;
-(BOOL)_supportsParam:(id)arg1 ;
-(BOOL)shouldDisableWordFadeOut;
-(int)numberOfInputsHint;
-(void)setupTransitionParameters:(id)arg1 ;
-(FigTime)loopTime;
-(void)setLoopTime:(FigTime)arg1 ;
-(NSMutableDictionary *)cachedPublishedParams;
-(void)setCachedPublishedParams:(NSMutableDictionary *)arg1 ;
-(void)setParametersThatInvalidateCache:(NSMutableDictionary *)arg1 ;
@end

