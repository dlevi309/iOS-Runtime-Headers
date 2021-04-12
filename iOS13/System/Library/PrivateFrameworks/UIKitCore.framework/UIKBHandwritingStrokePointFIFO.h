/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBHandwritingPointFIFO.h>

@class TIHandwritingStrokes;

@interface UIKBHandwritingStrokePointFIFO : UIKBHandwritingPointFIFO {

	TIHandwritingStrokes* _strokes;

}

@property (nonatomic,retain) TIHandwritingStrokes * strokes;              //@synthesize strokes=_strokes - In the implementation block
-(void)clear;
-(void)flush;
-(void)addPoint:(SCD_Struct_UI88)arg1 ;
-(id)initWithFIFO:(id)arg1 ;
-(void)setStrokes:(TIHandwritingStrokes *)arg1 ;
-(TIHandwritingStrokes *)strokes;
@end

