/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@class NSDate, NSMutableDictionary, NSString;

@interface EventDescription : NSObject {

	int _eventType;
	NSDate* _creationTimeStamp;
	unsigned long long _processId;
	char* _processName;
	char* _bundleId;
	long long _eventLen;
	void* _eventData;
	NSMutableDictionary* _eventQualifiers;
	NSString* _eventKey;

}

@property (nonatomic,readonly) int eventType;                                      //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) NSDate * creationTimeStamp;                         //@synthesize creationTimeStamp=_creationTimeStamp - In the implementation block
@property (nonatomic,readonly) unsigned long long processId;                       //@synthesize processId=_processId - In the implementation block
@property (nonatomic,readonly) char* processName;                                  //@synthesize processName=_processName - In the implementation block
@property (nonatomic,readonly) char* bundleId;                                     //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) long long eventLen;                                 //@synthesize eventLen=_eventLen - In the implementation block
@property (nonatomic,readonly) void* eventData;                                    //@synthesize eventData=_eventData - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * eventQualifiers;              //@synthesize eventQualifiers=_eventQualifiers - In the implementation block
@property (nonatomic,retain) NSString * eventKey;                                  //@synthesize eventKey=_eventKey - In the implementation block
-(void)dealloc;
-(id)description;
-(char*)processName;
-(char*)bundleId;
-(int)eventType;
-(unsigned long long)processId;
-(void)setEventKey:(NSString *)arg1 ;
-(NSString *)eventKey;
-(void*)eventData;
-(id)initWithType:(int)arg1 length:(long long)arg2 data:(void*)arg3 fromPid:(unsigned long long)arg4 named:(char*)arg5 bundleId:(const char*)arg6 ;
-(char*)originatorForLogging;
-(id)eventQualifierStringForKey:(id)arg1 ;
-(NSDate *)creationTimeStamp;
-(long long)eventLen;
-(NSMutableDictionary *)eventQualifiers;
@end

