/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSDate, NSString, NSDictionary, TIRollingLog, NSMutableSet, TIKeyboardState;

@interface TITypologyLog : NSObject <NSCopying> {

	NSUUID* _uuid;
	NSDate* _date;
	NSString* _systemVersion;
	NSString* _buildVersion;
	NSString* _clientIdentifier;
	NSDictionary* _config;
	NSUUID* _lastRecordUUID;
	TIRollingLog* _records;
	TIRollingLog* _traceLog;
	NSMutableSet* _loggedRecordClasses;
	TIKeyboardState* _lastKeyboardState;

}

@property (nonatomic,copy) NSString * clientIdentifier;                        //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy) NSUUID * lastRecordUUID;                            //@synthesize lastRecordUUID=_lastRecordUUID - In the implementation block
@property (nonatomic,readonly) TIRollingLog * records;                         //@synthesize records=_records - In the implementation block
@property (nonatomic,readonly) TIRollingLog * traceLog;                        //@synthesize traceLog=_traceLog - In the implementation block
@property (nonatomic,retain) NSMutableSet * loggedRecordClasses;               //@synthesize loggedRecordClasses=_loggedRecordClasses - In the implementation block
@property (nonatomic,retain) TIKeyboardState * lastKeyboardState;              //@synthesize lastKeyboardState=_lastKeyboardState - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                  //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSDate * date;                                  //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSString * systemVersion;                       //@synthesize systemVersion=_systemVersion - In the implementation block
@property (nonatomic,readonly) NSString * buildVersion;                        //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,retain) NSDictionary * config;                            //@synthesize config=_config - In the implementation block
-(NSDictionary *)config;
-(NSString *)systemVersion;
-(id)initWithPropertyList:(id)arg1 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSUUID *)uuid;
-(id)init;
-(TIRollingLog *)records;
-(id)timestamp;
-(id)filename;
-(TIRollingLog *)traceLog;
-(id)initWithTypologyLog:(id)arg1 ;
-(id)recordSummary;
-(void)enumerateRecordsWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateHumanReadableTraceEntriesWithBlock:(/*^block*/id)arg1 ;
-(NSMutableSet *)loggedRecordClasses;
-(BOOL)loggedRecordOfClass:(Class)arg1 ;
-(NSUUID *)lastRecordUUID;
-(void)setLastRecordUUID:(NSUUID *)arg1 ;
-(void)setLoggedRecordClasses:(NSMutableSet *)arg1 ;
-(TIKeyboardState *)lastKeyboardState;
-(void)setLastKeyboardState:(TIKeyboardState *)arg1 ;
-(id)textSummary;
-(NSString *)buildVersion;
-(void)setConfig:(NSDictionary *)arg1 ;
-(NSDate *)date;
-(void)logRecord:(id)arg1 ;
-(NSString *)clientIdentifier;
-(id)propertyList;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)logToHumanReadableTrace:(id)arg1 ;
@end

