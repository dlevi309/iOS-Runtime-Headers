/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UITableViewHeaderFooterView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol HUAboutResidentDeviceFooterViewDelegate;
@class UITextView, NSMutableArray, NSString;

@interface HUAboutResidentDeviceFooterView : UITableViewHeaderFooterView <UITextViewDelegate> {

	id<HUAboutResidentDeviceFooterViewDelegate> _delegate;
	UITextView* _messageView;
	NSMutableArray* _constraints;
	UIEdgeInsets _messageInsets;

}

@property (nonatomic,retain) UITextView * messageView;                                                 //@synthesize messageView=_messageView - In the implementation block
@property (nonatomic,retain) NSMutableArray * constraints;                                             //@synthesize constraints=_constraints - In the implementation block
@property (assign,nonatomic,__weak) id<HUAboutResidentDeviceFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets messageInsets;                                               //@synthesize messageInsets=_messageInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableArray *)constraints;
-(void)setConstraints:(NSMutableArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(id<HUAboutResidentDeviceFooterViewDelegate>)delegate;
-(void)setDelegate:(id<HUAboutResidentDeviceFooterViewDelegate>)arg1 ;
-(void)updateConstraints;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_linkTextAttributes;
-(id)initWithCoder:(id)arg1 ;
-(void)_setupViews;
-(id)_textAttributes;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)setMessageInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)messageInsets;
-(UITextView *)messageView;
-(void)setMessageView:(UITextView *)arg1 ;
@end

