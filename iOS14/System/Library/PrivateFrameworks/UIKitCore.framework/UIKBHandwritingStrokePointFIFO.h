/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addPoint:(SCD_Struct_UI98)arg1 ;
-(TIHandwritingStrokes *)strokes;
-(void)setStrokes:(TIHandwritingStrokes *)arg1 ;
-(id)initWithFIFO:(id)arg1 ;
@end

