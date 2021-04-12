/*
* Generated on Thursday, January 14, 2021 at 2:20:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRange:(UITextRange *)arg1 ;
-(UITextRange *)range;
-(NSItemProvider *)itemProvider;
-(id)targetedPreviewProvider;
-(void)setItemProvider:(NSItemProvider *)arg1 ;
-(void)setTargetedPreviewProvider:(id)arg1 ;
-(id)previewProvider;
-(void)setPreviewProvider:(id)arg1 ;
@end

