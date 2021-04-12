/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UITableViewCell.h>

@protocol SFEditableTableViewCellDelegate;
@interface SFEditableTableViewCell : UITableViewCell {

	BOOL _enabled;
	id<SFEditableTableViewCellDelegate> _delegate;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                    //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic,__weak) id<SFEditableTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)copy:(id)arg1 ;
-(void)tintColorDidChange;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)initWithEnabledState:(BOOL)arg1 ;
-(id<SFEditableTableViewCellDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setDelegate:(id<SFEditableTableViewCellDelegate>)arg1 ;
-(void)_updateTextFieldTextColor;
-(BOOL)isEnabled;
@end

