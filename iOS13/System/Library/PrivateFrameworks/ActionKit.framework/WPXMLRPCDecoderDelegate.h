/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSMutableArray, NSString;

@interface WPXMLRPCDecoderDelegate : NSObject <NSXMLParserDelegate> {

	WPXMLRPCDecoderDelegate* myParent;
	NSMutableArray* myChildren;
	int myElementType;
	NSString* myElementKey;
	id myElementValue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)parent;
-(id)initWithParent:(id)arg1 ;
-(void)setParent:(id)arg1 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(id)parseData:(id)arg1 ;
-(int)elementType;
-(id)parseString:(id)arg1 ;
-(id)elementValue;
-(void)setElementValue:(id)arg1 ;
-(void)setElementType:(int)arg1 ;
-(void)setElementKey:(id)arg1 ;
-(id)elementKey;
-(BOOL)isDictionaryElementType:(int)arg1 ;
-(id)parseInteger:(id)arg1 ;
-(id)parseDouble:(id)arg1 ;
-(id)parseBoolean:(id)arg1 ;
-(id)parseDate:(id)arg1 ;
-(void)addElementValueToParent;
-(id)parseDateString:(id)arg1 withFormat:(id)arg2 ;
@end

