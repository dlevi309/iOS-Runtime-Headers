/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UITextDraggableGeometry.h>
#import <UIKit/UITextDraggableGeometryFastSameViewOperationsSupporting.h>

@protocol UITextDragSupportingUITextDropSupporting;
@class UIColor, UIView, NSLayoutManager, NSString;

@interface UILayoutManagerBasedDraggableGeometry : NSObject <UITextDraggableGeometry, UITextDraggableGeometryFastSameViewOperationsSupporting> {

	UIColor* _previousBackgroundColor;
	long long _geometryOptions;
	UIView*<UITextDragSupporting>*<UITextDropSupporting> _view;
	NSLayoutManager* _layoutManager;

}

@property (nonatomic,__weak,readonly) UIView*<UITextDragSupporting>*<UITextDropSupporting> view;              //@synthesize view=_view - In the implementation block
@property (nonatomic,__weak,readonly) NSLayoutManager * layoutManager;                                        //@synthesize layoutManager=_layoutManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long geometryOptions;                                                       //@synthesize geometryOptions=_geometryOptions - In the implementation block
-(NSLayoutManager *)layoutManager;
-(UIView*<UITextDragSupporting>*<UITextDropSupporting>)view;
-(id)_textStorage;
-(id)_draggableTextInRange:(id)arg1 ;
-(/*^block*/id)_targetedPreviewProviderForImage:(id)arg1 inRange:(NSRange)arg2 ;
-(BOOL)_isActualLink:(id)arg1 ;
-(/*^block*/id)_targetedPreviewProviderForTextInRange:(NSRange)arg1 dismissing:(BOOL)arg2 overrideLifting:(/*^block*/id)arg3 ;
-(/*^block*/id)_targetedPreviewProviderForTextInRange:(NSRange)arg1 ;
-(/*^block*/id)_previewProviderForTextInRange:(NSRange)arg1 ;
-(CGRect)_textRectForRange:(NSRange)arg1 inView:(id)arg2 ;
-(void)_renderTextInRange:(NSRange)arg1 image:(out id*)arg2 boundingRectangles:(out id*)arg3 forLifting:(BOOL)arg4 ;
-(CGPoint)_textOriginOffsetForRange:(NSRange)arg1 inView:(id)arg2 ;
-(long long)geometryOptions;
-(id)textRangesForAttachmentsInTextRange:(id)arg1 ;
-(id)textRangeForAttachmentInTextRange:(id)arg1 atPoint:(CGPoint)arg2 ;
-(id)draggableObjectsForTextRange:(id)arg1 ;
-(id)previewForDroppingTextInRange:(id)arg1 toPosition:(id)arg2 inContainerView:(id)arg3 ;
-(/*^block*/id)targetedPreviewProviderForTextInRange:(NSRange)arg1 dismissing:(BOOL)arg2 ;
-(void)setGeometryOptions:(long long)arg1 ;
-(id)attributedStringsForTextRanges:(id)arg1 ;
-(id)performSameViewDropOperation:(id)arg1 ;
-(id)initWithView:(id)arg1 layoutManager:(id)arg2 ;
@end

