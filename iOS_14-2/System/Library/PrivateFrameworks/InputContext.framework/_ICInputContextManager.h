/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
*/

#import <InputContext/InputContext-Structs.h>
#import <libobjc.A.dylib/_ICPredictionManaging.h>
#import <libobjc.A.dylib/_ICLexiconManaging.h>
#import <libobjc.A.dylib/_ICFeedbackManaging.h>

@protocol _ICLexiconManaging;
@class NSObject, _ICPredictionManager, NSString;

@interface _ICInputContextManager : NSObject <_ICPredictionManaging, _ICLexiconManaging, _ICFeedbackManaging> {

	LXLexiconRef _durableNamedEntityLexicon;
	LXLexiconRef _recentNamedEntityLexicon;
	NSObject*<_ICLexiconManaging> _lexiconManager;
	_ICPredictionManager* _predictionManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3 ;
-(void)hibernate;
-(void)warmUp;
-(void)predictedItemSelected:(id)arg1 ;
-(void)removeContactObserver:(/*^block*/id)arg1 ;
-(id)initForIntegrationTesting;
-(void)initPredictionManager;
-(id)loadLexicons:(/*^block*/id)arg1 ;
-(void)propogateMetrics:(id)arg1 data:(id)arg2 ;
-(void)doInitPredictionManager;
-(void)unloadLexicons;
-(id)searchWithTriggers:(id)arg1 application:(id)arg2 recipient:(id)arg3 localeIdentifier:(id)arg4 timeoutInMilliseconds:(int)arg5 resultLimit:(int)arg6 error:(id*)arg7 ;
-(void)doInitLexiconManager;
-(void)initLexiconManager;
-(void)reset;
-(void)provideLexiconFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3 ;
-(void)providePredictionFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3 ;
-(id)getPredictionManager;
-(id)initWithPredictionSource:(id)arg1 ;
-(id)getLexiconManager;
-(id)loadLexiconsUsingFilter:(/*^block*/id)arg1 ;
-(/*^block*/id)addContactObserver:(/*^block*/id)arg1 ;
-(id)searchForMeCardRegions;
-(id)searchForMeCardEmailAddresses;
-(id)lastCachedResultWithInitialCharacters:(id)arg1 ;
@end

