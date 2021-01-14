/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

