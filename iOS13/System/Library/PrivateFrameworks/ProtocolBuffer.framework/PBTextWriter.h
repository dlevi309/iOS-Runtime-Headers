/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
*/


@class NSMutableString, NSMutableDictionary;

@interface PBTextWriter : NSObject {

	BOOL _newlinesPrinted;
	long long _indent;
	NSMutableString* _dest;
	NSMutableDictionary* _cachedObjectTypes;

}
-(id)init;
-(id)string;
-(void)dealloc;
-(void)reset;
-(void)_indent;
-(void)_outdent;
-(void)_openBrace;
-(void)_closeBrace;
-(void)_printLine:(BOOL)arg1 format:(id)arg2 ;
-(void)_printNewlines;
-(void)_writePropertyAndValue:(id)arg1 forObject:(id)arg2 ;
-(void)_writeResult:(id)arg1 forProperty:(id)arg2 bracePrefix:(id)arg3 ;
-(BOOL)write:(id)arg1 ;
-(BOOL)_write:(id)arg1 ;
@end

