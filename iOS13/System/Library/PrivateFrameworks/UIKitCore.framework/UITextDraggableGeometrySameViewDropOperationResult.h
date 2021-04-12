/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UITextRange;

@interface UITextDraggableGeometrySameViewDropOperationResult : NSObject {

	UITextRange* _resultRange;
	/*^block*/id _targetedPreviewProvider;

}

@property (nonatomic,readonly) UITextRange * resultRange;               //@synthesize resultRange=_resultRange - In the implementation block
@property (nonatomic,readonly) id targetedPreviewProvider;              //@synthesize targetedPreviewProvider=_targetedPreviewProvider - In the implementation block
+(id)resultWithRange:(id)arg1 targetedPreviewProvider:(/*^block*/id)arg2 ;
-(id)targetedPreviewProvider;
-(UITextRange *)resultRange;
-(id)initWithRange:(id)arg1 targetedPreviewProvider:(/*^block*/id)arg2 ;
@end

