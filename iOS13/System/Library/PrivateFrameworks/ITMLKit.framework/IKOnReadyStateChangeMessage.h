/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class NSString, NSError;

@interface IKOnReadyStateChangeMessage : NSObject {

	unsigned _readyState;
	unsigned _statusCode;
	NSString* _statusText;
	NSError* _error;

}

@property (nonatomic,readonly) unsigned readyState;              //@synthesize readyState=_readyState - In the implementation block
@property (nonatomic,readonly) unsigned statusCode;              //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,copy) NSString * statusText;                //@synthesize statusText=_statusText - In the implementation block
@property (nonatomic,copy) NSError * error;                      //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(unsigned)statusCode;
-(void)setError:(NSError *)arg1 ;
-(unsigned)readyState;
-(NSString *)statusText;
-(void)setStatusText:(NSString *)arg1 ;
-(id)initWithReadyState:(unsigned)arg1 statusCode:(unsigned)arg2 statusText:(id)arg3 error:(id)arg4 ;
@end

