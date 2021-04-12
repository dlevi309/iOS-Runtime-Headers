/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/IKAppKeyboardDelegate.h>
#import <TVMLKit/_TVSearchBarDelegate.h>

@class IKTextFieldElement, UITextField, NSString;

@interface _TVTextFieldViewController : UIViewController <IKAppKeyboardDelegate, _TVSearchBarDelegate> {

	IKTextFieldElement* _viewElement;

}

@property (nonatomic,retain,readonly) IKTextFieldElement * viewElement;              //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain,readonly) UITextField * textField; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(UITextField *)textField;
-(IKTextFieldElement *)viewElement;
-(void)textDidChangeForKeyboard:(id)arg1 ;
-(void)_updateViewLayout;
-(void)updateWithViewElement:(id)arg1 ;
-(void)searchBarDidChangeText:(id)arg1 ;
-(void)_updateKeyboardWithUserText;
-(void)_updateUserText;
@end

