/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@protocol TITransientLexiconManaging <TIKeyboardActivityObserving>
@property (nonatomic,readonly) const LXLexiconRef namedEntityLexicon; 
@property (nonatomic,readonly) const LXLexiconRef namedEntityPhraseLexicon; 
@required
-(void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;
-(void)loadLexicons;
-(void)removeContactObserver:(/*^block*/id)arg1;
-(const LXLexiconRef)namedEntityLexicon;
-(BOOL)searchForWordCaseInsensitive:(id)arg1;
-(void)getOnce:(/*^block*/id)arg1;
-(BOOL)searchForWord:(id)arg1;
-(const LXLexiconRef)namedEntityPhraseLexicon;
-(/*^block*/id)addContactObserver:(/*^block*/id)arg1;
-(void)debugLogEntities;

@end

