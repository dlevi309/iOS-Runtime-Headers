/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIPrintFormatter *)printFormatter;
-(WFPDFDocument *)document;
-(id)initWithFileRepresentation:(id)arg1 ;
-(id)initWithPDFDocument:(id)arg1 ;
@end

