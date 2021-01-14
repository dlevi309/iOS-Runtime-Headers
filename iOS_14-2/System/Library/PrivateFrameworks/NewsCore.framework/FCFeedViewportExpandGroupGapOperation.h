/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCCoreConfiguration;
@class FCCloudContext, FCFeedViewport, FCFeedDescriptor, FCFeedViewportGap, NSArray, FCDateRange, NSDictionary, NSMutableDictionary, FCFeedGroup, NSError;

@interface FCFeedViewportExpandGroupGapOperation : FCOperation {

	BOOL _lightweightOnly;
	id<FCCoreConfiguration> _configuration;
	FCCloudContext* _context;
	FCFeedViewport* _viewport;
	FCFeedDescriptor* _feedDescriptor;
	FCFeedViewportGap* _gap;
	unsigned long long _desiredHeadlineCount;
	long long _gapExpansionPolicy;
	/*^block*/id _expandGapCompletionHandler;
	NSArray* _feedGroupEmitters;
	FCDateRange* _refreshDateRange;
	NSDictionary* _toCursorsByEmitterID;
	NSMutableDictionary* _forYouCatchUpOperationsByEdition;
	NSArray* _resultInternalElements;
	FCFeedGroup* _resultInsertedGroup;
	NSError* _resultError;

}

@property (nonatomic,retain) NSArray * feedGroupEmitters;                                         //@synthesize feedGroupEmitters=_feedGroupEmitters - In the implementation block
@property (nonatomic,retain) FCDateRange * refreshDateRange;                                      //@synthesize refreshDateRange=_refreshDateRange - In the implementation block
@property (nonatomic,retain) NSDictionary * toCursorsByEmitterID;                                 //@synthesize toCursorsByEmitterID=_toCursorsByEmitterID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * forYouCatchUpOperationsByEdition;              //@synthesize forYouCatchUpOperationsByEdition=_forYouCatchUpOperationsByEdition - In the implementation block
@property (nonatomic,retain) NSArray * resultInternalElements;                                    //@synthesize resultInternalElements=_resultInternalElements - In the implementation block
@property (nonatomic,retain) FCFeedGroup * resultInsertedGroup;                                   //@synthesize resultInsertedGroup=_resultInsertedGroup - In the implementation block
@property (nonatomic,retain) NSError * resultError;                                               //@synthesize resultError=_resultError - In the implementation block
@property (nonatomic,copy) id<FCCoreConfiguration> configuration;                                 //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) FCCloudContext * context;                                            //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) FCFeedViewport * viewport;                                           //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,retain) FCFeedDescriptor * feedDescriptor;                                   //@synthesize feedDescriptor=_feedDescriptor - In the implementation block
@property (nonatomic,copy) FCFeedViewportGap * gap;                                               //@synthesize gap=_gap - In the implementation block
@property (assign,nonatomic) unsigned long long desiredHeadlineCount;                             //@synthesize desiredHeadlineCount=_desiredHeadlineCount - In the implementation block
@property (assign,nonatomic) long long gapExpansionPolicy;                                        //@synthesize gapExpansionPolicy=_gapExpansionPolicy - In the implementation block
@property (assign) BOOL lightweightOnly;                                                          //@synthesize lightweightOnly=_lightweightOnly - In the implementation block
@property (nonatomic,copy) id expandGapCompletionHandler;                                         //@synthesize expandGapCompletionHandler=_expandGapCompletionHandler - In the implementation block
-(FCFeedViewportGap *)gap;
-(FCFeedDescriptor *)feedDescriptor;
-(BOOL)validateOperation;
-(void)setGapExpansionPolicy:(long long)arg1 ;
-(void)setFeedDescriptor:(FCFeedDescriptor *)arg1 ;
-(FCFeedViewport *)viewport;
-(void)setViewport:(FCFeedViewport *)arg1 ;
-(void)setExpandGapCompletionHandler:(id)arg1 ;
-(void)setForYouCatchUpOperationsByEdition:(NSMutableDictionary *)arg1 ;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setGap:(FCFeedViewportGap *)arg1 ;
-(long long)gapExpansionPolicy;
-(void)performOperation;
-(void)prepareOperation;
-(void)setLightweightOnly:(BOOL)arg1 ;
-(void)setResultError:(NSError *)arg1 ;
-(NSDictionary *)toCursorsByEmitterID;
-(NSArray *)feedGroupEmitters;
-(id)_groupsFromRefreshSessionContainingGap:(id)arg1 internalElements:(id)arg2 ;
-(void)setToCursorsByEmitterID:(NSDictionary *)arg1 ;
-(NSArray *)resultInternalElements;
-(FCCloudContext *)context;
-(void)setResultInsertedGroup:(FCFeedGroup *)arg1 ;
-(NSMutableDictionary *)forYouCatchUpOperationsByEdition;
-(id<FCCoreConfiguration>)configuration;
-(void)setDesiredHeadlineCount:(unsigned long long)arg1 ;
-(void)setRefreshDateRange:(FCDateRange *)arg1 ;
-(BOOL)lightweightOnly;
-(void)setFeedGroupEmitters:(NSArray *)arg1 ;
-(id)_associatedForYouCatchUpOperationForEdition:(id)arg1 ;
-(NSError *)resultError;
-(unsigned long long)desiredHeadlineCount;
-(FCFeedGroup *)resultInsertedGroup;
-(FCDateRange *)refreshDateRange;
-(id)expandGapCompletionHandler;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
-(void)setResultInternalElements:(NSArray *)arg1 ;
-(void)setContext:(FCCloudContext *)arg1 ;
@end

