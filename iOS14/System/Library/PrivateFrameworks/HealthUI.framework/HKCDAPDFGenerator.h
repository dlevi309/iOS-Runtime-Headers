/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@interface HKCDAPDFGenerator : NSObject
+(id)PDFTranslator;
-(id)init;
-(void)_pdfForHTML:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_finishGenerationWithURL:(id)arg1 tempFileDescriptor:(int)arg2 completionHandler:(/*^block*/id)arg3 error:(id)arg4 ;
-(void)generatePDFForCDAXML:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

