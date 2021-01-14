/*
* Generated on Thursday, January 14, 2021 at 2:20:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol NSTextAttachmentCell <NSObject>
@optional
-(CGRect*)cellFrameForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2;

@required
-(CGSize*)cellSize;
-(id)attachment;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4;
-(CGPoint*)cellBaselineOffset;
-(void)setAttachment:(id)arg1;

@end

