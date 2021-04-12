/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXHorizontalCollectionGadget.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>

@class NSString;

@interface _PXSurveyQuestionsHorizontalCollectionGadget : PXHorizontalCollectionGadget <MFMailComposeViewControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)accessoryButtonTitle;
-(unsigned long long)accessoryButtonType;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
-(/*^block*/id)accessoryButtonAction;
-(void)_hideAccessoryButtonAction;
-(void)_infoAccessoryButtonAction;
-(void)_hideSurveyQuestionsUntilDate:(id)arg1 ;
-(void)_sendRequestConsentFormMail;
-(unsigned long long)headerStyle;
@end

