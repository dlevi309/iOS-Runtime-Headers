/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@class NSDate, NSMutableDictionary, NSString;

@interface EventDescription : NSObject {

	BOOL _verifiedDelegateSymptom;
	int _eventType;
	NSDate* _creationTimeStamp;
	unsigned long long _processId;
	char* _processName;
	char* _bundleId;
	long long _eventLen;
	void* _eventData;
	NSMutableDictionary* _eventQualifiers;
	NSString* _eventKey;
	SCD_Struct_Ev10 _auditToken;

}

@property (nonatomic,readonly) int eventType;                                      //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) NSDate * creationTimeStamp;                         //@synthesize creationTimeStamp=_creationTimeStamp - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Ev10 auditToken;                         //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,readonly) unsigned long long processId;                       //@synthesize processId=_processId - In the implementation block
@property (nonatomic,readonly) char* processName;                                  //@synthesize processName=_processName - In the implementation block
@property (nonatomic,readonly) char* bundleId;                                     //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) BOOL verifiedDelegateSymptom;                       //@synthesize verifiedDelegateSymptom=_verifiedDelegateSymptom - In the implementation block
@property (nonatomic,readonly) long long eventLen;                                 //@synthesize eventLen=_eventLen - In the implementation block
@property (nonatomic,readonly) void* eventData;                                    //@synthesize eventData=_eventData - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * eventQualifiers;              //@synthesize eventQualifiers=_eventQualifiers - In the implementation block
@property (nonatomic,retain) NSString * eventKey;                                  //@synthesize eventKey=_eventKey - In the implementation block
-(int)eventType;
-(NSDate *)creationTimeStamp;
-(char*)processName;
-(char*)bundleId;
-(unsigned long long)processId;
-(SCD_Struct_Ev10)auditToken;
-(NSMutableDictionary *)eventQualifiers;
-(id)eventQualifierStringForKey:(id)arg1 ;
-(id)description;
-(void*)eventData;
-(char*)originatorForLogging;
-(long long)eventLen;
-(BOOL)verifiedDelegateSymptom;
-(id)initWithType:(int)arg1 length:(long long)arg2 data:(void*)arg3 fromPid:(unsigned long long)arg4 named:(char*)arg5 bundleId:(const char*)arg6 ;
-(NSString *)eventKey;
-(id)initWithType:(int)arg1 length:(long long)arg2 data:(void*)arg3 fromAuditToken:(SCD_Struct_Ev10)arg4 fromPid:(unsigned long long)arg5 named:(char*)arg6 bundleId:(const char*)arg7 verifiedDelegateSymptom:(BOOL)arg8 ;
-(void)setEventKey:(NSString *)arg1 ;
-(void)dealloc;
@end

