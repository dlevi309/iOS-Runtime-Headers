/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/ENXMLWriter.h>

@interface ENMLWriter : ENXMLWriter
+(BOOL)validateURLComponents:(id)arg1 ;
+(id)emptyNote;
-(id)init;
-(BOOL)startElement:(id)arg1 attributes:(id)arg2 ;
-(void)startDocumentWithAttributes:(id)arg1 ;
-(void)startDocument;
-(void)endDocument;
-(id)validateURLAttribute:(id)arg1 inAttributes:(id)arg2 ;
-(void)writeResourceWithDataHash:(id)arg1 mime:(id)arg2 attributes:(id)arg3 ;
-(void)writeResource:(id)arg1 ;
-(void)writeEncryptedInfo:(id)arg1 ;
-(void)writeTodoWithCheckedState:(BOOL)arg1 ;
@end

