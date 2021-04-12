/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

