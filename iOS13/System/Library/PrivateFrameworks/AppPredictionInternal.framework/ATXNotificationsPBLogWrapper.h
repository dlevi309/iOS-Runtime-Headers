/*
* Generated on Monday, March 1, 2021 at 2:33:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ATXNotificationsPBGradedRecord, ATXNotificationsPBPeriodicLog, ATXNotificationsPBRecord, ATXNotificationsPBResponse, ATXNotificationsPBSettingLog;

@interface ATXNotificationsPBLogWrapper : PBCodable <NSCopying> {

	ATXNotificationsPBGradedRecord* _grecord;
	ATXNotificationsPBPeriodicLog* _periodiclog;
	ATXNotificationsPBRecord* _record;
	ATXNotificationsPBResponse* _response;
	ATXNotificationsPBSettingLog* _settinglog;

}

@property (nonatomic,readonly) BOOL hasRecord; 
@property (nonatomic,retain) ATXNotificationsPBRecord * record;                        //@synthesize record=_record - In the implementation block
@property (nonatomic,readonly) BOOL hasResponse; 
@property (nonatomic,retain) ATXNotificationsPBResponse * response;                    //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) BOOL hasGrecord; 
@property (nonatomic,retain) ATXNotificationsPBGradedRecord * grecord;                 //@synthesize grecord=_grecord - In the implementation block
@property (nonatomic,readonly) BOOL hasPeriodiclog; 
@property (nonatomic,retain) ATXNotificationsPBPeriodicLog * periodiclog;              //@synthesize periodiclog=_periodiclog - In the implementation block
@property (nonatomic,readonly) BOOL hasSettinglog; 
@property (nonatomic,retain) ATXNotificationsPBSettingLog * settinglog;                //@synthesize settinglog=_settinglog - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(ATXNotificationsPBResponse *)response;
-(void)setResponse:(ATXNotificationsPBResponse *)arg1 ;
-(ATXNotificationsPBRecord *)record;
-(void)setRecord:(ATXNotificationsPBRecord *)arg1 ;
-(BOOL)hasResponse;
-(BOOL)hasRecord;
-(BOOL)hasGrecord;
-(BOOL)hasPeriodiclog;
-(BOOL)hasSettinglog;
-(ATXNotificationsPBGradedRecord *)grecord;
-(void)setGrecord:(ATXNotificationsPBGradedRecord *)arg1 ;
-(ATXNotificationsPBPeriodicLog *)periodiclog;
-(void)setPeriodiclog:(ATXNotificationsPBPeriodicLog *)arg1 ;
-(ATXNotificationsPBSettingLog *)settinglog;
-(void)setSettinglog:(ATXNotificationsPBSettingLog *)arg1 ;
@end

