/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)parseData:(id)arg1 ;
-(id)parent;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(int)elementType;
-(void)setParent:(id)arg1 ;
-(void)setElementValue:(id)arg1 ;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(id)parseString:(id)arg1 ;
-(id)elementValue;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(id)initWithParent:(id)arg1 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
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

