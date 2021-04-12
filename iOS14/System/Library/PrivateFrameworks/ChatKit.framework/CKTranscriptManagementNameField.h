/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(_UIBackdropView *)backdropView;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(void)layoutMarginsDidChange;
-(UILabel *)fieldLabel;
-(void)setIsOverlay:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTopSeparator:(UIView *)arg1 ;
-(void)setBottomSeparator:(UIView *)arg1 ;
-(void)commitGroupName;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(id<CKTranscriptManagementNameFieldDelegate>)delegate;
-(void)setFieldLabel:(UILabel *)arg1 ;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(void)setTextField:(UITextField *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setDelegate:(id<CKTranscriptManagementNameFieldDelegate>)arg1 ;
-(BOOL)isOverlay;
-(void)layoutSubviews;
-(UITextField *)textField;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(BOOL)isEnabled;
-(UIView *)bottomSeparator;
-(UIView *)topSeparator;
-(void)dealloc;
@end

