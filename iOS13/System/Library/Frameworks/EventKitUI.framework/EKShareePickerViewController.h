/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/EKEventAttendeePickerDelegate.h>

@protocol EKShareePickerViewControllerDelegate;
@class EKCalendarShareePicker, NSArray, NSString;

@interface EKShareePickerViewController : UIViewController <EKEventAttendeePickerDelegate> {

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
-(id<EKShareePickerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<EKShareePickerViewControllerDelegate>)arg1 ;
-(void)cancel;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(void)setSearchAccountID:(id)arg1 ;
-(NSArray *)sharees;
-(void)setSharees:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 calendar:(id)arg2 ;
-(void)add;
-(id)_createShareeFromRecipient:(id)arg1 ;
-(id)_createRecipientFromSharee:(id)arg1 ;
-(id)_shareeFromRecipient:(id)arg1 ;
-(id)_recipientFromSharee:(id)arg1 ;
-(void)eventAttendeePicker:(id)arg1 cacheValidationStatus:(unsigned long long)arg2 forAddress:(id)arg3 ;
-(unsigned long long)eventAttendeePicker:(id)arg1 getValidationStatusForAddress:(id)arg2 ;
@end

