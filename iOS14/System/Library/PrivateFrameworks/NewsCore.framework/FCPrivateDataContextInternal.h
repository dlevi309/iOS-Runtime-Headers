/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCPrivateDataContextInternal.h>
@class FCCKPrivateDatabase, FCCKRecordZone;


@protocol FCPrivateDataContextInternal <NSObject>
@property (nonatomic,readonly) FCCKPrivateDatabase * privateDatabase; 
@property (nonatomic,readonly) id<FCAppActivityMonitor> appActivityMonitor; 
@property (nonatomic,readonly) FCCKRecordZone * issueReadingHistoryRecordZone; 
@property (nonatomic,readonly) FCCKRecordZone * readingListRecordZone; 
@property (nonatomic,readonly) FCCKRecordZone * subscriptionsRecordZone; 
@property (nonatomic,readonly) FCCKRecordZone * sensitiveSubscriptionsRecordZone; 
@property (nonatomic,readonly) FCCKRecordZone * readingHistoryRecordZone; 
@property (nonatomic,readonly) FCCKRecordZone * channelMembershipsRecordZone; 
@property (nonatomic,readonly) FCCKRecordZone * userInfoRecordZone; 
@required
-(FCCKRecordZone *)subscriptionsRecordZone;
-(id)recordZoneWithName:(id)arg1;
-(FCCKRecordZone *)userInfoRecordZone;
-(FCCKRecordZone *)sensitiveSubscriptionsRecordZone;
-(void)prepareRecordZonesForUseWithCompletionHandler:(/*^block*/id)arg1;
-(FCCKPrivateDatabase *)privateDatabase;
-(id<FCAppActivityMonitor>)appActivityMonitor;
-(FCCKRecordZone *)readingListRecordZone;
-(FCCKRecordZone *)issueReadingHistoryRecordZone;
-(FCCKRecordZone *)channelMembershipsRecordZone;
-(FCCKRecordZone *)readingHistoryRecordZone;

@end


@protocol FCAppActivityMonitor;
@class FCCKPrivateDatabase, FCCKRecordZone, FCCKRecordZoneManager, NSString;

@interface FCPrivateDataContextInternal : NSObject <FCPrivateDataContextInternal> {

	FCCKPrivateDatabase* _privateDatabase;
	id<FCAppActivityMonitor> _appActivityMonitor;
	FCCKRecordZoneManager* _recordZoneManager;

}

@property (nonatomic,retain) FCCKPrivateDatabase * privateDatabase;                            //@synthesize privateDatabase=_privateDatabase - In the implementation block
@property (nonatomic,retain) id<FCAppActivityMonitor> appActivityMonitor;                      //@synthesize appActivityMonitor=_appActivityMonitor - In the implementation block
@property (nonatomic,retain) FCCKRecordZoneManager * recordZoneManager;                        //@synthesize recordZoneManager=_recordZoneManager - In the implementation block
@property (nonatomic,readonly) FCCKRecordZone * issueReadingHistoryRecordZone; 
@property (nonatomic,readonly) FCCKRecordZone * readingListRecordZone; 
@property (nonatomic,readonly) FCCKRecordZone * subscriptionsRecordZone; 
@property (nonatomic,readonly) FCCKRecordZone * sensitiveSubscriptionsRecordZone; 
@property (nonatomic,readonly) FCCKRecordZone * readingHistoryRecordZone; 
@property (nonatomic,readonly) FCCKRecordZone * channelMembershipsRecordZone; 
@property (nonatomic,readonly) FCCKRecordZone * userInfoRecordZone; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRecordZoneManager:(FCCKRecordZoneManager *)arg1 ;
-(FCCKRecordZone *)subscriptionsRecordZone;
-(id)recordZoneWithName:(id)arg1 ;
-(FCCKRecordZone *)userInfoRecordZone;
-(id)init;
-(FCCKRecordZone *)sensitiveSubscriptionsRecordZone;
-(void)setAppActivityMonitor:(id<FCAppActivityMonitor>)arg1 ;
-(void)prepareRecordZonesForUseWithCompletionHandler:(/*^block*/id)arg1 ;
-(FCCKPrivateDatabase *)privateDatabase;
-(id<FCAppActivityMonitor>)appActivityMonitor;
-(FCCKRecordZone *)readingListRecordZone;
-(void)setPrivateDatabase:(FCCKPrivateDatabase *)arg1 ;
-(FCCKRecordZone *)issueReadingHistoryRecordZone;
-(FCCKRecordZone *)channelMembershipsRecordZone;
-(FCCKRecordZoneManager *)recordZoneManager;
-(FCCKRecordZone *)readingHistoryRecordZone;
@end

