/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI
*/

#import <UIKitCore/UITableViewCell.h>

@protocol SRAuthorizationCellDelegate;
@class UISwitch, NSIndexPath;

@interface SRAuthorizationCell : UITableViewCell {

	UISwitch* _toggle;
	NSIndexPath* _indexPath;
	id<SRAuthorizationCellDelegate> _delegate;

}

@property (nonatomic,retain) UISwitch * toggle;                                            //@synthesize toggle=_toggle - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPath;                                      //@synthesize indexPath=_indexPath - In the implementation block
@property (assign,nonatomic,__weak) id<SRAuthorizationCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<SRAuthorizationCellDelegate>)delegate;
-(void)setDelegate:(id<SRAuthorizationCellDelegate>)arg1 ;
-(NSIndexPath *)indexPath;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(UISwitch *)toggle;
-(void)setToggle:(UISwitch *)arg1 ;
-(void)switchChanged;
@end

