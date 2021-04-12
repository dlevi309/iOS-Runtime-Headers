/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSString, NSUUID, HDProfile, NSDate;

@interface HDCloudSyncEvent : NSObject {

	BOOL _cloudKitManateeEnabled;
	BOOL _internalSettingManateeEnabled;
	unsigned _pcsReportManateeStatus;
	long long _operation;
	long long _reason;
	unsigned long long _options;
	NSString* _syncCirclePrefix;
	NSString* _containerIdentifier;
	NSUUID* _syncID;
	NSUUID* _operationID;
	NSString* _cloudKitIdentifer;
	HDProfile* _profile;
	NSDate* _eventTime;

}

@property (nonatomic,__weak,readonly) HDProfile * profile;                       //@synthesize profile=_profile - In the implementation block
@property (nonatomic,copy,readonly) NSDate * eventTime;                          //@synthesize eventTime=_eventTime - In the implementation block
@property (nonatomic,readonly) long long operation;                              //@synthesize operation=_operation - In the implementation block
@property (nonatomic,readonly) long long reason;                                 //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                       //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSString * syncCirclePrefix;                 //@synthesize syncCirclePrefix=_syncCirclePrefix - In the implementation block
@property (nonatomic,copy,readonly) NSString * containerIdentifier;              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * syncID;                             //@synthesize syncID=_syncID - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * operationID;                        //@synthesize operationID=_operationID - In the implementation block
@property (nonatomic,copy,readonly) NSString * cloudKitIdentifer;                //@synthesize cloudKitIdentifer=_cloudKitIdentifer - In the implementation block
@property (nonatomic,readonly) BOOL cloudKitManateeEnabled;                      //@synthesize cloudKitManateeEnabled=_cloudKitManateeEnabled - In the implementation block
@property (nonatomic,readonly) BOOL internalSettingManateeEnabled;               //@synthesize internalSettingManateeEnabled=_internalSettingManateeEnabled - In the implementation block
@property (nonatomic,readonly) unsigned pcsReportManateeStatus;                  //@synthesize pcsReportManateeStatus=_pcsReportManateeStatus - In the implementation block
-(id)description;
-(unsigned long long)options;
-(long long)reason;
-(long long)operation;
-(NSString *)containerIdentifier;
-(HDProfile *)profile;
-(NSUUID *)operationID;
-(NSDate *)eventTime;
-(NSUUID *)syncID;
-(NSString *)syncCirclePrefix;
-(NSString *)cloudKitIdentifer;
-(BOOL)cloudKitManateeEnabled;
-(BOOL)internalSettingManateeEnabled;
-(unsigned)pcsReportManateeStatus;
-(id)initWithProfile:(id)arg1 operation:(long long)arg2 reason:(long long)arg3 options:(unsigned long long)arg4 syncCirclePrefix:(id)arg5 containerID:(id)arg6 cloudKitIdentifier:(id)arg7 syncID:(id)arg8 operationID:(id)arg9 cloudKitManateeEnabled:(BOOL)arg10 internalSettingManateeEnabled:(BOOL)arg11 ;
-(id)codableEventForAWDSubmission;
@end

