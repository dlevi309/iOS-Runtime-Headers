/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableDictionary, NSLock, NSDictionary;

@interface PVEffect : NSObject <NSSecureCoding, NSCopying> {

	NSString* _effectID;
	NSString* _effectType;
	NSString* _displayName;
	SCD_Struct_PV27 _effectRange;
	NSMutableDictionary* _inspectableProperties;
	NSLock* _inspectablePropertiesLock;
	NSMutableDictionary* _effectParameters;
	atomic<unsigned int>* _loadCount;
	BOOL _conformToInputAspect;
	BOOL _isPreview;
	BOOL _isRecording;
	BOOL _useLocalLoopTime;
	BOOL _isInInteractiveMode;
	BOOL _shouldDisableFadeOut;

}

@property (assign,nonatomic) SCD_Struct_PV27 effectRange;                         //@synthesize effectRange=_effectRange - In the implementation block
@property (assign,nonatomic) BOOL conformToInputAspect;                           //@synthesize conformToInputAspect=_conformToInputAspect - In the implementation block
@property (nonatomic,copy) NSDictionary * inspectableProperties; 
@property (nonatomic,retain) NSMutableDictionary * effectParameters;              //@synthesize effectParameters=_effectParameters - In the implementation block
@property (assign,nonatomic) BOOL isPreview;                                      //@synthesize isPreview=_isPreview - In the implementation block
@property (assign,nonatomic) BOOL isRecording;                                    //@synthesize isRecording=_isRecording - In the implementation block
@property (assign,nonatomic) BOOL useLocalLoopTime;                               //@synthesize useLocalLoopTime=_useLocalLoopTime - In the implementation block
@property (assign,nonatomic) BOOL isInInteractiveMode;                            //@synthesize isInInteractiveMode=_isInInteractiveMode - In the implementation block
@property (assign,nonatomic) BOOL shouldDisableFadeOut;                           //@synthesize shouldDisableFadeOut=_shouldDisableFadeOut - In the implementation block
+(id)objectFromPlist:(id)arg1 inProject:(id)arg2 ;
+(BOOL)supportsSecureCoding;
+(void)setInteractiveMode:(BOOL)arg1 ;
+(void)initEffectRegistry;
+(id)newEffectWithID:(id)arg1 ;
+(id)registeredEffectIDsForEffectType:(id)arg1 ;
+(id)categoryForEffectID:(id)arg1 ;
+(BOOL)effectIDIsNone:(id)arg1 ;
+(void)initEffectRegistryWithHostDelegate:(id)arg1 ;
+(void)cleanupEffectsCache;
+(void)noteApplicationDidReceiveMemoryWarning;
+(id)effectTypeForEffectID:(id)arg1 ;
+(id)displayNameForEffectID:(id)arg1 ;
+(BOOL)effectIDIsRegistered:(id)arg1 ;
+(id)propertiesForEffect:(id)arg1 ;
+(void)registerEffectClass:(Class)arg1 forEffectID:(id)arg2 withProperties:(id)arg3 ;
+(void)handleCleanupEffectsCache;
+(void)handleApplicationWillTerminate;
+(void)handleApplicationDidReceiveMemoryWarning;
+(void)cleanupEffectsSingletons;
+(BOOL)isInteractiveMode;
+(void)registerEffects;
+(id)newEffectWithURL:(id)arg1 ;
+(id)newEffectWithURL:(id)arg1 ;
+(id)newEffectWithData:(id)arg1 ;
+(id)newEffectWithData:(id)arg1 ;
+(void)clearPreviewStats;
+(void)runDeferredRegistration;
+(void)ensureEffectsRegistered;
+(id)_effectRegistry;
+(id)_effectRegistryForLookup;
+(id)_registryEntryForEffectID:(id)arg1 ;
+(id)allRegisteredEffectIDs;
+(Class)classForEffectID:(id)arg1 ;
+(void)appFinishedLaunching:(id)arg1 ;
+(void)deferEffectRegistrationForClass:(Class)arg1 ;
+(id)userVisibleEffectIDs;
+(id)registeredEffectIDsForEffectTypes:(id)arg1 ;
+(id)firstRegisteredEffectIDContainingSubstring:(id)arg1 ;
+(id)registeredEffectIDsForClass:(Class)arg1 ;
+(id)displayNameForEffectType:(id)arg1 ;
+(id)themeForEffectID:(id)arg1 ;
+(id)descriptionForEffectID:(id)arg1 ;
+(BOOL)isVideoForEffectID:(id)arg1 ;
+(id)defaultVideoTransitionEffectID;
+(id)_registeredEffectClasses;
+(void)_registerBuiltInEffects;
+(void)willTerminate:(id)arg1 ;
+(void)_registerEffectsInBundle:(id)arg1 atPath:(id)arg2 ;
+(void)noteApplicationWillTerminate;
-(id)plistRepresentation;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isReady;
-(int)orientation;
-(id)displayName;
-(int)origin;
-(void)releaseResources;
-(CGSize)outputSize;
-(id)categoryName;
-(NSMutableDictionary *)effectParameters;
-(BOOL)isRecording;
-(void)setEffectParameters:(NSMutableDictionary *)arg1 ;
-(id)effectType;
-(BOOL)isPreview;
-(void)setIsRecording:(BOOL)arg1 ;
-(id)effectID;
-(SCD_Struct_PV27)effectRange;
-(void)setEffectRange:(SCD_Struct_PV27)arg1 ;
-(id)initWithEffectID:(id)arg1 ;
-(void)setInspectableProperties:(NSDictionary *)arg1 ;
-(void)setInspectableProperty:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isTextFlipped;
-(id)defaultAttributedString:(unsigned long long)arg1 ;
-(id)textEditingBounds:(SCD_Struct_PV20)arg1 ;
-(id)textTransforms:(SCD_Struct_PV20)arg1 ;
-(BOOL)textImagePoints:(CGPoint*)arg1 textAtIndex:(unsigned long long)arg2 time:(SCD_Struct_PV20)arg3 includeDropShadow:(BOOL)arg4 ;
-(void)disableRenderingTextObjectAtIndex:(unsigned)arg1 ;
-(void)enableRenderingTextObjectAtIndex:(unsigned)arg1 ;
-(void)setUseLocalLoopTime:(BOOL)arg1 ;
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
-(void)setIsInInteractiveMode:(BOOL)arg1 ;
-(BOOL)isInInteractiveMode;
-(id)topLevelGroupTransform;
-(BOOL)loadResources;
-(void)updateInspectableProperties:(id)arg1 ;
-(NSDictionary *)inspectableProperties;
-(void)addEntriesToInspectableProperties:(id)arg1 ;
-(BOOL)loadEffect;
-(void)updateInspectableProperties;
-(void)setConformToInputAspect:(BOOL)arg1 ;
-(HGRef<HGNode>*)previewHGNodeForTime:(SCD_Struct_PV20)arg1 inputHGNode:(HGRef<HGNode>*)arg2 outputSize:(CGSize)arg3 renderer:(HGRenderer*)arg4 ;
-(HGRef<HGNode>*)hgNodeForTime:(SCD_Struct_PV20)arg1 inputs:(const PVInputHGNodeMap<unsigned int>*)arg2 renderer:(const HGRef<HGRenderer>*)arg3 igContext:(HGRef<PVInstructionGraphContext>*)arg4 ;
-(BOOL)conformToInputAspect;
-(void)releaseEffect;
-(BOOL)supportsExtendedRangeInputs;
-(id)effectDescription;
-(void)_copyWithZone:(NSZone*)arg1 into:(id)arg2 ;
-(void)_postInit:(id)arg1 ;
-(void)_decodeFromCoder:(id)arg1 into:(id)arg2 ;
-(id)inspectablePropertyForKey:(id)arg1 ;
-(id)descriptionOfInspectableProperties;
-(float)proxyRenderScale;
-(BOOL)textImagePoints:(CGPoint*)arg1 textAtIndex:(unsigned long long)arg2 time:(SCD_Struct_PV20)arg3 ;
-(BOOL)imagePoints:(CGPoint*)arg1 time:(SCD_Struct_PV20)arg2 ;
-(BOOL)imagePointsAtPosterFrameTime:(CGPoint*)arg1 componentTime:(SCD_Struct_PV20)arg2 ;
-(void)setTopLevelGroupTransform:(id)arg1 ;
-(BOOL)isTranscription;
-(BOOL)shouldRenderPreviewAtPosterTime;
-(void)clearTranscription;
-(void)resetToDefaultTranscriptionForLocaleID:(id)arg1 ;
-(void)setTranscriptionText:(id)arg1 ;
-(BOOL)transcriptionHitTest:(CGPoint)arg1 time:(SCD_Struct_PV20)arg2 ;
-(BOOL)hasBuiltInEnvironment;
-(BOOL)usesDefaultChannelDataEncoding;
-(BOOL)writeDefaultChannels;
-(void)applyInspectableProperties;
-(void)setIsPreview:(BOOL)arg1 ;
-(BOOL)useLocalLoopTime;
-(BOOL)shouldDisableFadeOut;
-(void)setShouldDisableFadeOut:(BOOL)arg1 ;
@end

