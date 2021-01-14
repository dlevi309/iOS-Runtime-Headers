/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIPrintFormatter, WFPDFDocument;

@interface WFPDFPrintFormatter : NSObject <NSCopying> {

	UIPrintFormatter* _printFormatter;
	WFPDFDocument* _document;

}

@property (nonatomic,readonly) WFPDFDocument * document;                       //@synthesize document=_document - In the implementation block
@property (nonatomic,readonly) UIPrintFormatter * printFormatter;              //@synthesize printFormatter=_printFormatter - In the implementation block
-(WFPDFDocument *)document;
-(UIPrintFormatter *)printFormatter;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithFileRepresentation:(id)arg1 ;
-(id)initWithPDFDocument:(id)arg1 ;
@end

