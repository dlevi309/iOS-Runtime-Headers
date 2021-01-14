/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
*/


@class NSArray, PARSession;

@interface SPClientSession : NSObject {

	NSArray* _searchDomains;
	BOOL _observersAdded;
	int _prefsToken;
	PARSession* _session;
	long long _contentFilter;
	BOOL _infinitePatience;
	long long _maxUISuggestions;

}

@property (readonly) NSArray * disabledBundleIds; 
@property (assign,nonatomic) BOOL infinitePatience;              //@synthesize infinitePatience=_infinitePatience - In the implementation block
@property (assign) long long maxUISuggestions;                   //@synthesize maxUISuggestions=_maxUISuggestions - In the implementation block
+(void)initialize;
+(void)retrieveFirstTimeExperienceTextWithReply:(/*^block*/id)arg1 ;
-(void)preheat;
-(id)init;
-(void)finishRanking:(id)arg1 blendingDuration:(double)arg2 ;
-(void)setInfinitePatience:(BOOL)arg1 ;
-(long long)contentFilters;
-(void)deactivate;
-(void)activate;
-(NSArray *)disabledBundleIds;
-(BOOL)_setSearchDomains:(id)arg1 ;
-(id)queryTaskWithContext:(id)arg1 ;
-(BOOL)infinitePatience;
-(long long)maxUISuggestions;
-(void)setMaxUISuggestions:(long long)arg1 ;
@end

