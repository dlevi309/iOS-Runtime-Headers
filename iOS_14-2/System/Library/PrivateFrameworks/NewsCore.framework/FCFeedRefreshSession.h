/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCFeedRefreshSessionForYouConfig;
@class NSString, NSDate, NSDictionary, NSArray, NSSet, FCFeedEdition;

@interface FCFeedRefreshSession : NSObject {

	BOOL _reachedEnd;
	BOOL _isOffline;
	BOOL _isNewEdition;
	NSString* _identifier;
	NSDate* _refreshDate;
	NSDate* _modificationDate;
	NSDictionary* _cursorsByGroupEmitterID;
	NSArray* _pendingGroups;
	NSSet* _activeGroupEmitterIDs;
	FCFeedEdition* _lastCompletedEdition;
	id<FCFeedRefreshSessionForYouConfig> _forYouConfig;

}

@property (nonatomic,readonly) NSString * identifier;                                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDate * refreshDate;                                                //@synthesize refreshDate=_refreshDate - In the implementation block
@property (nonatomic,readonly) NSDate * modificationDate;                                           //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * cursorsByGroupEmitterID;                         //@synthesize cursorsByGroupEmitterID=_cursorsByGroupEmitterID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * pendingGroups;                                        //@synthesize pendingGroups=_pendingGroups - In the implementation block
@property (nonatomic,copy,readonly) NSSet * activeGroupEmitterIDs;                                  //@synthesize activeGroupEmitterIDs=_activeGroupEmitterIDs - In the implementation block
@property (nonatomic,readonly) FCFeedEdition * lastCompletedEdition;                                //@synthesize lastCompletedEdition=_lastCompletedEdition - In the implementation block
@property (nonatomic,readonly) BOOL reachedEnd;                                                     //@synthesize reachedEnd=_reachedEnd - In the implementation block
@property (nonatomic,readonly) BOOL isOffline;                                                      //@synthesize isOffline=_isOffline - In the implementation block
@property (nonatomic,copy,readonly) id<FCFeedRefreshSessionForYouConfig> forYouConfig;              //@synthesize forYouConfig=_forYouConfig - In the implementation block
@property (nonatomic,readonly) BOOL isNewEdition;                                                   //@synthesize isNewEdition=_isNewEdition - In the implementation block
+(id)currentEditionWithRefreshDate:(id)arg1 lastCompletedEdition:(id)arg2 fromPaginator:(id)arg3 ;
-(NSDate *)modificationDate;
-(NSDate *)refreshDate;
-(BOOL)reachedEnd;
-(BOOL)isNewEdition;
-(id)copyWithAllGroupEmittersExhausted;
-(NSSet *)activeGroupEmitterIDs;
-(id)initWithRefreshDate:(id)arg1 activeGroupEmitterIDs:(id)arg2 isOffline:(BOOL)arg3 forYouConfig:(id)arg4 ;
-(BOOL)isOffline;
-(id)initWithIdentifier:(id)arg1 refreshDate:(id)arg2 modificationDate:(id)arg3 lastCompletedEdition:(id)arg4 cursorsByGroupEmitterID:(id)arg5 pendingGroups:(id)arg6 activeGroupEmitterIDs:(id)arg7 reachedEnd:(BOOL)arg8 isOffline:(BOOL)arg9 forYouConfig:(id)arg10 ;
-(id)copyByRemovingPendingGroupsAtIndexes:(id)arg1 ;
-(id<FCFeedRefreshSessionForYouConfig>)forYouConfig;
-(id)description;
-(NSArray *)pendingGroups;
-(id)currentEditionFromPaginator:(id)arg1 ;
-(id)copyWithAdditionalPendingGroups:(id)arg1 cursors:(id)arg2 ;
-(unsigned long long)hash;
-(id)copyWithExhaustedGroupEmitterID:(id)arg1 cursors:(id)arg2 ;
-(NSString *)identifier;
-(id)copyWithModificationDate:(id)arg1 lastCompletedEdition:(id)arg2 cursorsByGroupEmitterID:(id)arg3 pendingGroups:(id)arg4 activeGroupEmitterIDs:(id)arg5 reachedEnd:(BOOL)arg6 isOffline:(BOOL)arg7 ;
-(id)copyByRemovingPendingGroupIdenticalTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(FCFeedEdition *)lastCompletedEdition;
-(NSDictionary *)cursorsByGroupEmitterID;
@end

