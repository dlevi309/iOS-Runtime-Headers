/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, TSUNoCopyDictionary, NSMutableDictionary, NSDictionary, CALayer, TSDRep, NSArray;

@interface TSDTextureSet : NSObject <NSCopying> {

	CGPoint mCenter;
	CGRect mBounds;
	CGPoint mOriginalPosition;
	BOOL mIsBaked;
	BOOL mShouldIncludeFinalTexturesInVisibleSet;
	BOOL mShouldTransformUsingTextureCenter;
	unsigned long long mChunkCount;
	NSMutableArray* mTextures;
	NSMutableArray* mAllTextures;
	TSUNoCopyDictionary* mStageIndexForTexture;
	NSMutableDictionary* mFinalTextureForStage;
	NSMutableDictionary* mBoundingRectForStage;
	NSMutableDictionary* mContentRectForStage;
	NSMutableDictionary* mReverseFinalTextureForStage;
	TSUNoCopyDictionary* mFinalTexturesToStageMap;
	TSUNoCopyDictionary* mReverseFinalTexturesToStageMap;
	NSDictionary* mBakedAttributes;
	NSRange mActiveChunkIndices;
	CALayer* mLayer;
	BOOL mIsMagicMove;
	double mTextureOpacity;
	CGRect mTextureContentRect;
	double mTextureAngle;
	long long mTextureZOrder;
	BOOL mIsBackground;
	CALayer* mAlternateLayer;
	TSDRep* mRep;
	CGColorSpaceRef mColorSpace;
	long long mMaxStageIndex;
	long long _stageIndex;

}

@property (nonatomic,readonly) long long maxStageIndex; 
@property (nonatomic,readonly) long long stageIndex;                                   //@synthesize stageIndex=_stageIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long chunkCount; 
@property (nonatomic,readonly) NSArray * visibleTextures; 
@property (nonatomic,readonly) NSArray * allTextures; 
@property (assign,nonatomic) CGPoint center; 
@property (nonatomic,readonly) CGRect boundingRect; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) CALayer * layer; 
@property (nonatomic,retain) CALayer * alternateLayer; 
@property (assign,nonatomic) BOOL isMagicMove; 
@property (assign,nonatomic) CGRect textureContentRect; 
@property (assign,nonatomic) double textureAngle; 
@property (assign,nonatomic) long long textureZOrder; 
@property (assign,nonatomic) double textureOpacity; 
@property (assign,nonatomic) BOOL isBackground; 
@property (assign,nonatomic) BOOL isBaked; 
@property (assign,nonatomic) BOOL shouldIncludeFinalTexturesInVisibleSet; 
@property (assign,nonatomic) BOOL shouldTransformUsingTextureCenter; 
@property (assign) TSDRep * rep; 
@property (nonatomic,retain) NSDictionary * boundingRectForStage; 
@property (nonatomic,retain) NSDictionary * contentRectForStage; 
@property (assign,nonatomic) CGPoint originalPosition; 
@property (assign,nonatomic) CGColorSpaceRef colorSpace; 
@property (nonatomic,readonly) BOOL isRenderable; 
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGColorSpaceRef)colorSpace;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(CGRect)frame;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(void)teardown;
-(void)setIsBackground:(BOOL)arg1 ;
-(CALayer *)layer;
-(CGRect)boundingRect;
-(BOOL)isBackground;
-(BOOL)isBaked;
-(unsigned long long)chunkCount;
-(TSDRep *)rep;
-(void)setRep:(TSDRep *)arg1 ;
-(CALayer *)alternateLayer;
-(void)setTextureAngle:(double)arg1 ;
-(void)setTextureContentRect:(CGRect)arg1 ;
-(void)setTextureZOrder:(long long)arg1 ;
-(BOOL)isMagicMove;
-(void)setIsMagicMove:(BOOL)arg1 ;
-(void)setTextureOpacity:(double)arg1 ;
-(void)addRenderable:(id)arg1 ;
-(double)textureAngle;
-(void)setIsBaked:(BOOL)arg1 ;
-(BOOL)isBackgroundTexture:(id)arg1 ;
-(CGRect)boundingRectForStage:(long long)arg1 isBuildIn:(BOOL)arg2 ;
-(void)resetAnchorPoint;
-(BOOL)isRenderable;
-(void)renderLayerContentsIfNeeded;
-(void)renderIntoContext:(CGContextRef)arg1 ;
-(CGPoint)originalPosition;
-(void)setOriginalPosition:(CGPoint)arg1 ;
-(double)textureOpacity;
-(long long)stageIndexForTexture:(id)arg1 ;
-(void)addRenderable:(id)arg1 forStage:(long long)arg2 ;
-(void)addFinalTexture:(id)arg1 forStage:(long long)arg2 reverse:(BOOL)arg3 ;
-(void)setAlternateLayer:(CALayer *)arg1 ;
-(void)setBoundingRectForStage:(NSDictionary *)arg1 ;
-(void)setContentRectForStage:(NSDictionary *)arg1 ;
-(id)newFlattenedTextureFromTextures:(id)arg1 newRect:(CGRect)arg2 ;
-(NSArray *)visibleTextures;
-(void)p_applyPositionFromAttributes:(id)arg1 viewScale:(double)arg2 ;
-(void)p_resetAttributesWithViewScale:(double)arg1 ;
-(void)setBoundingRect:(CGRect)arg1 forStage:(long long)arg2 ;
-(CGRect)contentRectForStage:(long long)arg1 isBuildIn:(BOOL)arg2 ;
-(id)visibleTexturesForStage:(long long)arg1 isBuildIn:(BOOL)arg2 shouldFlatten:(BOOL)arg3 ;
-(void)removeRenderable:(id)arg1 ;
-(id)firstVisibleTextureForTextureType:(int)arg1 ;
-(id)newFlattenedTexture;
-(id)finalTextureForStage:(long long)arg1 reverse:(BOOL)arg2 ;
-(void)hideLayersOfFinalTextures;
-(void)setLayerGeometryFromRep:(id)arg1 ;
-(void)adjustAnchorPointRelativeToCenterOfRotation;
-(void)applyActionEffect:(id)arg1 viewScale:(double)arg2 isMagicMove:(BOOL)arg3 shouldBake:(BOOL)arg4 applyScaleOnly:(BOOL)arg5 ignoreScale:(BOOL)arg6 shouldCheckActionKeys:(BOOL)arg7 ;
-(void)setBoundingRect:(CGRect)arg1 ;
-(void)setContentRect:(CGRect)arg1 forStage:(long long)arg2 ;
-(void)addPerspectiveLayerToTexture:(id)arg1 withShowSize:(CGSize)arg2 ;
-(NSArray *)allTextures;
-(NSDictionary *)boundingRectForStage;
-(NSDictionary *)contentRectForStage;
-(long long)maxStageIndex;
-(BOOL)shouldIncludeFinalTexturesInVisibleSet;
-(void)setShouldIncludeFinalTexturesInVisibleSet:(BOOL)arg1 ;
-(BOOL)shouldTransformUsingTextureCenter;
-(void)setShouldTransformUsingTextureCenter:(BOOL)arg1 ;
-(CGRect)textureContentRect;
-(long long)textureZOrder;
-(long long)stageIndex;
@end

