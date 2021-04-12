/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(TIKeyboardCandidate *)autocorrection;
-(TIAutocorrectionList *)autocorrectionList;
-(BOOL)needsAutocorrection;
-(BOOL)requestedAutocorrection;
-(void)requestAutocorrectionWithExecutionContext:(id)arg1 ;
-(void)setNeedsAutocorrection:(BOOL)arg1 ;
-(void)_notifyObserversOfUpdatedAutocorrectionList:(id)arg1 ;
-(void)_setAutocorrectionList:(id)arg1 notifyObserver:(BOOL)arg2 ;
-(void)setAutocorrectionList:(TIAutocorrectionList *)arg1 ;
-(BOOL)deferredAutocorrection;
-(void)setDeferredAutocorrection:(BOOL)arg1 ;
-(void)clearAutocorrectionAndNotifyObservers:(BOOL)arg1 ;
-(BOOL)hasAutofillCandidates;
-(void)_notifyObserversOfClearedAutocorrectionList;
-(void)setTextSuggestionList:(TIAutocorrectionList *)arg1 ;
-(BOOL)hasAutocorrection;
-(void)setRequestedAutocorrection:(BOOL)arg1 ;
-(void)addAutocorrectionObserver:(id)arg1 ;
-(void)removeAutocorrectionObserver:(id)arg1 ;
-(void)updateSuggestionViews;
-(void)setNeedsAutocorrection;
-(void)clearAutocorrection;
-(void)clearAutofillAndTextSuggestions;
-(BOOL)hasCaseableAutocorrection;
-(BOOL)hasContinuousPathConversions;
-(BOOL)hasProactiveCandidates;
-(TIAutocorrectionList *)textSuggestionList;
-(NSHashTable *)autocorrectionObservers;
-(void)setAutocorrectionObservers:(NSHashTable *)arg1 ;
@end

