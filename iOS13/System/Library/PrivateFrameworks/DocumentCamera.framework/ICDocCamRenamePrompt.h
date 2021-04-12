/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <DocumentCamera/DocumentCamera-Structs.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSString, UIAlertAction;

@interface ICDocCamRenamePrompt : NSObject <UITextFieldDelegate> {

	NSString* _existingTitle;
	UIAlertAction* _saveAction;
	ICDocCamRenamePrompt* _strongSelf;

}

@property (nonatomic,copy) NSString * existingTitle;                         //@synthesize existingTitle=_existingTitle - In the implementation block
@property (nonatomic,retain) UIAlertAction * saveAction;                     //@synthesize saveAction=_saveAction - In the implementation block
@property (nonatomic,retain) ICDocCamRenamePrompt * strongSelf;              //@synthesize strongSelf=_strongSelf - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)textFieldChanged:(id)arg1 ;
-(ICDocCamRenamePrompt *)strongSelf;
-(void)setStrongSelf:(ICDocCamRenamePrompt *)arg1 ;
-(BOOL)isTitleValid:(id)arg1 error:(out id*)arg2 ;
-(id)initWithExistingTitle:(id)arg1 ;
-(void)showFromViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)existingTitle;
-(void)showSingleButtonAlertFromViewController:(id)arg1 withTitle:(id)arg2 message:(id)arg3 ;
-(void)setSaveAction:(UIAlertAction *)arg1 ;
-(void)enableAction:(id)arg1 withString:(id)arg2 ;
-(UIAlertAction *)saveAction;
-(id)stringByScrubbingStringForCollectionName:(id)arg1 ;
-(void)setExistingTitle:(NSString *)arg1 ;
@end

