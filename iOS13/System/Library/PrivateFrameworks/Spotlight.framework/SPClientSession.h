/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}

@property (readonly) NSArray * disabledBundleIds; 
@property (assign,nonatomic) BOOL infinitePatience;              //@synthesize infinitePatience=_infinitePatience - In the implementation block
+(void)initialize;
+(void)retrieveFirstTimeExperienceTextWithReply:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)activate;
-(void)deactivate;
-(void)preheat;
-(BOOL)infinitePatience;
-(void)setInfinitePatience:(BOOL)arg1 ;
-(long long)contentFilters;
-(NSArray *)disabledBundleIds;
-(id)queryWithContext:(id)arg1 ;
-(BOOL)_setSearchDomains:(id)arg1 ;
-(void)finishRanking:(id)arg1 blendingDuration:(double)arg2 ;
@end

