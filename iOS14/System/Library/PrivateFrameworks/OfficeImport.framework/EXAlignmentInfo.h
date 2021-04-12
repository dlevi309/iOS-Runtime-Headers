/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXAlignmentInfo : NSObject
+(int)edHorizontalAlignFromHorizontalAlignString:(id)arg1 ;
+(int)edVerticalAlignFromVerticalAlignString:(id)arg1 ;
+(id)horizontalAlignmentEnumMap;
+(id)verticalAlignmentEnumMap;
+(id)edAlignmentInfoFromXmlAlignmentInfoElement:(xmlNode*)arg1 state:(id)arg2 ;
+(id)edAlignmentInfoFromVmlAlignmentInfoElement:(xmlNode*)arg1 state:(id)arg2 ;
@end

