/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXShape : NSObject
+(id)readFromXmlNode:(xmlNode*)arg1 inNamespace:(id)arg2 drawingState:(id)arg3 ;
+(void)readNonVisualShapeProperties:(xmlNode*)arg1 nodeName:(const char*)arg2 inNamespace:(id)arg3 shapeProperties:(id)arg4 ;
+(void)readCoreFromXmlNode:(xmlNode*)arg1 inNamespace:(id)arg2 toShape:(id)arg3 drawingState:(id)arg4 ;
+(BOOL)isWritable:(id)arg1 ;
@end

