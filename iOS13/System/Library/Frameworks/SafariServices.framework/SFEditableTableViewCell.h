/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setEnabled:(BOOL)arg1 ;
-(id<SFEditableTableViewCellDelegate>)delegate;
-(void)setDelegate:(id<SFEditableTableViewCellDelegate>)arg1 ;
-(BOOL)isEnabled;
-(void)tintColorDidChange;
-(id)initWithEnabledState:(BOOL)arg1 ;
-(void)safari_sharePassword:(id)arg1 ;
-(void)_updateTextFieldTextColor;
@end

