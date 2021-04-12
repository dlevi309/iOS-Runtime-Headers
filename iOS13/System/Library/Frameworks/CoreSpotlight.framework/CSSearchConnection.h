/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)sharedCSUserFSConnection;
+(id)sharedSearchConnection;
-(id)init;
-(void)handleError:(id)arg1 ;
-(id)initWithMachServiceName:(id)arg1 ;
-(void)setQueries:(NSMutableDictionary *)arg1 ;
-(void)sendMessageAsync:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)previouslyInitialized;
-(void)handleReply:(id)arg1 ;
-(id)removeQueryForID:(id)arg1 ;
-(void)startQuery:(id)arg1 context:(id)arg2 ;
-(id)queryForID:(id)arg1 ;
-(void)setQuery:(id)arg1 forID:(id)arg2 ;
-(id)createXPCDictionaryForQuery:(id)arg1 queryID:(long long)arg2 queryContext:(id)arg3 needsInitialization:(BOOL)arg4 ;
-(void)cancelQuery:(unsigned long long)arg1 ;
-(NSMutableDictionary *)queries;
@end

