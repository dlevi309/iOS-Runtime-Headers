/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

