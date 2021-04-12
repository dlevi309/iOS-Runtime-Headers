/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <MPUFoundation/MPUHTMLParserState.h>

@protocol MPUHTMLParserDelegate;
@class NSData, MPUHTMLParser, NSMutableArray, NSMutableAttributedString, NSString;

@interface _MPUHTMLParserState : NSObject <MPUHTMLParserState> {

	NSData* _data;
	void* _selfRef;
	MPUHTMLParser* _parser;
	id<MPUHTMLParserDelegate> _delegate;
	NSMutableArray* _errors;
	NSMutableAttributedString* _attributedString;
	NSMutableArray* _attributeDictionaries;
	NSMutableArray* _tagStack;
	NSMutableArray* _stringStack;
	SCD_Struct_MP2 _delegateCapabilites;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)attributes;
-(id)attributedString;
-(BOOL)parse:(id*)arg1 ;
-(void)_appendString:(id)arg1 ;
-(id)initWithParser:(id)arg1 data:(id)arg2 ;
-(id)currentTagAttributes;
-(id)tagStack;
-(void)_startDocument;
-(void)_endDocument;
-(void)_startElement:(const char*)arg1 attrs:(const char**)arg2 ;
-(void)_endElement:(const char*)arg1 ;
-(void)_characters:(const char*)arg1 length:(int)arg2 ;
-(void)_error:(long long)arg1 msg:(const char*)arg2 args:(char*)arg3 ;
@end

