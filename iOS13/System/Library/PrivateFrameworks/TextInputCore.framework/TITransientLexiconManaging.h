/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@protocol TITransientLexiconManaging <TIKeyboardActivityObserving>
@property (nonatomic,readonly) const LXLexiconRef namedEntityLexicon; 
@property (nonatomic,readonly) const LXLexiconRef namedEntityPhraseLexicon; 
@required
-(/*^block*/id)addContactObserver:(/*^block*/id)arg1;
-(void)removeContactObserver:(/*^block*/id)arg1;
-(void)loadLexicons;
-(BOOL)searchForWord:(id)arg1;
-(BOOL)searchForWordCaseInsensitive:(id)arg1;
-(void)getOnce:(/*^block*/id)arg1;
-(void)debugLogEntities;
-(const LXLexiconRef)namedEntityLexicon;
-(const LXLexiconRef)namedEntityPhraseLexicon;

@end

