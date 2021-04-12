/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/


@class NSString;

@interface CalLogEnvelope : NSObject {

	NSString* _logName;
	int _level;
	NSString* _message;
	int _processID;
	NSString* _processName;
	unsigned _machPort;
	double _timestamp;
	NSString* _function;

}

@property (nonatomic,retain) NSString * logName;                  //@synthesize logName=_logName - In the implementation block
@property (assign,nonatomic) int level;                           //@synthesize level=_level - In the implementation block
@property (nonatomic,retain) NSString * message;                  //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) int processID;                       //@synthesize processID=_processID - In the implementation block
@property (nonatomic,retain) NSString * processName;              //@synthesize processName=_processName - In the implementation block
@property (assign,nonatomic) unsigned machPort;                   //@synthesize machPort=_machPort - In the implementation block
@property (assign,nonatomic) double timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSString * function;                 //@synthesize function=_function - In the implementation block
-(void)setProcessName:(NSString *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(int)processID;
-(NSString *)message;
-(unsigned)machPort;
-(id)init;
-(NSString *)function;
-(NSString *)processName;
-(double)timestamp;
-(void)setLogName:(NSString *)arg1 ;
-(id)description;
-(NSString *)logName;
-(int)level;
-(void)setFunction:(NSString *)arg1 ;
-(void)setProcessID:(int)arg1 ;
-(void)setLevel:(int)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(id)initWithLogName:(id)arg1 level:(int)arg2 message:(id)arg3 ;
-(void)setMachPort:(unsigned)arg1 ;
@end

