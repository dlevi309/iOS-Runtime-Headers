/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIIndirectScribbleInteractionDelegate.h>

@class JFXTextEffectEditorTextView, UIView, JFXEffectTextEditingProperties, NSUUID, JFXOverlayEffectDebugViewOptions, NSString;

@interface JFXTextEffectEditorView : UIView <UIIndirectScribbleInteractionDelegate> {

	JFXTextEffectEditorTextView* _editField;
	UIView* _transformView;
	JFXEffectTextEditingProperties* _textEditingProperties;
	NSUUID* _pencilTextEditingElementID;
	JFXOverlayEffectDebugViewOptions* _debugOptions;
	UIView* _debugView;

}

@property (nonatomic,retain) JFXTextEffectEditorTextView * editField;                             //@synthesize editField=_editField - In the implementation block
@property (nonatomic,retain) JFXEffectTextEditingProperties * textEditingProperties;              //@synthesize textEditingProperties=_textEditingProperties - In the implementation block
@property (nonatomic,retain) UIView * transformView;                                              //@synthesize transformView=_transformView - In the implementation block
@property (nonatomic,retain) NSUUID * pencilTextEditingElementID;                                 //@synthesize pencilTextEditingElementID=_pencilTextEditingElementID - In the implementation block
@property (nonatomic,retain) JFXOverlayEffectDebugViewOptions * debugOptions;                     //@synthesize debugOptions=_debugOptions - In the implementation block
@property (nonatomic,retain) UIView * debugView;                                                  //@synthesize debugView=_debugView - In the implementation block
@property (nonatomic,readonly) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)selectAll;
-(void)setDebugOptions:(JFXOverlayEffectDebugViewOptions *)arg1 ;
-(CGRect)indirectScribbleInteraction:(id)arg1 frameForElement:(id)arg2 ;
-(JFXOverlayEffectDebugViewOptions *)debugOptions;
-(UIView *)debugView;
-(void)endEditing;
-(NSString *)text;
-(BOOL)indirectScribbleInteraction:(id)arg1 isElementFocused:(id)arg2 ;
-(UIView *)transformView;
-(void)indirectScribbleInteraction:(id)arg1 focusElementIfNeeded:(id)arg2 referencePoint:(CGPoint)arg3 completion:(/*^block*/id)arg4 ;
-(void)setDebugView:(UIView *)arg1 ;
-(void)indirectScribbleInteraction:(id)arg1 requestElementsInRect:(CGRect)arg2 completion:(/*^block*/id)arg3 ;
-(JFXEffectTextEditingProperties *)textEditingProperties;
-(void)applyTextEditingProperties:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 textEditingProperties:(id)arg2 ;
-(JFXTextEffectEditorTextView *)editField;
-(void)setTextEditingProperties:(JFXEffectTextEditingProperties *)arg1 ;
-(void)setTransformView:(UIView *)arg1 ;
-(void)setEditField:(JFXTextEffectEditorTextView *)arg1 ;
-(void)setPencilTextEditingElementID:(NSUUID *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 textEditingProperties:(id)arg2 textContainer:(id)arg3 ;
-(NSUUID *)pencilTextEditingElementID;
@end

