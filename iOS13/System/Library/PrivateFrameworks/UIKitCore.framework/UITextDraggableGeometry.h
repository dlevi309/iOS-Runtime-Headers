/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UITextDraggableGeometry <NSObject>
@property (assign,nonatomic) long long geometryOptions; 
@required
-(long long)geometryOptions;
-(id)textRangesForAttachmentsInTextRange:(id)arg1;
-(id)textRangeForAttachmentInTextRange:(id)arg1 atPoint:(CGPoint)arg2;
-(id)draggableObjectsForTextRange:(id)arg1;
-(id)previewForDroppingTextInRange:(id)arg1 toPosition:(id)arg2 inContainerView:(id)arg3;
-(/*^block*/id)targetedPreviewProviderForTextInRange:(NSRange)arg1 dismissing:(BOOL)arg2;
-(void)setGeometryOptions:(long long)arg1;

@end

