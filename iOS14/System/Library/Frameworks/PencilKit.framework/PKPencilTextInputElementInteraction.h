/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <libobjc.A.dylib/PKScribbleInteractionWrapperProvider.h>
#import <UIKit/UIInteraction.h>

@protocol PKScribbleInteractionWrapper, PKPencilTextInputElementInteractionDelegate;
@class UIView, NSString;

@interface PKPencilTextInputElementInteraction : NSObject <PKScribbleInteractionWrapperProvider, UIInteraction> {

	id<PKScribbleInteractionWrapper> _cachedWrapper;
	id<PKPencilTextInputElementInteractionDelegate> _delegate;
	UIView* _view;

}

@property (assign,nonatomic,__weak) UIView * view;                                                         //@synthesize view=_view - In the implementation block
@property (assign,nonatomic,__weak) id<PKPencilTextInputElementInteractionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_pencilTextInputElementInteractionInView:(id)arg1 ;
-(id<PKPencilTextInputElementInteractionDelegate>)delegate;
-(void)didMoveToView:(id)arg1 ;
-(id)scribbleInteractionWrapper;
-(void)willMoveToView:(id)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(void)setDelegate:(id<PKPencilTextInputElementInteractionDelegate>)arg1 ;
-(UIView *)view;
@end

