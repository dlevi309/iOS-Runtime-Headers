/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@protocol OS_dispatch_queue;
#import <TextInputCore/TextInputCore-Structs.h>
@class NSLocale, TITransientLexiconManager, NLTagger, NSObject, NSString;

@interface TISmartSelector : NSObject {

	unique_ptr<KB::StaticDictionary, std::__1::default_delete<KB::StaticDictionary> >* _staticDictionary;
	LXLexiconRef _contactDictionary;
	/*^block*/id _contactObserver;
	unsigned long long _options;
	NSLocale* _locale;
	TITransientLexiconManager* _transientLexiconManager;
	NLTagger* _namedEntityTagger;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _dataChangedHandler;

}

@property (assign) unsigned long long options;                                       //@synthesize options=_options - In the implementation block
@property (retain) NSLocale * locale;                                                //@synthesize locale=_locale - In the implementation block
@property (retain) TITransientLexiconManager * transientLexiconManager;              //@synthesize transientLexiconManager=_transientLexiconManager - In the implementation block
@property (retain) NLTagger * namedEntityTagger;                                     //@synthesize namedEntityTagger=_namedEntityTagger - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> dispatchQueue;                       //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (copy) id dataChangedHandler;                                              //@synthesize dataChangedHandler=_dataChangedHandler - In the implementation block
@property (retain) NSString * language; 
-(id)dataChangedHandler;
-(NSLocale *)locale;
-(id)initWithOptions:(unsigned long long)arg1 language:(id)arg2 dataChangedHandler:(/*^block*/id)arg3 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(void)setTransientLexiconManager:(TITransientLexiconManager *)arg1 ;
-(NLTagger *)namedEntityTagger;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setLanguage:(NSString *)arg1 ;
-(NSRange)selectionRangeForTextInDocument:(id)arg1 inRange:(NSRange)arg2 language:(id)arg3 tokenizedRanges:(id)arg4 options:(unsigned long long)arg5 ;
-(unsigned long long)options;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setNamedEntityTagger:(NLTagger *)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(TITransientLexiconManager *)transientLexiconManager;
-(NSRange)selectionRangeForTextInDocument:(id)arg1 inRange:(NSRange)arg2 language:(id)arg3 options:(unsigned long long)arg4 ;
-(void)loadStaticPhraseDictionary;
-(NSRange)longestRangeEncapsulatingSubstringInDocument:(id)arg1 containingRange:(NSRange)arg2 tokenizedRanges:(id)arg3 meetingCondition:(/*^block*/id)arg4 ;
-(void)setDataChangedHandler:(id)arg1 ;
-(NSString *)language;
-(void)dealloc;
@end

