/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface PBParagraphProperties : NSObject
+(void)readAlign:(id)arg1 pptAlignmentType:(int)arg2 ;
+(short)pptTextSpacingWithOADParaSpacing:(id)arg1 defaultPptParaSpacing:(short)arg2 ;
+(int)pptAlignmentTypeWithOADTextAlignType:(unsigned char)arg1 ;
+(int)pptFontAlignWithOADTextFontAlign:(unsigned char)arg1 ;
+(void)readParagraphProperties:(id)arg1 paragraphProperty:(PptParaProperty*)arg2 bulletStyle:(PptParaProperty9*)arg3 isMaster:(BOOL)arg4 state:(id)arg5 ;
+(void)readParagraphProperties:(id)arg1 paragraphPropertyRun:(PptParaRun*)arg2 bulletStyle:(PptParaProperty9*)arg3 state:(id)arg4 ;
@end

