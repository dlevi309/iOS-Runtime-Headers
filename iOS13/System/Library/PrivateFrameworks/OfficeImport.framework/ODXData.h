/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface ODXData : NSObject
+(void)readNode:(xmlNode*)arg1 toDiagram:(id)arg2 state:(id)arg3 ;
+(id)readPointListFromNode:(xmlNode*)arg1 pointIdMap:(id)arg2 state:(id)arg3 ;
+(void)readConnectionListFromNode:(xmlNode*)arg1 pointIdMap:(id)arg2 state:(id)arg3 ;
+(void)associatePresentationsInIdMap:(id)arg1 ;
+(id)readModelIdentifierFromNode:(xmlNode*)arg1 attributeName:(const char*)arg2 ;
+(id)readPointFromNode:(xmlNode*)arg1 pointIdMap:(id)arg2 state:(id)arg3 ;
+(int)readPointTypeFromNode:(xmlNode*)arg1 ;
+(void)readConnectionFromNode:(xmlNode*)arg1 pointIdMap:(id)arg2 state:(id)arg3 ;
+(int)readConnectionTypeFromNode:(xmlNode*)arg1 ;
@end

