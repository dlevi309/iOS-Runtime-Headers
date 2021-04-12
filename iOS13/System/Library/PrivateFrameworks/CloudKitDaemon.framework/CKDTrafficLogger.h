/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class NSString;

@interface CKDTrafficLogger : NSObject {

	long long _sequenceNumber;
	NSString* _requestID;

}

@property (assign,nonatomic) long long sequenceNumber;              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,retain) NSString * requestID;                  //@synthesize requestID=_requestID - In the implementation block
-(void)setSequenceNumber:(long long)arg1 ;
-(long long)sequenceNumber;
-(BOOL)shouldLog;
-(id)initWithRequestID:(id)arg1 ;
-(NSString *)requestID;
-(void)setRequestID:(NSString *)arg1 ;
-(void)logResponseConfiguration:(unsigned long long)arg1 withMessageClassString:(id)arg2 ;
-(void)logPartialRequestObjectData:(id)arg1 ;
-(void)logRequest:(id)arg1 toURL:(id)arg2 withMethod:(id)arg3 withMessageClassString:(id)arg4 parsingStandaloneMessage:(BOOL)arg5 ;
-(void)finishRequestLog;
-(void)logResponse:(id)arg1 ;
-(void)logPartialResponseObjectData:(id)arg1 ;
-(void)logRequestBodyStreamReset;
-(void)_logObject:(id)arg1 ofType:(unsigned long long)arg2 ;
@end

