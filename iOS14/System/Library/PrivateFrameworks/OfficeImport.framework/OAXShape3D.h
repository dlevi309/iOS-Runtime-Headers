/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXShape3D : NSObject
+(BOOL)isEmpty:(id)arg1 ;
+(id)bevelTypeEnumMap;
+(id)readBevelFromXmlNode:(xmlNode*)arg1 ;
+(id)materialEnumMap;
+(void)writeBevel:(id)arg1 to:(id)arg2 ;
+(id)readShape3DFromXmlNode:(xmlNode*)arg1 packagePart:(id)arg2 drawingState:(id)arg3 ;
+(void)writeShape3D:(id)arg1 to:(id)arg2 ;
+(void)writeShape3DMaterialOnly:(id)arg1 to:(id)arg2 ;
@end

