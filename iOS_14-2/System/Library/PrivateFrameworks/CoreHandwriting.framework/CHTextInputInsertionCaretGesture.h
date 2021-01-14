/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHTextInputGesture.h>

@interface CHTextInputInsertionCaretGesture : CHTextInputGesture {

	CGPoint _caretTipPoint;

}

@property (nonatomic,readonly) CGPoint caretTipPoint;              //@synthesize caretTipPoint=_caretTipPoint - In the implementation block
-(void)getAffectedRange:(NSRange*)arg1 expandedToFullTokens:(BOOL*)arg2 ;
-(id)initWithCaretTipPoint:(CGPoint)arg1 targetContentInfo:(id)arg2 locale:(id)arg3 normalizedDrawing:(id)arg4 originalDrawing:(id)arg5 ;
-(long long)caretDirection;
-(CGPoint)caretTipPoint;
@end

