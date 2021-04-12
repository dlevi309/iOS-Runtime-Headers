/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface TCXmlTextWriterProvider : NSObject {

	xmlTextWriterRef _textWriter;

}

@property (nonatomic,readonly) xmlTextWriterRef textWriter;              //@synthesize textWriter=_textWriter - In the implementation block
-(void)dealloc;
-(BOOL)tearDown;
-(BOOL)setUp;
-(BOOL)setUpWithTextWriter:(xmlTextWriterRef)arg1 ;
-(xmlTextWriterRef)textWriter;
@end

