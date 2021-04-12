/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UITextFieldEditingProcessorDelegate;
@interface _UITextFieldEditingProcessor : NSObject {

	id<_UITextFieldEditingProcessorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_UITextFieldEditingProcessorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_UITextFieldEditingProcessorDelegate>)delegate;
-(id)overridingEditingAttributesForAttributes:(id)arg1 withOverrides:(id)arg2 ;
-(id)beginEditingWithTextStorage:(id)arg1 ;
-(void)setDelegate:(id<_UITextFieldEditingProcessorDelegate>)arg1 ;
@end

