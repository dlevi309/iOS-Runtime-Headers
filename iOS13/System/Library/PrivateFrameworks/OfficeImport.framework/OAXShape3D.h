/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

