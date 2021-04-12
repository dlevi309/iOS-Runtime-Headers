/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)reset;
-(void)warmUp;
-(void)doInitLexiconManager;
-(void)doInitPredictionManager;
-(void)initPredictionManager;
-(void)initLexiconManager;
-(id)getPredictionManager;
-(id)searchWithTriggers:(id)arg1 application:(id)arg2 recipient:(id)arg3 localeIdentifier:(id)arg4 timeoutInMilliseconds:(int)arg5 resultLimit:(int)arg6 error:(id*)arg7 ;
-(id)lastCachedResultWithInitialCharacters:(id)arg1 ;
-(void)predictedItemSelected:(id)arg1 ;
-(id)searchForMeCardRegions;
-(id)searchForMeCardEmailAddresses;
-(id)getLexiconManager;
-(/*^block*/id)addContactObserver:(/*^block*/id)arg1 ;
-(void)removeContactObserver:(/*^block*/id)arg1 ;
-(id)loadLexicons:(/*^block*/id)arg1 ;
-(id)loadLexiconsUsingFilter:(/*^block*/id)arg1 ;
-(void)unloadLexicons;
-(void)hibernate;
-(void)provideLexiconFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3 ;
-(void)providePredictionFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3 ;
-(id)initWithPredictionSource:(id)arg1 ;
-(id)initForIntegrationTesting;
@end

