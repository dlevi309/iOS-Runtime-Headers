/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class TIAutocorrectionList, NSHashTable, TIKeyboardCandidate;

@interface UIKeyboardAutocorrectionController : NSObject {

	unsigned long long _signpostToken;
	BOOL _requestedAutocorrection;
	BOOL _needsAutocorrection;
	BOOL _deferredAutocorrection;
	TIAutocorrectionList* _autocorrectionList;
	TIAutocorrectionList* _textSuggestionList;
	NSHashTable* _autocorrectionObservers;

}

@property (assign,nonatomic) BOOL needsAutocorrection;                               //@synthesize needsAutocorrection=_needsAutocorrection - In the implementation block
@property (assign,nonatomic) BOOL deferredAutocorrection;                            //@synthesize deferredAutocorrection=_deferredAutocorrection - In the implementation block
@property (assign,nonatomic) BOOL requestedAutocorrection;                           //@synthesize requestedAutocorrection=_requestedAutocorrection - In the implementation block
@property (nonatomic,retain) NSHashTable * autocorrectionObservers;                  //@synthesize autocorrectionObservers=_autocorrectionObservers - In the implementation block
@property (nonatomic,readonly) TIKeyboardCandidate * autocorrection; 
@property (nonatomic,retain) TIAutocorrectionList * autocorrectionList;              //@synthesize autocorrectionList=_autocorrectionList - In the implementation block
@property (nonatomic,retain) TIAutocorrectionList * textSuggestionList;              //@synthesize textSuggestionList=_textSuggestionList - In the implementation block
-(id)init;
-(void)requestAutocorrectionWithExecutionContext:(id)arg1 ;
-(BOOL)requestedAutocorrection;
-(BOOL)deferredAutocorrection;
-(void)setAutocorrectionList:(TIAutocorrectionList *)arg1 ;
-(void)setTextSuggestionList:(TIAutocorrectionList *)arg1 ;
-(void)clearAutofillAndTextSuggestions;
-(void)addAutocorrectionObserver:(id)arg1 ;
-(BOOL)hasTextSuggestionCandidates;
-(BOOL)needsAutocorrection;
-(void)_setAutocorrectionList:(id)arg1 notifyObserver:(BOOL)arg2 ;
-(void)setAutocorrectionObservers:(NSHashTable *)arg1 ;
-(void)_notifyObserversOfClearedAutocorrectionList;
-(BOOL)hasAutofillCandidates;
-(void)clearAutocorrectionAndNotifyObservers:(BOOL)arg1 ;
-(TIAutocorrectionList *)textSuggestionList;
-(void)removeAutocorrectionObserver:(id)arg1 ;
-(TIKeyboardCandidate *)autocorrection;
-(void)setNeedsAutocorrection:(BOOL)arg1 ;
-(BOOL)hasCaseableAutocorrection;
-(BOOL)hasContinuousPathConversions;
-(TIAutocorrectionList *)autocorrectionList;
-(void)updateSuggestionViews;
-(void)setNeedsAutocorrection;
-(BOOL)hasAutocorrection;
-(void)_notifyObserversOfUpdatedAutocorrectionList:(id)arg1 ;
-(BOOL)hasProactiveCandidates;
-(void)setRequestedAutocorrection:(BOOL)arg1 ;
-(void)setDeferredAutocorrection:(BOOL)arg1 ;
-(void)clearAutocorrection;
-(NSHashTable *)autocorrectionObservers;
@end

