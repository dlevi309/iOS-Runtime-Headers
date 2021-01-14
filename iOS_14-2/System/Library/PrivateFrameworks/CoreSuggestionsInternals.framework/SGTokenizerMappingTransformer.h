/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <libobjc.A.dylib/PMLTransformerProtocol.h>

@class NSLinguisticTagger, NSString;

@interface SGTokenizerMappingTransformer : NSObject <PMLTransformerProtocol> {

	NSLinguisticTagger* _tagger;
	BOOL _nameTagging;
	BOOL _trustCoreNLP;
	NSString* _punctuationMapping;
	NSString* _personalNameMapping;
	NSString* _locale;
	void* _nlpTagger;
	int _linguisticDataNotificationToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)forLocale:(id)arg1 ;
+(id)forLocale:(id)arg1 withPersonalNameMapping:(id)arg2 ;
+(id)forLocale:(id)arg1 tagNames:(BOOL)arg2 personalNameMapping:(id)arg3 punctuationMapping:(id)arg4 ;
+(id)forLocale:(id)arg1 tagNames:(BOOL)arg2 trustCoreNLP:(BOOL)arg3 personalNameMapping:(id)arg4 punctuationMapping:(id)arg5 ;
-(void)_registerForNotifications;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)transform:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)initForLocale:(id)arg1 tagNames:(BOOL)arg2 trustCoreNLP:(BOOL)arg3 personalNameMapping:(id)arg4 punctuationMapping:(id)arg5 ;
-(void)transformWithCoreNLP:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)transformWithNLLinguisticTagger:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)isEqualToTokenizerMappingTransformer:(id)arg1 ;
@end

