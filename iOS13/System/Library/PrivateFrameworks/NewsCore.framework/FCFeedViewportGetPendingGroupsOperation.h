/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@class FCFeedRefreshSession, NSArray, FCFeedGroupEmittingContext, NSDictionary;

@interface FCFeedViewportGetPendingGroupsOperation : FCOperation {

	BOOL _lightweightOnly;
	FCFeedRefreshSession* _refreshSession;
	NSArray* _feedGroupEmitters;
	FCFeedGroupEmittingContext* _groupEmittingContext;
	NSDictionary* _toCursorsByEmitterID;
	/*^block*/id _emitGroupsCompletionHandler;
	FCFeedRefreshSession* _resultRefreshSession;

}

@property (nonatomic,retain) FCFeedRefreshSession * resultRefreshSession;                    //@synthesize resultRefreshSession=_resultRefreshSession - In the implementation block
@property (nonatomic,retain) FCFeedRefreshSession * refreshSession;                          //@synthesize refreshSession=_refreshSession - In the implementation block
@property (nonatomic,retain) NSArray * feedGroupEmitters;                                    //@synthesize feedGroupEmitters=_feedGroupEmitters - In the implementation block
@property (nonatomic,retain) FCFeedGroupEmittingContext * groupEmittingContext;              //@synthesize groupEmittingContext=_groupEmittingContext - In the implementation block
@property (nonatomic,retain) NSDictionary * toCursorsByEmitterID;                            //@synthesize toCursorsByEmitterID=_toCursorsByEmitterID - In the implementation block
@property (assign) BOOL lightweightOnly;                                                     //@synthesize lightweightOnly=_lightweightOnly - In the implementation block
@property (nonatomic,copy) id emitGroupsCompletionHandler;                                   //@synthesize emitGroupsCompletionHandler=_emitGroupsCompletionHandler - In the implementation block
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(FCFeedRefreshSession *)refreshSession;
-(NSArray *)feedGroupEmitters;
-(FCFeedGroupEmittingContext *)groupEmittingContext;
-(void)setRefreshSession:(FCFeedRefreshSession *)arg1 ;
-(void)setFeedGroupEmitters:(NSArray *)arg1 ;
-(void)setGroupEmittingContext:(FCFeedGroupEmittingContext *)arg1 ;
-(void)setToCursorsByEmitterID:(NSDictionary *)arg1 ;
-(NSDictionary *)toCursorsByEmitterID;
-(BOOL)lightweightOnly;
-(void)setLightweightOnly:(BOOL)arg1 ;
-(void)setEmitGroupsCompletionHandler:(id)arg1 ;
-(id)_advanceRefreshSessionToNextInterestedEmitter:(id)arg1 ;
-(void)setResultRefreshSession:(FCFeedRefreshSession *)arg1 ;
-(BOOL)_isErrorTransient:(id)arg1 ;
-(id)_exhaustGroupEmitter:(id)arg1 inRefreshSession:(id)arg2 ;
-(id)emitGroupsCompletionHandler;
-(FCFeedRefreshSession *)resultRefreshSession;
@end

