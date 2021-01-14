/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface TCXmlTextWriterProvider : NSObject {

	xmlTextWriterRef _textWriter;

}

@property (nonatomic,readonly) xmlTextWriterRef textWriter;              //@synthesize textWriter=_textWriter - In the implementation block
-(BOOL)setUp;
-(BOOL)tearDown;
-(void)dealloc;
-(BOOL)setUpWithTextWriter:(xmlTextWriterRef)arg1 ;
-(xmlTextWriterRef)textWriter;
@end

