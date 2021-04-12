/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXScene3D : NSObject
+(id)cameraTypeEnumMap;
+(id)lightRigTypeEnumMap;
+(id)lightRigDirectionEnumMap;
+(id)readCameraFromXmlNode:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)readLightRigFromXmlNode:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)readBackdropFromXmlNode:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(void)writeBackdrop:(id)arg1 to:(id)arg2 ;
+(void)writeCamera:(id)arg1 to:(id)arg2 ;
+(void)writeLightRig:(id)arg1 to:(id)arg2 ;
+(id)readScene3DFromXmlNode:(xmlNode*)arg1 packagePart:(id)arg2 drawingState:(id)arg3 ;
+(void)writeScene3D:(id)arg1 to:(id)arg2 ;
+(BOOL)isEmpty:(id)arg1 ;
+(void)writeRotation3D:(id)arg1 to:(id)arg2 ;
@end

