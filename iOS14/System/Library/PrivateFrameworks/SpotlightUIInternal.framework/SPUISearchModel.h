/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
*/

#import <libobjc.A.dylib/SPQueryTaskDelegate.h>

@protocol SPSearchAgentDelegate;
@class NSString, SFResultSection, NSObject, SPQueryTask, SPQueryResponse, NSArray;

@interface SPUISearchModel : NSObject <SPQueryTaskDelegate> {

	long long _updatesDisabled;
	NSString* _lastQueryString;
	BOOL _springBoardIsActive;
	BOOL _infinitePatience;
	BOOL _queryPartiallyComplete;
	BOOL _queryComplete;
	BOOL _forceStableResults;
	SFResultSection* _searchThroughSection;
	NSObject*<SPSearchAgentDelegate> _delegate;
	SPQueryTask* _queryTask;
	SPQueryResponse* _lastResponse;

}

@property (retain) SPQueryTask * queryTask;                                //@synthesize queryTask=_queryTask - In the implementation block
@property (retain) SPQueryResponse * lastResponse;                         //@synthesize lastResponse=_lastResponse - In the implementation block
@property (assign) BOOL springBoardIsActive;                               //@synthesize springBoardIsActive=_springBoardIsActive - In the implementation block
@property (assign) BOOL infinitePatience;                                  //@synthesize infinitePatience=_infinitePatience - In the implementation block
@property (assign) BOOL queryPartiallyComplete;                            //@synthesize queryPartiallyComplete=_queryPartiallyComplete - In the implementation block
@property (assign) BOOL queryComplete;                                     //@synthesize queryComplete=_queryComplete - In the implementation block
@property (assign) BOOL forceStableResults;                                //@synthesize forceStableResults=_forceStableResults - In the implementation block
@property (readonly) BOOL wantsCompletions; 
@property (readonly) NSArray * sections; 
@property (readonly) SFResultSection * searchThroughSection;               //@synthesize searchThroughSection=_searchThroughSection - In the implementation block
@property (retain) NSObject*<SPSearchAgentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) long long maxUISuggestions; 
+(void)preheat;
+(id)sharedInstance;
+(void)retrieveFirstTimeExperienceTextWithReply:(/*^block*/id)arg1 ;
+(id)sharedGeneralInstance;
+(id)sharedFullZWKInstance;
-(void)clear;
-(void)setForceStableResults:(BOOL)arg1 ;
-(void)didReceiveResponse:(id)arg1 ;
-(void)updateWithQueryContext:(id)arg1 ;
-(NSObject*<SPSearchAgentDelegate>)delegate;
-(NSArray *)sections;
-(void)setInfinitePatience:(BOOL)arg1 ;
-(SPQueryResponse *)lastResponse;
-(void)deactivate;
-(void)enableUpdates;
-(void)activate;
-(void)updatesEnabled;
-(BOOL)forceStableResults;
-(void)setDelegate:(NSObject*<SPSearchAgentDelegate>)arg1 ;
-(void)disableUpdates;
-(void)updatesDisabled;
-(BOOL)springBoardIsActive;
-(BOOL)queryInProgress;
-(BOOL)infinitePatience;
-(SFResultSection *)searchThroughSection;
-(void)invalidate;
-(long long)maxUISuggestions;
-(void)setMaxUISuggestions:(long long)arg1 ;
-(BOOL)queryComplete;
-(BOOL)queryPartiallyComplete;
-(BOOL)wantsCompletions;
-(SPQueryTask *)queryTask;
-(void)setLastResponse:(SPQueryResponse *)arg1 ;
-(void)setQueryPartiallyComplete:(BOOL)arg1 ;
-(void)setQueryComplete:(BOOL)arg1 ;
-(void)updateWithResponse:(id)arg1 ;
-(void)invalidateQuery:(id)arg1 ;
-(void)resultsDidBecomeInvalid:(id)arg1 ;
-(void)invalidateCurrentQuery;
-(BOOL)_suggestionsReadyForDisplay;
-(void)setSpringBoardIsActive:(BOOL)arg1 ;
-(void)setQueryTask:(SPQueryTask *)arg1 ;
@end

