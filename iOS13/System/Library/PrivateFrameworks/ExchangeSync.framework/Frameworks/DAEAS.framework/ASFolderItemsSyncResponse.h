/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASItem.h>

@class NSNumber, ASCollection, NSMutableArray;

@interface ASFolderItemsSyncResponse : ASItem {

	long long _dataclass;
	NSNumber* _status;
	ASCollection* _collection;
	NSMutableArray* _meetingRequestDatas;
	NSMutableArray* _deliveryIdsToClear;
	NSMutableArray* _deliveryIdsToSoftClear;

}

@property (nonatomic,retain) ASCollection * collection;                            //@synthesize collection=_collection - In the implementation block
@property (nonatomic,retain) NSMutableArray * meetingRequestDatas;                 //@synthesize meetingRequestDatas=_meetingRequestDatas - In the implementation block
@property (nonatomic,retain) NSMutableArray * deliveryIdsToClear;                  //@synthesize deliveryIdsToClear=_deliveryIdsToClear - In the implementation block
@property (nonatomic,retain) NSMutableArray * deliveryIdsToSoftClear;              //@synthesize deliveryIdsToSoftClear=_deliveryIdsToSoftClear - In the implementation block
@property (assign,nonatomic) long long dataclass;                                  //@synthesize dataclass=_dataclass - In the implementation block
@property (nonatomic,retain) NSNumber * status;                                    //@synthesize status=_status - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)description;
-(ASCollection *)collection;
-(NSNumber *)status;
-(void)setStatus:(NSNumber *)arg1 ;
-(long long)dataclass;
-(void)setDataclass:(long long)arg1 ;
-(void)setCollections:(id)arg1 ;
-(void)setCollection:(ASCollection *)arg1 ;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(void)addMeetingRequestData:(id)arg1 ;
-(void)addDeliveryIdToClear:(id)arg1 ;
-(void)addDeliveryIdToSoftClear:(id)arg1 ;
-(NSMutableArray *)deliveryIdsToClear;
-(NSMutableArray *)deliveryIdsToSoftClear;
-(NSMutableArray *)meetingRequestDatas;
-(void)setDeliveryIdsToClear:(NSMutableArray *)arg1 ;
-(void)setDeliveryIdsToSoftClear:(NSMutableArray *)arg1 ;
-(void)setMeetingRequestDatas:(NSMutableArray *)arg1 ;
-(void)_processMeetingRequestDatasForAccount:(id)arg1 ;
-(id)initWithDataclass:(long long)arg1 ;
@end

