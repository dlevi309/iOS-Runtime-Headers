/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)authorizationCellForIndexPath:(id)arg1 title:(id)arg2 state:(id)arg3 delegate:(id)arg4 tableView:(id)arg5 ;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(UISwitch *)toggle;
-(id<SRAuthorizationCellDelegate>)delegate;
-(NSIndexPath *)indexPath;
-(void)setDelegate:(id<SRAuthorizationCellDelegate>)arg1 ;
-(void)setToggle:(UISwitch *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
-(void)switchChanged;
@end

