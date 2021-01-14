/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXDrawing : NSObject
+(void)initialize;
+(id)readTwoCellAnchorNode:(xmlNode*)arg1 state:(id)arg2 ;
+(id)readOneCellAnchorNode:(xmlNode*)arg1 state:(id)arg2 ;
+(id)readAbsoluteAnchorNode:(xmlNode*)arg1 state:(id)arg2 ;
+(id)readAnchorNode:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readFromPart:(id)arg1 state:(id)arg2 ;
+(EDCellAnchorMarker)readAnchorMarkerFromNode:(xmlNode*)arg1 state:(id)arg2 ;
+(id)readDrawableNode:(xmlNode*)arg1 anchor:(id)arg2 state:(id)arg3 ;
@end

