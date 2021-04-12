/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)statusText;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(unsigned)statusCode;
-(unsigned)readyState;
-(void)setStatusText:(NSString *)arg1 ;
-(id)initWithReadyState:(unsigned)arg1 statusCode:(unsigned)arg2 statusText:(id)arg3 error:(id)arg4 ;
@end

