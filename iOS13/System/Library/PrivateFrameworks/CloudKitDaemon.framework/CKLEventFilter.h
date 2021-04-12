/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class NSString, NSDictionary;

@interface CKLEventFilter : NSObject {

	BOOL _simulatorMessagesOnly;
	unsigned long long _logTypes;
	NSString* _processName;
	NSDictionary* _categoriesBySubsystem;

}

@property (assign,nonatomic) unsigned long long logTypes;                       //@synthesize logTypes=_logTypes - In the implementation block
@property (nonatomic,retain) NSDictionary * categoriesBySubsystem;              //@synthesize categoriesBySubsystem=_categoriesBySubsystem - In the implementation block
@property (nonatomic,retain) NSString * processName;                            //@synthesize processName=_processName - In the implementation block
@property (assign,nonatomic) BOOL simulatorMessagesOnly;                        //@synthesize simulatorMessagesOnly=_simulatorMessagesOnly - In the implementation block
-(NSString *)processName;
-(void)setProcessName:(NSString *)arg1 ;
-(id)initWithLogTypes:(unsigned long long)arg1 ;
-(void)setSimulatorMessagesOnly:(BOOL)arg1 ;
-(BOOL)simulatorMessagesOnly;
-(BOOL)matchesEvent:(id)arg1 ;
-(unsigned long long)logTypes;
-(BOOL)hasLogType:(unsigned long long)arg1 ;
-(BOOL)hasOnlyLogType:(unsigned long long)arg1 ;
-(void)_initFilterDict;
-(void)setLogTypes:(unsigned long long)arg1 ;
-(NSDictionary *)categoriesBySubsystem;
-(void)setCategoriesBySubsystem:(NSDictionary *)arg1 ;
@end

