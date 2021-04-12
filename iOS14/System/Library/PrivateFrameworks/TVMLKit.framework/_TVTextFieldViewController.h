/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_updateViewLayout;
-(UITextField *)textField;
-(void)loadView;
-(void)dealloc;
-(IKTextFieldElement *)viewElement;
-(void)updateWithViewElement:(id)arg1 ;
-(void)textDidChangeForKeyboard:(id)arg1 ;
-(void)searchBarDidChangeText:(id)arg1 ;
-(void)_updateKeyboardWithUserText;
-(void)_updateUserText;
@end

