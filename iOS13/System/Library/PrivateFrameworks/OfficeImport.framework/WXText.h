/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WXText : NSObject
+(void)readFrom:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readFromStream:(xmlTextReaderRef)arg1 state:(id)arg2 ;
+(void)readFrom:(xmlNode*)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4 ;
+(void)readFromString:(id)arg1 to:(id)arg2 ;
+(void)readFromStream:(xmlTextReaderRef)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4 ;
+(void)updateTextBoxIdsFromState:(id)arg1 ;
+(void)createChildren:(xmlNode*)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4 ;
+(void)createChildrenFromStream:(xmlTextReaderRef)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4 ;
+(id)addNewSectionTo:(id)arg1 state:(id)arg2 ;
+(void)readFromParagraph:(xmlNode*)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4 ;
+(void)readFromTable:(xmlNode*)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4 ;
@end

