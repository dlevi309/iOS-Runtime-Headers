/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSNumber, EDAMClientSyncRateConfig;

@interface EDAMSyncState : FATObject {

	NSNumber* _currentTime;
	NSNumber* _fullSyncBefore;
	NSNumber* _updateCount;
	NSNumber* _uploaded;
	NSNumber* _userLastUpdated;
	NSNumber* _userMaxMessageEventId;
	NSNumber* _businessSummaryUpdated;
	NSNumber* _communicationEngineUpdateId;
	NSNumber* _currentDevicesUsed;
	NSNumber* _showChoiceScreen;
	EDAMClientSyncRateConfig* _clientSyncRateConfig;

}

@property (nonatomic,retain) NSNumber * currentTime;                                       //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,retain) NSNumber * fullSyncBefore;                                    //@synthesize fullSyncBefore=_fullSyncBefore - In the implementation block
@property (nonatomic,retain) NSNumber * updateCount;                                       //@synthesize updateCount=_updateCount - In the implementation block
@property (nonatomic,retain) NSNumber * uploaded;                                          //@synthesize uploaded=_uploaded - In the implementation block
@property (nonatomic,retain) NSNumber * userLastUpdated;                                   //@synthesize userLastUpdated=_userLastUpdated - In the implementation block
@property (nonatomic,retain) NSNumber * userMaxMessageEventId;                             //@synthesize userMaxMessageEventId=_userMaxMessageEventId - In the implementation block
@property (nonatomic,retain) NSNumber * businessSummaryUpdated;                            //@synthesize businessSummaryUpdated=_businessSummaryUpdated - In the implementation block
@property (nonatomic,retain) NSNumber * communicationEngineUpdateId;                       //@synthesize communicationEngineUpdateId=_communicationEngineUpdateId - In the implementation block
@property (nonatomic,retain) NSNumber * currentDevicesUsed;                                //@synthesize currentDevicesUsed=_currentDevicesUsed - In the implementation block
@property (nonatomic,retain) NSNumber * showChoiceScreen;                                  //@synthesize showChoiceScreen=_showChoiceScreen - In the implementation block
@property (nonatomic,retain) EDAMClientSyncRateConfig * clientSyncRateConfig;              //@synthesize clientSyncRateConfig=_clientSyncRateConfig - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)currentTime;
-(NSNumber *)uploaded;
-(void)setUploaded:(NSNumber *)arg1 ;
-(NSNumber *)updateCount;
-(void)setUpdateCount:(NSNumber *)arg1 ;
-(void)setCurrentTime:(NSNumber *)arg1 ;
-(NSNumber *)fullSyncBefore;
-(void)setFullSyncBefore:(NSNumber *)arg1 ;
-(NSNumber *)userLastUpdated;
-(void)setUserLastUpdated:(NSNumber *)arg1 ;
-(NSNumber *)userMaxMessageEventId;
-(void)setUserMaxMessageEventId:(NSNumber *)arg1 ;
-(NSNumber *)businessSummaryUpdated;
-(void)setBusinessSummaryUpdated:(NSNumber *)arg1 ;
-(NSNumber *)communicationEngineUpdateId;
-(void)setCommunicationEngineUpdateId:(NSNumber *)arg1 ;
-(NSNumber *)currentDevicesUsed;
-(void)setCurrentDevicesUsed:(NSNumber *)arg1 ;
-(NSNumber *)showChoiceScreen;
-(void)setShowChoiceScreen:(NSNumber *)arg1 ;
-(EDAMClientSyncRateConfig *)clientSyncRateConfig;
-(void)setClientSyncRateConfig:(EDAMClientSyncRateConfig *)arg1 ;
@end

