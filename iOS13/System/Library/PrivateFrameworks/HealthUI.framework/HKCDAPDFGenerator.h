/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@interface HKCDAPDFGenerator : NSObject
+(id)PDFTranslator;
-(id)init;
-(void)_pdfForHTML:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_finishGenerationWithURL:(id)arg1 tempFileDescriptor:(int)arg2 completionHandler:(/*^block*/id)arg3 error:(id)arg4 ;
-(void)generatePDFForCDAXML:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

