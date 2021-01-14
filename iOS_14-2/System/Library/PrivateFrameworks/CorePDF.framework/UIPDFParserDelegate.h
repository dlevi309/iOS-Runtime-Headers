/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSString;

@interface UIPDFParserDelegate : NSObject <NSXMLParserDelegate> {

	CGPoint _p[4];
	CGPathRef _path;
	BOOL _parserError;

}

@property (readonly) CGPathRef path; 
@property (readonly) BOOL parserError;                              //@synthesize parserError=_parserError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(CGPathRef)path;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(void)parserDidStartDocument:(id)arg1 ;
-(BOOL)parserError;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)dealloc;
@end

