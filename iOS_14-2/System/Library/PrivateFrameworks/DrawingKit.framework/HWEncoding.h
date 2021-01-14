/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
*/


#import <DrawingKit/DrawingKit-Structs.h>
@interface HWEncoding : NSObject
+(id)protoDrawingFromDrawing:(id)arg1 compress:(BOOL)arg2 ;
+(id)protoMessageFromHandwriting:(id)arg1 ;
+(id)decodedBrushStrokesWithData:(id)arg1 inCanvasBounds:(CGRect)arg2 inStrokesFrame:(CGRect)arg3 strokeDataFieldCount:(unsigned)arg4 count:(unsigned long long)arg5 ;
+(id)encodeBrushStrokesAsData:(id)arg1 inCanvasBounds:(CGRect)arg2 inStrokesFrame:(CGRect)arg3 ;
+(id)encodeHandwriting:(id)arg1 compress:(BOOL)arg2 ;
+(id)decodeHandwritingFromData:(id)arg1 ;
+(void)writeDataToDisk:(id)arg1 withName:(id)arg2 ;
@end

