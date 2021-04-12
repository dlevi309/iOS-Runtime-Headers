/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <NewsCore/FCOperation.h>

@protocol FCNewsAppConfiguration, FCContentContext, FCFeedPersonalizing, FCTodayPrivateData, NTTodayResultOperationInfoProviding;
@class NSDictionary, NSSet, NTCatchUpOperationForYouFetchInfo, NSArray, NSObject;

@interface NTTodayItemOperation : FCOperation {

	NSDictionary* _catchUpOperationResultsBySectionDescriptor;
	id<FCNewsAppConfiguration> _appConfiguration;
	id<FCContentContext> _contentContext;
	NSSet* _itemIDsOfLeadingCells;
	NSDictionary* _slotAllocationByDynamicSlotItemID;
	id<FCFeedPersonalizing> _feedPersonalizer;
	id<FCTodayPrivateData> _todayData;
	id<NTTodayResultOperationInfoProviding> _operationInfo;
	NTCatchUpOperationForYouFetchInfo* _forYouFetchInfo;
	/*^block*/id _todayItemCompletion;
	NSArray* _feedItems;
	NSDictionary* _resultTodayItemsBySectionDescriptor;
	NSDictionary* _resultAssetFileURLsByRemoteURL;
	NSObject* _resultRecordsHoldToken;
	NSObject* _resultAssetsHoldToken;

}

@property (nonatomic,copy) NSArray * feedItems;                                                    //@synthesize feedItems=_feedItems - In the implementation block
@property (nonatomic,retain) NSDictionary * resultTodayItemsBySectionDescriptor;                   //@synthesize resultTodayItemsBySectionDescriptor=_resultTodayItemsBySectionDescriptor - In the implementation block
@property (nonatomic,retain) NSDictionary * resultAssetFileURLsByRemoteURL;                        //@synthesize resultAssetFileURLsByRemoteURL=_resultAssetFileURLsByRemoteURL - In the implementation block
@property (nonatomic,retain) NSObject * resultRecordsHoldToken;                                    //@synthesize resultRecordsHoldToken=_resultRecordsHoldToken - In the implementation block
@property (nonatomic,retain) NSObject * resultAssetsHoldToken;                                     //@synthesize resultAssetsHoldToken=_resultAssetsHoldToken - In the implementation block
@property (nonatomic,copy) NSDictionary * catchUpOperationResultsBySectionDescriptor;              //@synthesize catchUpOperationResultsBySectionDescriptor=_catchUpOperationResultsBySectionDescriptor - In the implementation block
@property (nonatomic,copy) id<FCNewsAppConfiguration> appConfiguration;                            //@synthesize appConfiguration=_appConfiguration - In the implementation block
@property (nonatomic,retain) id<FCContentContext> contentContext;                                  //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,copy) NSSet * itemIDsOfLeadingCells;                                          //@synthesize itemIDsOfLeadingCells=_itemIDsOfLeadingCells - In the implementation block
@property (nonatomic,copy) NSDictionary * slotAllocationByDynamicSlotItemID;                       //@synthesize slotAllocationByDynamicSlotItemID=_slotAllocationByDynamicSlotItemID - In the implementation block
@property (nonatomic,retain) id<FCFeedPersonalizing> feedPersonalizer;                             //@synthesize feedPersonalizer=_feedPersonalizer - In the implementation block
@property (nonatomic,retain) id<FCTodayPrivateData> todayData;                                     //@synthesize todayData=_todayData - In the implementation block
@property (nonatomic,copy) id<NTTodayResultOperationInfoProviding> operationInfo;                  //@synthesize operationInfo=_operationInfo - In the implementation block
@property (nonatomic,copy) NTCatchUpOperationForYouFetchInfo * forYouFetchInfo;                    //@synthesize forYouFetchInfo=_forYouFetchInfo - In the implementation block
@property (nonatomic,copy) id todayItemCompletion;                                                 //@synthesize todayItemCompletion=_todayItemCompletion - In the implementation block
-(id)init;
-(id<NTTodayResultOperationInfoProviding>)operationInfo;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(id<FCNewsAppConfiguration>)appConfiguration;
-(id<FCFeedPersonalizing>)feedPersonalizer;
-(void)setFeedItems:(NSArray *)arg1 ;
-(void)setFeedPersonalizer:(id<FCFeedPersonalizing>)arg1 ;
-(void)setContentContext:(id<FCContentContext>)arg1 ;
-(id<FCContentContext>)contentContext;
-(NSArray *)feedItems;
-(void)setOperationInfo:(id<NTTodayResultOperationInfoProviding>)arg1 ;
-(NSDictionary *)catchUpOperationResultsBySectionDescriptor;
-(NSSet *)itemIDsOfLeadingCells;
-(NSDictionary *)slotAllocationByDynamicSlotItemID;
-(id)_extractFeedItemsFromInputs;
-(NTCatchUpOperationForYouFetchInfo *)forYouFetchInfo;
-(id)todayItemCompletion;
-(id<FCTodayPrivateData>)todayData;
-(void)setResultTodayItemsBySectionDescriptor:(NSDictionary *)arg1 ;
-(void)setResultAssetFileURLsByRemoteURL:(NSDictionary *)arg1 ;
-(void)setResultRecordsHoldToken:(NSObject *)arg1 ;
-(void)setResultAssetsHoldToken:(NSObject *)arg1 ;
-(void)_fetchProtoitemsWithCompletion:(/*^block*/id)arg1 ;
-(NSDictionary *)resultTodayItemsBySectionDescriptor;
-(NSDictionary *)resultAssetFileURLsByRemoteURL;
-(NSObject *)resultRecordsHoldToken;
-(NSObject *)resultAssetsHoldToken;
-(void)setCatchUpOperationResultsBySectionDescriptor:(NSDictionary *)arg1 ;
-(void)setAppConfiguration:(id<FCNewsAppConfiguration>)arg1 ;
-(void)setItemIDsOfLeadingCells:(NSSet *)arg1 ;
-(void)setSlotAllocationByDynamicSlotItemID:(NSDictionary *)arg1 ;
-(void)setTodayData:(id<FCTodayPrivateData>)arg1 ;
-(void)setForYouFetchInfo:(NTCatchUpOperationForYouFetchInfo *)arg1 ;
-(void)setTodayItemCompletion:(id)arg1 ;
@end

