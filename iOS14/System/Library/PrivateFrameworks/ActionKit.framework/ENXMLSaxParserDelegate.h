/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@protocol ENXMLSaxParserDelegate <NSObject>
@optional
-(void)parser:(id)arg1 foundComment:(id)arg2;
-(void)parserDidEndDocument:(id)arg1;
-(void)parser:(id)arg1 foundCDATA:(id)arg2;
-(void)parser:(id)arg1 foundCharacters:(id)arg2;
-(void)parserDidStartDocument:(id)arg1;
-(void)parser:(id)arg1 didStartElement:(id)arg2 attributes:(id)arg3;
-(void)parser:(id)arg1 didEndElement:(id)arg2;
-(void)parser:(id)arg1 didFailWithError:(id)arg2;

@end

