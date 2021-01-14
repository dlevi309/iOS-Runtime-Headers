/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXColor : NSObject
+(id)readColorFromNode:(xmlNode*)arg1 ;
+(void)writeColor:(id)arg1 to:(id)arg2 ;
+(id)readScRgbColorFromXmlNode:(xmlNode*)arg1 ;
+(id)readSRgbColorFromXmlNode:(xmlNode*)arg1 attribute:(const char*)arg2 ;
+(id)readHslColorFromXmlNode:(xmlNode*)arg1 ;
+(id)readSystemColorFromXmlNode:(xmlNode*)arg1 ;
+(id)readSchemeColorFromXmlNode:(xmlNode*)arg1 ;
+(id)readPresetColorFromXmlNode:(xmlNode*)arg1 ;
+(id)presetColorEnumMap;
+(id)presetColorRGBEnumMap;
+(id)systemColorEnumMap;
+(id)stringSRgbColor:(id)arg1 ;
+(void)writeRgbColor:(id)arg1 to:(id)arg2 ;
+(void)writeSchemeColor:(id)arg1 to:(id)arg2 ;
+(void)writeSystemColor:(id)arg1 to:(id)arg2 ;
+(void)writePlaceholderColor:(id)arg1 to:(id)arg2 ;
+(id)readSchemeColorFromAttribute:(id)arg1 ;
+(void)writePresetColor:(id)arg1 to:(id)arg2 ;
+(id)schemeColorEnumMap;
+(id)readColorFromParentXmlNode:(xmlNode*)arg1 ;
+(id)readPresetColorFromAttribute:(id)arg1 ;
+(id)readSystemColorFromAttribute:(id)arg1 ;
@end

