/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <VideoSubscriberAccountUI/VSCredentialEntryField.h>
#import <libobjc.A.dylib/IKAppKeyboardDelegate.h>

@class IKTextFieldElement, NSString;

@interface VSITMLCredentialEntryField : VSCredentialEntryField <IKAppKeyboardDelegate> {

	IKTextFieldElement* _associatedTextFieldElement;

}

@property (nonatomic,retain) IKTextFieldElement * associatedTextFieldElement;              //@synthesize associatedTextFieldElement=_associatedTextFieldElement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)textDidChangeForKeyboard:(id)arg1 ;
-(void)setAssociatedTextFieldElement:(IKTextFieldElement *)arg1 ;
-(IKTextFieldElement *)associatedTextFieldElement;
@end

