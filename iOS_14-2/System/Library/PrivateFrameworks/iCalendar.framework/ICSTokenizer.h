/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
*/


@class ICSPushbackStream, NSMutableData;

@interface ICSTokenizer : NSObject {

	ICSPushbackStream* _data;
	NSMutableData* _token;
	int _tokenType;
	int _expectedNextTokenType;
	BOOL _printedICS;
	int _logCount;

}

@property (assign) BOOL printedICS;              //@synthesize printedICS=_printedICS - In the implementation block
@property (assign) int logCount;                 //@synthesize logCount=_logCount - In the implementation block
-(void)setLogCount:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)currentToken;
-(int)tokenType;
-(id)nextToken;
-(int)logCount;
-(id)initWithCompressedData:(id)arg1 ;
-(BOOL)printedICS;
-(void)setPrintedICS:(BOOL)arg1 ;
-(BOOL)consumeEOL;
-(void)consumeWhiteSpace;
-(BOOL)consumeChar:(char)arg1 ;
-(BOOL)consumeEscaped:(const char*)arg1 ;
-(void)consumePropName;
-(void)consumeParamName;
-(void)consumeParamValue;
-(void)consumePropValue;
@end

