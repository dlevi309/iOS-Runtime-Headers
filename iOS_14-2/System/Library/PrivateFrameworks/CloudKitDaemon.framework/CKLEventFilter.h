/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class NSString, NSDictionary;

@interface CKLEventFilter : NSObject {

	BOOL _simulatorMessagesOnly;
	BOOL _onlyTestLogs;
	unsigned long long _logTypes;
	NSString* _processName;
	NSDictionary* _categoriesBySubsystem;

}

@property (assign,nonatomic) unsigned long long logTypes;                       //@synthesize logTypes=_logTypes - In the implementation block
@property (nonatomic,retain) NSDictionary * categoriesBySubsystem;              //@synthesize categoriesBySubsystem=_categoriesBySubsystem - In the implementation block
@property (nonatomic,retain) NSString * processName;                            //@synthesize processName=_processName - In the implementation block
@property (assign,nonatomic) BOOL simulatorMessagesOnly;                        //@synthesize simulatorMessagesOnly=_simulatorMessagesOnly - In the implementation block
@property (assign,nonatomic) BOOL onlyTestLogs;                                 //@synthesize onlyTestLogs=_onlyTestLogs - In the implementation block
-(void)setProcessName:(NSString *)arg1 ;
-(BOOL)matchesEvent:(id)arg1 ;
-(NSString *)processName;
-(id)initWithLogTypes:(unsigned long long)arg1 ;
-(void)setSimulatorMessagesOnly:(BOOL)arg1 ;
-(BOOL)simulatorMessagesOnly;
-(void)setOnlyTestLogs:(BOOL)arg1 ;
-(BOOL)onlyTestLogs;
-(unsigned long long)logTypes;
-(BOOL)hasLogType:(unsigned long long)arg1 ;
-(BOOL)hasOnlyLogType:(unsigned long long)arg1 ;
-(void)_initFilterDict;
-(void)setLogTypes:(unsigned long long)arg1 ;
-(NSDictionary *)categoriesBySubsystem;
-(void)setCategoriesBySubsystem:(NSDictionary *)arg1 ;
@end

