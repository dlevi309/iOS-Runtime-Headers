/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)localizedStringForKey:(id)arg1 ;
-(NSString *)localeIdentifier;
-(id)initWithLocaleIdentifier:(id)arg1 ;
-(id)init;
-(id)_truncationSentinel;
-(id)cachedPayloadForSecureCandidateSlotID:(unsigned)arg1 ;
-(id)initForLocalizedStrings;
-(void)setSecureCandidateCache:(NSMutableDictionary *)arg1 ;
-(CGImageRef)imageForSendCurrentLocationWithRenderTraits:(id)arg1 ;
-(id)accessibilityLabelForSlotID:(unsigned)arg1 ;
-(CAContext *)context;
-(id)localizedApplicationNameWithBundleIdentifier:(id)arg1 ;
-(CFArrayRef)imagesFromSecureCandidates:(id)arg1 withRenderTraits:(id)arg2 outAccessibilityLabels:(id*)arg3 ;
-(id)updateCachedCandidate:(id)arg1 withCandidateString:(id)arg2 ;
-(id)accessibilityLabelsForSecureHeaders:(id)arg1 secureContents:(id)arg2 truncationSentinel:(id)arg3 ;
-(unsigned)slotIDForSendCurrentLocationWithRenderTraits:(id)arg1 ;
-(CFArrayRef)arrayOfContexts:(unsigned long long)arg1 withRenderTraits:(id)arg2 ;
-(NSMutableDictionary *)secureCandidateCache;
-(id)slotIDsFromSecureCandidates:(id)arg1 withRenderTraits:(id)arg2 ;
-(void)cacheAccessibilityLabel:(id)arg1 forSlotID:(unsigned)arg2 ;
-(id)cachedCandidateForSecureCandidate:(id)arg1 ;
-(void)clearSecureCandidateCache;
-(CFArrayRef)imagesFromContexts:(CFArrayRef)arg1 ;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(void)dealloc;
@end

