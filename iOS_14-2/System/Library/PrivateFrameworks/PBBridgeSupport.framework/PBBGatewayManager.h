/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
*/


@class NSArray, BBSettingsGateway, NSString, NSDateComponents;

@interface PBBGatewayManager : NSObject {

	BOOL _isScheduled;
	NSArray* _bbSections;
	unsigned long long _repeatedCallsEnabled;
	BBSettingsGateway* _settingsGateway;
	NSString* _allowedGroupName;
	unsigned long long _doNotDisturbPrivilegedSenderType;
	NSString* _doNotDisturbPrivilegedSenderTypeGroupIdentifier;
	NSDateComponents* _dndFromComponents;
	NSDateComponents* _dndToComponents;

}

@property (assign,nonatomic) unsigned long long repeatedCallsEnabled;                                   //@synthesize repeatedCallsEnabled=_repeatedCallsEnabled - In the implementation block
@property (nonatomic,retain) BBSettingsGateway * settingsGateway;                                       //@synthesize settingsGateway=_settingsGateway - In the implementation block
@property (nonatomic,readonly) NSString * allowedGroupName;                                             //@synthesize allowedGroupName=_allowedGroupName - In the implementation block
@property (nonatomic,readonly) unsigned long long doNotDisturbPrivilegedSenderType;                     //@synthesize doNotDisturbPrivilegedSenderType=_doNotDisturbPrivilegedSenderType - In the implementation block
@property (nonatomic,readonly) NSString * doNotDisturbPrivilegedSenderTypeGroupIdentifier;              //@synthesize doNotDisturbPrivilegedSenderTypeGroupIdentifier=_doNotDisturbPrivilegedSenderTypeGroupIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isScheduled;                                                        //@synthesize isScheduled=_isScheduled - In the implementation block
@property (nonatomic,readonly) NSDateComponents * dndFromComponents;                                    //@synthesize dndFromComponents=_dndFromComponents - In the implementation block
@property (nonatomic,readonly) NSDateComponents * dndToComponents;                                      //@synthesize dndToComponents=_dndToComponents - In the implementation block
@property (nonatomic,retain) NSArray * bbSections;                                                      //@synthesize bbSections=_bbSections - In the implementation block
+(id)sharedManager;
+(id)dateComponentsFromDNDScheduleTime:(id)arg1 ;
-(id)init;
-(BOOL)isScheduled;
-(void)setSettingsGateway:(BBSettingsGateway *)arg1 ;
-(BBSettingsGateway *)settingsGateway;
-(void)dealloc;
-(void)loadBBSections;
-(NSArray *)bbSections;
-(void)loadDNDState;
-(BOOL)repeatedCalls;
-(void)setBbSections:(NSArray *)arg1 ;
-(unsigned long long)repeatedCallsEnabled;
-(void)setRepeatedCallsEnabled:(unsigned long long)arg1 ;
-(NSString *)allowedGroupName;
-(unsigned long long)doNotDisturbPrivilegedSenderType;
-(NSString *)doNotDisturbPrivilegedSenderTypeGroupIdentifier;
-(NSDateComponents *)dndFromComponents;
-(NSDateComponents *)dndToComponents;
@end

