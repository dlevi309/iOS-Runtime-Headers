/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/

#import <CoreSpotlight/CSXPCConnection.h>

@class NSMutableDictionary;

@interface CSSearchConnection : CSXPCConnection {

	BOOL _previouslyInitialized;
	NSMutableDictionary* _queries;

}

@property (nonatomic,retain) NSMutableDictionary * queries;              //@synthesize queries=_queries - In the implementation block
@property (nonatomic,readonly) BOOL previouslyInitialized;               //@synthesize previouslyInitialized=_previouslyInitialized - In the implementation block
+(id)sharedSearchConnection;
+(id)sharedCSUserFSConnection;
-(void)cancelQuery:(unsigned long long)arg1 ;
-(id)init;
-(void)handleError:(id)arg1 ;
-(void)setQueries:(NSMutableDictionary *)arg1 ;
-(void)setQuery:(id)arg1 forID:(id)arg2 ;
-(void)preheat:(id)arg1 ;
-(id)queryForID:(id)arg1 ;
-(BOOL)previouslyInitialized;
-(id)createXPCDictionaryForQuery:(id)arg1 queryID:(long long)arg2 queryContext:(id)arg3 needsInitialization:(BOOL)arg4 ;
-(id)initWithMachServiceName:(id)arg1 ;
-(void)sendMessageAsync:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startQuery:(id)arg1 context:(id)arg2 ;
-(void)handleReply:(id)arg1 ;
-(NSMutableDictionary *)queries;
-(id)removeQueryForID:(id)arg1 ;
@end

