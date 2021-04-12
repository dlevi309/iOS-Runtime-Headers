/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@protocol TILanguageLikelihoodModeling, TILanguageSelectionControllerDelegate, TIMultilingualPreferenceProviding;
#import <TextInputCore/TextInputCore-Structs.h>
@class TILanguageModelAdaptationContext, NSArray, TIInputMode, NSMutableDictionary, NSDictionary, NSMutableArray;

@interface TILanguageSelectionController : NSObject {

	id<TILanguageLikelihoodModeling> _languageLikelihoodModel;
	vector<TITokenID, std::__1::allocator<TITokenID> >* m_buffered_tokens;
	id<TILanguageSelectionControllerDelegate> _delegate;
	TILanguageModelAdaptationContext* _adaptationContext;
	NSArray* _activeInputModes;
	id<TIMultilingualPreferenceProviding> _preferenceProvider;
	TIInputMode* _primaryInputMode;
	TIInputMode* _preferredSecondaryInputMode;
	TIInputMode* _inferredSecondaryInputMode;
	NSArray* _userEnabledInputModes;
	NSMutableDictionary* _inputModeProbabilities;
	NSDictionary* _referenceInputModeProbabilities;
	NSMutableArray* _bufferedTokenStrings;

}

@property (nonatomic,readonly) id<TILanguageLikelihoodModeling> languageLikelihoodModel;              //@synthesize languageLikelihoodModel=_languageLikelihoodModel - In the implementation block
@property (nonatomic,readonly) id<TIMultilingualPreferenceProviding> preferenceProvider;              //@synthesize preferenceProvider=_preferenceProvider - In the implementation block
@property (nonatomic,retain) TIInputMode * primaryInputMode;                                          //@synthesize primaryInputMode=_primaryInputMode - In the implementation block
@property (nonatomic,retain) TIInputMode * preferredSecondaryInputMode;                               //@synthesize preferredSecondaryInputMode=_preferredSecondaryInputMode - In the implementation block
@property (nonatomic,retain) TIInputMode * inferredSecondaryInputMode;                                //@synthesize inferredSecondaryInputMode=_inferredSecondaryInputMode - In the implementation block
@property (nonatomic,retain) NSArray * userEnabledInputModes;                                         //@synthesize userEnabledInputModes=_userEnabledInputModes - In the implementation block
@property (nonatomic,retain) NSArray * activeInputModes;                                              //@synthesize activeInputModes=_activeInputModes - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * inputModeProbabilities;                          //@synthesize inputModeProbabilities=_inputModeProbabilities - In the implementation block
@property (nonatomic,copy) NSDictionary * referenceInputModeProbabilities;                            //@synthesize referenceInputModeProbabilities=_referenceInputModeProbabilities - In the implementation block
@property (nonatomic,readonly) NSMutableArray * bufferedTokenStrings;                                 //@synthesize bufferedTokenStrings=_bufferedTokenStrings - In the implementation block
@property (assign,nonatomic) id<TILanguageSelectionControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) TILanguageModelAdaptationContext * adaptationContext;                    //@synthesize adaptationContext=_adaptationContext - In the implementation block
+(id)inputModeForLanguageIdentifier:(id)arg1 ;
+(id)inferSecondaryInputModeForPrimary:(id)arg1 enabled:(id)arg2 ;
+(id)sharedLanguageLikelihoodModel;
+(void)reportTypedTokens:(const vector<TITokenID, std::__1::allocator<TITokenID> >*)arg1 activeInputModes:(id)arg2 ;
+(id)inferInputModeForLanguage:(id)arg1 enabled:(id)arg2 ;
+(id)multilingualInputModesForInputModes:(id)arg1 ;
+(id)inferSecondaryInputModeForPrimary:(id)arg1 enabled:(id)arg2 enabledExcludingPreferredLanguages:(id)arg3 ;
+(id)inputModesForLanguageIdentifiers:(id)arg1 ;
-(void)setActiveInputModes:(NSArray *)arg1 ;
-(NSMutableArray *)bufferedTokenStrings;
-(void)updateActiveInputModesSuppressingNotification:(BOOL)arg1 ;
-(id)init;
-(void)setPrimaryInputMode:(TIInputMode *)arg1 ;
-(TIInputMode *)inferredSecondaryInputMode;
-(id<TILanguageSelectionControllerDelegate>)delegate;
-(void)setAdaptationContext:(TILanguageModelAdaptationContext *)arg1 ;
-(void)addTokenString:(id)arg1 tokenID:(TITokenID)arg2 context:(const TITokenID*)arg3 contextLength:(unsigned long long)arg4 ;
-(TIInputMode *)preferredSecondaryInputMode;
-(void)setInferredSecondaryInputMode:(TIInputMode *)arg1 ;
-(void)appleKeyboardsPreferencesChanged:(id)arg1 ;
-(NSMutableDictionary *)inputModeProbabilities;
-(id)fetchPreferredSecondaryInputMode;
-(BOOL)updateInputModeProbabilities;
-(void)setDelegate:(id<TILanguageSelectionControllerDelegate>)arg1 ;
-(id)initWithLanguageLikelihoodModel:(id)arg1 preferenceProvider:(id)arg2 ;
-(void)setUserEnabledInputModes:(NSArray *)arg1 ;
-(BOOL)bufferIsCompatibleWithContext:(const TITokenID*)arg1 contextLength:(unsigned long long)arg2 ;
-(NSArray *)activeInputModes;
-(void)removeTokenString:(id)arg1 tokenID:(TITokenID)arg2 context:(const TITokenID*)arg3 contextLength:(unsigned long long)arg4 ;
-(id)fetchUserEnabledInputModes;
-(void)appleKeyboardsInternalSettingsChanged:(id)arg1 ;
-(NSArray *)userEnabledInputModes;
-(id<TIMultilingualPreferenceProviding>)preferenceProvider;
-(double)lastOfflineAdaptationTimeForApp:(id)arg1 ;
-(TILanguageModelAdaptationContext *)adaptationContext;
-(void)flushBuffer;
-(TIInputMode *)primaryInputMode;
-(NSDictionary *)referenceInputModeProbabilities;
-(float)priorProbabilityForInputMode:(id)arg1 ;
-(id)fetchUserEnabledInputModesExcludingPreferredLanguages;
-(void)setPreferredSecondaryInputMode:(TIInputMode *)arg1 ;
-(BOOL)didProbabilityChangeSignificantly;
-(void)feedBufferedTokenStringsToModel;
-(void)setReferenceInputModeProbabilities:(NSDictionary *)arg1 ;
-(id<TILanguageLikelihoodModeling>)languageLikelihoodModel;
-(void)dealloc;
@end

