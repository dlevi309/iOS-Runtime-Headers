/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/EKEventAttendeePickerDelegate.h>
#import <libobjc.A.dylib/EKUIManagedViewController.h>

@protocol EKShareePickerViewControllerDelegate;
@class EKCalendarShareePicker, NSArray, NSString;

@interface EKShareePickerViewController : UIViewController <EKEventAttendeePickerDelegate, EKUIManagedViewController> {

	EKCalendarShareePicker* _picker;
	id<EKShareePickerViewControllerDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSArray * sharees; 
@property (assign,nonatomic,__weak) id<EKShareePickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(void)add;
-(id<EKShareePickerViewControllerDelegate>)delegate;
-(NSArray *)sharees;
-(BOOL)wantsManagement;
-(BOOL)canManagePresentationStyle;
-(void)setDelegate:(id<EKShareePickerViewControllerDelegate>)arg1 ;
-(CGSize)preferredContentSize;
-(void)setSearchAccountID:(id)arg1 ;
-(void)viewDidLoad;
-(id)initWithFrame:(CGRect)arg1 calendar:(id)arg2 ;
-(id)_createShareeFromRecipient:(id)arg1 ;
-(id)_createRecipientFromSharee:(id)arg1 ;
-(id)_shareeFromRecipient:(id)arg1 ;
-(id)_recipientFromSharee:(id)arg1 ;
-(void)eventAttendeePicker:(id)arg1 cacheValidationStatus:(unsigned long long)arg2 forAddress:(id)arg3 ;
-(unsigned long long)eventAttendeePicker:(id)arg1 getValidationStatusForAddress:(id)arg2 ;
-(void)cancel;
-(void)setSharees:(NSArray *)arg1 ;
@end

