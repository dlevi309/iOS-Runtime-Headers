/*
* Generated on Thursday, January 14, 2021 at 2:20:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UITextDraggableGeometry <NSObject>
@property (assign,nonatomic) long long geometryOptions; 
@required
-(void)setGeometryOptions:(long long)arg1;
-(id)previewForDroppingTextInRange:(id)arg1 toPosition:(id)arg2 inContainerView:(id)arg3;
-(/*^block*/id)targetedPreviewProviderForTextInRange:(NSRange)arg1 dismissing:(BOOL)arg2;
-(id)textRangesForAttachmentsInTextRange:(id)arg1;
-(long long)geometryOptions;
-(id)draggableObjectsForTextRange:(id)arg1;
-(id)textRangeForAttachmentInTextRange:(id)arg1 atPoint:(CGPoint)arg2;

@end

