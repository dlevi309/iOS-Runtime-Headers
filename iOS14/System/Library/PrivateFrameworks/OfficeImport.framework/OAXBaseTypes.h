/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXBaseTypes : NSObject
+(long long)readRequiredLongFromXmlNode:(xmlNode*)arg1 name:(const char*)arg2 desiredOutputUnit:(int)arg3 ;
+(long long)readOptionalLongFromXmlNode:(xmlNode*)arg1 name:(const char*)arg2 desiredOutputUnit:(int)arg3 ;
+(long long)readOptionalLongFromXmlNode:(xmlNode*)arg1 name:(const char*)arg2 ;
+(id)rectAlignmentEnumMap;
+(id)stringForRectAlignment:(int)arg1 ;
+(void)writeRelativeRect:(id)arg1 to:(id)arg2 ;
+(void)writeRectAlignment:(int)arg1 to:(id)arg2 ;
+(float)readOptionalFractionFromXmlNode:(xmlNode*)arg1 name:(const char*)arg2 ;
+(float)readRequiredFractionFromXmlNode:(xmlNode*)arg1 name:(const char*)arg2 ;
+(double)readRequiredAngleFromXmlNode:(xmlNode*)arg1 name:(const char*)arg2 ;
+(id)readRelativeRectFromXmlNode:(xmlNode*)arg1 ;
+(float)readOptionalLengthFromXmlNode:(xmlNode*)arg1 name:(const char*)arg2 ;
+(int)readRectAlignmentFromXmlNode:(xmlNode*)arg1 name:(const char*)arg2 ;
+(id)readRotation3DFromXmlNode:(xmlNode*)arg1 ;
+(id)readPoint3DFromXmlNode:(xmlNode*)arg1 ;
+(id)readVector3DFromXmlNode:(xmlNode*)arg1 ;
+(float)readRequiredLengthFromXmlNode:(xmlNode*)arg1 name:(const char*)arg2 ;
+(double)readOptionalAngleFromXmlNode:(xmlNode*)arg1 name:(const char*)arg2 ;
+(long long)readRequiredLongFromXmlNode:(xmlNode*)arg1 name:(const char*)arg2 ;
+(CGPoint)readPoint2DFromXmlNode:(xmlNode*)arg1 ;
+(CGSize)readSize2DFromXmlNode:(xmlNode*)arg1 ;
@end

