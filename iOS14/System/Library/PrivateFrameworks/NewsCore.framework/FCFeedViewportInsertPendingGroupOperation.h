/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCCoreConfiguration;
@class FCFeedRefreshSession, NSArray, FCFeedGroup, NSSet, FCCloudContext, FCFeedDescriptor, FCFeedGroupEmittingContext;

@interface FCFeedViewportInsertPendingGroupOperation : FCOperation {

	FCFeedRefreshSession* _resultRefreshSession;
	NSArray* _resultUpdatedRefreshSessions;
	FCFeedGroup* _resultInsertedGroup;
	NSSet* _resultDeletedElementIDs;
	id<FCCoreConfiguration> _configuration;
	FCCloudContext* _context;
	FCFeedDescriptor* _feedDescriptor;
	FCFeedRefreshSession* _refreshSession;
	NSArray* _feedGroupEmitters;
	FCFeedGroupEmittingContext* _groupEmittingContext;
	NSArray* _internalElements;
	/*^block*/id _insertGroupCompletionHandler;

}

@property (nonatomic,copy) id<FCCoreConfiguration> configuration;                            //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) FCCloudContext * context;                                       //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) FCFeedDescriptor * feedDescriptor;                              //@synthesize feedDescriptor=_feedDescriptor - In the implementation block
@property (nonatomic,retain) FCFeedRefreshSession * refreshSession;                          //@synthesize refreshSession=_refreshSession - In the implementation block
@property (nonatomic,retain) NSArray * feedGroupEmitters;                                    //@synthesize feedGroupEmitters=_feedGroupEmitters - In the implementation block
@property (nonatomic,retain) FCFeedGroupEmittingContext * groupEmittingContext;              //@synthesize groupEmittingContext=_groupEmittingContext - In the implementation block
@property (nonatomic,retain) NSArray * internalElements;                                     //@synthesize internalElements=_internalElements - In the implementation block
@property (nonatomic,copy) id insertGroupCompletionHandler;                                  //@synthesize insertGroupCompletionHandler=_insertGroupCompletionHandler - In the implementation block
-(FCFeedDescriptor *)feedDescriptor;
-(void)setRefreshSession:(FCFeedRefreshSession *)arg1 ;
-(BOOL)validateOperation;
-(void)setFeedDescriptor:(FCFeedDescriptor *)arg1 ;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(void)_finishWithInsertedGroup:(id)arg1 backedByPendingGroup:(id)arg2 forEmitter:(id)arg3 ;
-(NSArray *)feedGroupEmitters;
-(FCCloudContext *)context;
-(void)setInternalElements:(NSArray *)arg1 ;
-(NSArray *)internalElements;
-(FCFeedGroupEmittingContext *)groupEmittingContext;
-(void)setInsertGroupCompletionHandler:(id)arg1 ;
-(id<FCCoreConfiguration>)configuration;
-(FCFeedRefreshSession *)refreshSession;
-(void)setGroupEmittingContext:(FCFeedGroupEmittingContext *)arg1 ;
-(id)_nextGroupToInsert:(id*)arg1 ;
-(void)setFeedGroupEmitters:(NSArray *)arg1 ;
-(id)insertGroupCompletionHandler;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
-(void)setContext:(FCCloudContext *)arg1 ;
@end

