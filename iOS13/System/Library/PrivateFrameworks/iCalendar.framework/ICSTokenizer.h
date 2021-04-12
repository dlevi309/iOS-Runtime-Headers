/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
*/


@class NSData;

@interface ICSTokenizer : NSObject {

	NSData* _data;
	const char* _datastring;
	unsigned long long _length;
	unsigned long long _cursor;
	char* _token;
	int _tokenType;
	int _expectedNextTokenType;
	BOOL _printedICS;
	int _logCount;

}

@property (assign) BOOL printedICS;              //@synthesize printedICS=_printedICS - In the implementation block
@property (assign) int logCount;                 //@synthesize logCount=_logCount - In the implementation block
-(void)dealloc;
-(id)debugDescription;
-(id)initWithData:(id)arg1 ;
-(char*)currentToken;
-(int)tokenType;
-(char*)nextToken;
-(int)logCount;
-(void)setLogCount:(int)arg1 ;
-(BOOL)printedICS;
-(void)setPrintedICS:(BOOL)arg1 ;
-(BOOL)consumeFolding;
-(BOOL)consumeEOL;
-(void)consumeWhiteSpace;
-(BOOL)consumeEscaped:(const char*)arg1 ;
-(void)consumePropName;
-(void)consumeParamName;
-(void)consumeParamValue;
-(void)consumePropValue;
@end

