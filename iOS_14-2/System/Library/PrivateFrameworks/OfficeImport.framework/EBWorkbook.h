/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EBWorkbook : NSObject
+(id)readWithState:(id)arg1 reader:(id)arg2 ;
+(void)readDocumentProperties:(id)arg1 state:(id)arg2 ;
+(void)readDocumentPresentation:(id)arg1 state:(id)arg2 ;
+(ChVector<OcText>*)createSheetNamesFromWorkbook:(id)arg1 ;
+(int)xlSheetTypeEnumFromEDSheet:(id)arg1 ;
+(void)setupProcessors:(id)arg1 ;
@end

