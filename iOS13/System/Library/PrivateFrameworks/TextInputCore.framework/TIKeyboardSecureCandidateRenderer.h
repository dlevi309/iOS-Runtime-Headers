/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


#import <TextInputCore/TextInputCore-Structs.h>
@class NSMutableDictionary, CAContext, NSString;

@interface TIKeyboardSecureCandidateRenderer : NSObject {

	NSMutableDictionary* _secureCandidateCache;
	CAContext* _context;
	NSString* _localeIdentifier;
	NSMutableDictionary* _accessibilityLabelCache;

}

@property (nonatomic,retain) NSMutableDictionary * secureCandidateCache;              //@synthesize secureCandidateCache=_secureCandidateCache - In the implementation block
@property (nonatomic,readonly) CAContext * context;                                   //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * localeIdentifier;                             //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
+(id)allRenderers;
-(id)init;
-(void)dealloc;
-(NSString *)localeIdentifier;
-(id)initWithLocaleIdentifier:(id)arg1 ;
-(CAContext *)context;
-(id)localizedStringForKey:(id)arg1 ;
-(id)_truncationSentinel;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(id)initForLocalizedStrings;
-(CFArrayRef)arrayOfContexts:(unsigned long long)arg1 withRenderTraits:(id)arg2 ;
-(CFArrayRef)imagesFromContexts:(CFArrayRef)arg1 ;
-(CFArrayRef)imagesFromSecureCandidates:(id)arg1 withRenderTraits:(id)arg2 outAccessibilityLabels:(id*)arg3 ;
-(id)accessibilityLabelsForSecureHeaders:(id)arg1 secureContents:(id)arg2 truncationSentinel:(id)arg3 ;
-(void)cacheAccessibilityLabel:(id)arg1 forSlotID:(unsigned)arg2 ;
-(id)accessibilityLabelForSlotID:(unsigned)arg1 ;
-(id)localizedApplicationNameWithBundleIdentifier:(id)arg1 ;
-(id)slotIDsFromSecureCandidates:(id)arg1 withRenderTraits:(id)arg2 ;
-(CGImageRef)imageForSendCurrentLocationWithRenderTraits:(id)arg1 ;
-(unsigned)slotIDForSendCurrentLocationWithRenderTraits:(id)arg1 ;
-(void)clearSecureCandidateCache;
-(id)cachedCandidateForSecureCandidate:(id)arg1 ;
-(id)updateCachedCandidate:(id)arg1 withCandidateString:(id)arg2 ;
-(id)cachedPayloadForSecureCandidateSlotID:(unsigned)arg1 ;
-(NSMutableDictionary *)secureCandidateCache;
-(void)setSecureCandidateCache:(NSMutableDictionary *)arg1 ;
@end

