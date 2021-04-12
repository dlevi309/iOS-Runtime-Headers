/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_endElement:(const char*)arg1 ;
-(void)_appendString:(id)arg1 ;
-(void)_error:(long long)arg1 msg:(const char*)arg2 args:(char*)arg3 ;
-(id)attributedString;
-(id)attributes;
-(BOOL)parse:(id*)arg1 ;
-(void)_startDocument;
-(id)initWithParser:(id)arg1 data:(id)arg2 ;
-(void)_endDocument;
-(id)currentTagAttributes;
-(void)_characters:(const char*)arg1 length:(int)arg2 ;
-(void)_startElement:(const char*)arg1 attrs:(const char**)arg2 ;
-(id)tagStack;
@end

