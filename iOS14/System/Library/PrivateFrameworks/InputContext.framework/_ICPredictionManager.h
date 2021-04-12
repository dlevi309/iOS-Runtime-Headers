/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
*/

#import <libobjc.A.dylib/_ICPredictionManaging.h>
#import <libobjc.A.dylib/_ICFeedbackAccepting.h>

@protocol OS_dispatch_queue;
@class NSArray, NSString, NSObject, _ICResultCache;

@interface _ICPredictionManager : NSObject <_ICPredictionManaging, _ICFeedbackAccepting> {

	NSArray* _predictionSources;
	NSString* _lastUsedSource;
	NSObject*<OS_dispatch_queue> _serialQueue;
	_ICResultCache* _cache;

}

@property (readonly) _ICResultCache * cache;                        //@synthesize cache=_cache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3 ;
-(void)hibernate;
-(void)setLastUsedSource:(id)arg1 ;
-(void)warmUp;
-(void)predictedItemSelected:(id)arg1 ;
-(_ICResultCache *)cache;
-(void)propogateMetrics:(id)arg1 data:(id)arg2 ;
-(id)_quickTypePredictionWithTrigger:(id)arg1 searchContext:(id)arg2 timeoutInMilliseconds:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)searchWithTrigger:(id)arg1 searchContext:(id)arg2 timeoutInMilliseconds:(int)arg3 error:(id*)arg4 ;
-(id)searchWithTriggers:(id)arg1 application:(id)arg2 recipient:(id)arg3 localeIdentifier:(id)arg4 timeoutInMilliseconds:(int)arg5 resultLimit:(int)arg6 error:(id*)arg7 ;
-(id)initWithPredictionSources:(id)arg1 ;
-(id)searchWithTriggers:(id)arg1 application:(id)arg2 recipient:(id)arg3 localeIdentifier:(id)arg4 isResponseDenyListed:(BOOL)arg5 shouldDisableAutoCaps:(BOOL)arg6 timeoutInMilliseconds:(int)arg7 resultLimit:(int)arg8 error:(id*)arg9 ;
-(void)reset;
-(void)providePredictionFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3 ;
-(id)workLocation;
-(id)searchForMeCardRegions;
-(id)searchForMeCardEmailAddresses;
-(id)lastCachedResultWithInitialCharacters:(id)arg1 ;
@end

