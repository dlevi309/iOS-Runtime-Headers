/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WXCharacterProperties : NSObject
+(id)underlineEnumMap;
+(BOOL)readBooleanCharacterProperty:(xmlNode*)arg1 propertyName:(const char*)arg2 attributeName:(const char*)arg3 outValue:(int*)arg4 state:(id)arg5 ;
+(void)readReflection:(id)arg1 fromXmlNode:(xmlNode*)arg2 state:(id)arg3 ;
+(void)readShadowForTarget:(id)arg1 fromXmlNode:(xmlNode*)arg2 state:(id)arg3 ;
+(id)ligaturesEnumMap;
+(id)highlightEnumMap;
+(id)verticalAlignEnumMap;
+(id)emphasisMarkEnumMap;
+(id)fontHintEnumMap;
+(BOOL)readBooleanCharacterMultipleProperty:(xmlNode*)arg1 propertyName:(const char*)arg2 attributeName:(const char*)arg3 outValue:(int*)arg4 state:(id)arg5 ;
+(id)twoLineBracketsEnumMap;
+(id)readFillColor:(xmlNode*)arg1 forTarget:(id)arg2 state:(id)arg3 ;
+(BOOL)isBooleanCharacterPropertyTrue:(int)arg1 ;
+(void)readFrom:(xmlNode*)arg1 to:(id)arg2 state:(id)arg3 ;
+(void)applyDeletionInsertionProperties:(id)arg1 state:(id)arg2 ;
@end

