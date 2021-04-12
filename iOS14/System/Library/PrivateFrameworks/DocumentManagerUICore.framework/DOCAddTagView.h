/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UIScribbleInteractionDelegate.h>

@protocol DOCAddTagTextFieldDelegate;
@class DOCTagDotView, UILabel, UITextField, CAShapeLayer, NSString;

@interface DOCAddTagView : UIView <UITextFieldDelegate, UIScribbleInteractionDelegate> {

	id<DOCAddTagTextFieldDelegate> _delegate;
	DOCTagDotView* _tagDotView;
	UILabel* _addNewTagLabel;
	UITextField* _tagNameTextField;
	CAShapeLayer* _borderLayer;

}

@property (nonatomic,readonly) DOCTagDotView * tagDotView;                                //@synthesize tagDotView=_tagDotView - In the implementation block
@property (nonatomic,readonly) UILabel * addNewTagLabel;                                  //@synthesize addNewTagLabel=_addNewTagLabel - In the implementation block
@property (nonatomic,readonly) UITextField * tagNameTextField;                            //@synthesize tagNameTextField=_tagNameTextField - In the implementation block
@property (nonatomic,readonly) CAShapeLayer * borderLayer;                                //@synthesize borderLayer=_borderLayer - In the implementation block
@property (assign,nonatomic,__weak) id<DOCAddTagTextFieldDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)commit;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(id<DOCAddTagTextFieldDelegate>)delegate;
-(void)setDelegate:(id<DOCAddTagTextFieldDelegate>)arg1 ;
-(BOOL)scribbleInteractionShouldDelayFocus:(id)arg1 ;
-(void)layoutSubviews;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(NSString *)text;
-(void)scribbleInteractionWillBeginWriting:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)cancel;
-(CAShapeLayer *)borderLayer;
-(DOCTagDotView *)tagDotView;
-(void)configureBorderPath;
-(UILabel *)addNewTagLabel;
-(UITextField *)tagNameTextField;
@end

