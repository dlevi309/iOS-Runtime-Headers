/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EARLanguageDetector : NSObject {

	unique_ptr<quasar::LanguageDetector, std::__1::default_delete<quasar::LanguageDetector> >* languageDetector;
	unsigned _featureQueuePriority;

}

@property (assign,nonatomic) unsigned featureQueuePriority;              //@synthesize featureQueuePriority=_featureQueuePriority - In the implementation block
+(void)initialize;
+(vector<std::__1::optional<quasar::Locale>, std::__1::allocator<std::__1::optional<quasar::Locale> > >*)quasarLocalesOfMessages:(id)arg1 ;
+(shared_ptr<const quasar::LDContext>*)updateContext:(const LDContext*)arg1 withMessageLocales:(const vector<std::__1::optional<quasar::Locale>, std::__1::allocator<std::__1::optional<quasar::Locale> > >*)arg2 ;
+(id)localesOfMessages:(id)arg1 ;
-(id)initWithConfigFile:(id)arg1 ;
-(id)startRequestWith:(unsigned long long)arg1 context:(id)arg2 delegate:(id)arg3 ;
-(id)initWithConfigFile:(id)arg1 overrides:(id)arg2 ;
-(unsigned)featureQueuePriority;
-(void)setFeatureQueuePriority:(unsigned)arg1 ;
@end
