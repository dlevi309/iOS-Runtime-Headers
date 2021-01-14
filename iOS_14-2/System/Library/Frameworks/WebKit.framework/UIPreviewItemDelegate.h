/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


@protocol UIPreviewItemDelegate <NSObject>
@optional
-(id)_presentationSnapshotForPreviewItemController:(id)arg1;
-(void)_previewItemControllerDidCancelPreview:(id)arg1;
-(void)_previewItemController:(id)arg1 willPresentPreview:(id)arg2 forPosition:(CGPoint)arg3 inSourceView:(id)arg4;
-(id)_presentationRectsForPreviewItemController:(id)arg1;
-(void)_previewItemController:(id)arg1 didDismissPreview:(id)arg2 committing:(BOOL)arg3;
-(BOOL)_interactionShouldBeginFromPreviewItemController:(id)arg1 forPosition:(CGPoint)arg2;
-(CGRect*)_presentationRectForPreviewItemController:(id)arg1;
-(id)_presentedViewControllerForPreviewItemController:(id)arg1;
-(void)_interactionStartedFromPreviewItemController:(id)arg1;
-(void)_previewItemController:(id)arg1 commitPreview:(id)arg2;
-(void)_interactionStoppedFromPreviewItemController:(id)arg1;

@required
-(id)_dataForPreviewItemController:(id)arg1 atPosition:(CGPoint)arg2 type:(long long*)arg3;

@end

