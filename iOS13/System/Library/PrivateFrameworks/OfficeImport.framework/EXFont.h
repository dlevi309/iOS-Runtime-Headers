/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXFont : NSObject
+(int)edUnderlineFromXmlUnderlineElement:(xmlNode*)arg1 ;
+(int)edScriptFromXmlVertAlignElement:(xmlNode*)arg1 ;
+(id)underlineEnumMap;
+(id)vertAlignEnumMap;
+(id)edFontFromXmlFontElement:(xmlNode*)arg1 inConditionalFormat:(BOOL)arg2 returnDefaultIfEmpty:(BOOL)arg3 state:(id)arg4 ;
@end

