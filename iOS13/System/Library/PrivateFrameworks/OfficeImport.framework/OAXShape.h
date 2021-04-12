/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXShape : NSObject
+(id)readFromXmlNode:(xmlNode*)arg1 inNamespace:(id)arg2 drawingState:(id)arg3 ;
+(void)readNonVisualShapeProperties:(xmlNode*)arg1 nodeName:(const char*)arg2 inNamespace:(id)arg3 shapeProperties:(id)arg4 ;
+(void)readCoreFromXmlNode:(xmlNode*)arg1 inNamespace:(id)arg2 toShape:(id)arg3 drawingState:(id)arg4 ;
+(BOOL)isWritable:(id)arg1 ;
@end

