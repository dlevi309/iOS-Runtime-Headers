/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
*/


#import <IMAP/IMAP-Structs.h>
@class MFIMAPConnection, MFIMAPResponse;

@interface MFIMAPParseContext : NSObject {

	MFIMAPConnection* _connection;
	MFIMAPResponse* _response;
	const char* _start;
	const char* _end;
	const char* _originalStart;
	const char* _originalEnd;
	const char* _lastLoggedChar;
	BOOL _invalid;

}
+(BOOL)hadWarningOrError;
+(void)resetWarningOrError;
-(const char*)end;
-(const char*)start;
-(BOOL)match:(const char*)arg1 ;
-(BOOL)isValid;
-(void)setEnd:(const char*)arg1 ;
-(id)connection;
-(id)response;
-(void)increment;
-(void)setStart:(const char*)arg1 ;
-(void)dealloc;
-(BOOL)getNumber:(unsigned long long*)arg1 ;
-(BOOL)parseSpace;
-(void)emitWarning:(id)arg1 ;
-(id)copyNumber;
-(void)emitError:(id)arg1 ;
-(id)copyMessageSet;
-(id)copyQuotedString;
-(id)copyStringFrom:(const char*)arg1 to:(const char*)arg2 withCaseOption:(int)arg3 ;
-(unsigned char)lookAhead;
-(BOOL)literalWithResponseConsumer:(id)arg1 section:(id)arg2 ;
-(id)copyLiteral;
-(id)copyLiteralString;
-(id)copyAtom;
-(CFArrayRef)copyArrayAllowingNulls:(BOOL)arg1 ;
-(id)initWithConnection:(id)arg1 response:(id)arg2 start:(const char*)arg3 end:(const char*)arg4 ;
-(void)logReadChars;
-(BOOL)match:(const char*)arg1 upToSpecial:(const char*)arg2 ;
-(id)copyNilOrString;
-(id)copyAString;
-(id)copyDateTime;
-(id)copyArray;
-(const char*)nextSeparator;
@end

