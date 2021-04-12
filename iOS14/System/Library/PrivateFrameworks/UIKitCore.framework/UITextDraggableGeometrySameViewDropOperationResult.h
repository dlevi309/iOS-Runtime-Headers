/*
* Generated on Thursday, January 14, 2021 at 2:20:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UITextRange *)resultRange;
-(id)targetedPreviewProvider;
-(id)initWithRange:(id)arg1 targetedPreviewProvider:(/*^block*/id)arg2 ;
@end

