/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNVisualIdentityPickerViewController.h>

@protocol CNPhotoPickerViewControllerDelegate;
@class CNMutableContact, NSString;

@interface CNPhotoPickerViewController : CNVisualIdentityPickerViewController {

	id<CNPhotoPickerViewControllerDelegate> delegate;
	CNMutableContact* _pendingEditContact;

}

@property (nonatomic,retain) CNMutableContact * pendingEditContact;                                //@synthesize pendingEditContact=_pendingEditContact - In the implementation block
@property (nonatomic,retain) NSString * assignActionTitleOverride; 
@property (assign,nonatomic,__weak) id<CNPhotoPickerViewControllerDelegate> delegate; 
+(id)log;
+(BOOL)canShowAvatarEditor;
+(id)navigationControllerForPicker:(id)arg1 ;
+(id)photoPickerForGameCenterWithContact:(id)arg1 ;
-(void)updateHeaderViewAvatar;
-(id<CNPhotoPickerViewControllerDelegate>)delegate;
-(void)cancel:(id)arg1 ;
-(void)done:(id)arg1 ;
-(void)setDelegate:(id<CNPhotoPickerViewControllerDelegate>)arg1 ;
-(id)contactViewCache;
-(id)initWithContact:(id)arg1 style:(id)arg2 configuration:(id)arg3 ;
-(void)updatePendingEditContact;
-(void)photoViewDidUpdate:(id)arg1 ;
-(void)photoView:(id)arg1 didSaveImageDropToContact:(id)arg2 ;
-(id)viewControllerForPhotoView:(id)arg1 ;
-(CNMutableContact *)pendingEditContact;
-(void)setPendingEditContact:(CNMutableContact *)arg1 ;
@end

