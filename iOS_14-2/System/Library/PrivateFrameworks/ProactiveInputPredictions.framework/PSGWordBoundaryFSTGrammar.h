/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveInputPredictions.framework/ProactiveInputPredictions
*/


@protocol OS_dispatch_queue;
@class NSCache, NSObject;

@interface PSGWordBoundaryFSTGrammar : NSObject {

	NSCache* _lmWrapperCache;
	NSObject*<OS_dispatch_queue> _lmWrapperQueue;

}
+(id)sharedInstance;
-(id)triggerAttributesForContext:(id)arg1 localeIdentifier:(id)arg2 ;
-(id)init;
-(void*)_createLexicon:(id)arg1 ;
-(void)warmUpForLocaleIdentifier:(id)arg1 ;
-(void*)_createLanguageModel:(id)arg1 ;
-(void)clearLMCache;
-(id)_getLMWrapper:(id)arg1 ;
-(id)_getPrimingToken:(void*)arg1 transientTokenID:(unsigned)arg2 ;
@end

