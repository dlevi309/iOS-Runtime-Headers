/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol CKTranscriptManagementNameFieldDelegate;
@class UILabel, UITextField, UIView, _UIBackdropView, NSString;

@interface CKTranscriptManagementNameField : UIView <UITextFieldDelegate> {

	BOOL _isOverlay;
	BOOL _enabled;
	id<CKTranscriptManagementNameFieldDelegate> _delegate;
	UILabel* _fieldLabel;
	UITextField* _textField;
	UIView* _topSeparator;
	UIView* _bottomSeparator;
	_UIBackdropView* _backdropView;

}

@property (nonatomic,retain) UILabel * fieldLabel;                                                     //@synthesize fieldLabel=_fieldLabel - In the implementation block
@property (nonatomic,retain) UITextField * textField;                                                  //@synthesize textField=_textField - In the implementation block
@property (nonatomic,retain) UIView * topSeparator;                                                    //@synthesize topSeparator=_topSeparator - In the implementation block
@property (nonatomic,retain) UIView * bottomSeparator;                                                 //@synthesize bottomSeparator=_bottomSeparator - In the implementation block
@property (nonatomic,retain) _UIBackdropView * backdropView;                                           //@synthesize backdropView=_backdropView - In the implementation block
@property (assign,nonatomic,__weak) id<CKTranscriptManagementNameFieldDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * groupName; 
@property (assign,nonatomic) BOOL isOverlay;                                                           //@synthesize isOverlay=_isOverlay - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                            //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)preferredHeight;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(id<CKTranscriptManagementNameFieldDelegate>)delegate;
-(void)setDelegate:(id<CKTranscriptManagementNameFieldDelegate>)arg1 ;
-(BOOL)isEnabled;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UITextField *)textField;
-(void)layoutMarginsDidChange;
-(_UIBackdropView *)backdropView;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(void)setFieldLabel:(UILabel *)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)setIsOverlay:(BOOL)arg1 ;
-(BOOL)isOverlay;
-(void)setTextField:(UITextField *)arg1 ;
-(UIView *)bottomSeparator;
-(UILabel *)fieldLabel;
-(void)setTopSeparator:(UIView *)arg1 ;
-(UIView *)topSeparator;
-(void)setBottomSeparator:(UIView *)arg1 ;
-(void)commitGroupName;
@end

