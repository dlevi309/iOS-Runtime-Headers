/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSItemProvider, UITextRange;

@interface UITextDraggableObject : NSObject {

	NSItemProvider* _itemProvider;
	UITextRange* _range;
	/*^block*/id _targetedPreviewProvider;
	/*^block*/id _previewProvider;

}

@property (nonatomic,retain) NSItemProvider * itemProvider;              //@synthesize itemProvider=_itemProvider - In the implementation block
@property (nonatomic,retain) UITextRange * range;                        //@synthesize range=_range - In the implementation block
@property (nonatomic,copy) id targetedPreviewProvider;                   //@synthesize targetedPreviewProvider=_targetedPreviewProvider - In the implementation block
@property (nonatomic,copy) id previewProvider;                           //@synthesize previewProvider=_previewProvider - In the implementation block
+(id)draggableObjectWithItemProvider:(id)arg1 fromRange:(id)arg2 ;
-(NSItemProvider *)itemProvider;
-(void)setItemProvider:(NSItemProvider *)arg1 ;
-(UITextRange *)range;
-(void)setRange:(UITextRange *)arg1 ;
-(id)previewProvider;
-(void)setPreviewProvider:(id)arg1 ;
-(void)setTargetedPreviewProvider:(id)arg1 ;
-(id)targetedPreviewProvider;
@end

