/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
*/

#import <DrawingKit/DrawingKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface DKDrawingStroke : NSObject <NSCopying> {

	NSMutableArray* _strokePoints;

}

@property (readonly) NSMutableArray * strokePoints;              //@synthesize strokePoints=_strokePoints - In the implementation block
+(id)drawingStrokeWithData:(id)arg1 count:(unsigned long long)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)strokePoints;
-(id)encodedBrushStroke;
-(id)_encodePointsDrawingPointData:(id)arg1 ;
-(id)_decodeDKEncodedDrawingPointDataAsArray:(id)arg1 count:(long long)arg2 ;
@end

