/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)finishRequestLog;
-(long long)sequenceNumber;
-(void)logPartialRequestObjectData:(id)arg1 ;
-(void)logResponseConfiguration:(unsigned long long)arg1 withMessageClassString:(id)arg2 ;
-(NSString *)requestID;
-(BOOL)shouldLog;
-(void)logRequest:(id)arg1 toURL:(id)arg2 withMethod:(id)arg3 withMessageClassString:(id)arg4 parsingStandaloneMessage:(BOOL)arg5 ;
-(void)_logObject:(id)arg1 ofType:(unsigned long long)arg2 ;
-(void)setRequestID:(NSString *)arg1 ;
-(id)initWithRequestID:(id)arg1 ;
-(void)logResponse:(id)arg1 ;
-(void)logPartialResponseObjectData:(id)arg1 ;
-(void)logRequestBodyStreamReset;
@end

