/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKCDetailTableViewCell.h>

@protocol NTKCFaceDetailToggleCellDelegate;
@class UISwitch;

@interface NTKCFaceDetailToggleCell : NTKCDetailTableViewCell {

	id<NTKCFaceDetailToggleCellDelegate> _delegate;
	UISwitch* _toggle;

}

@property (nonatomic,retain) UISwitch * toggle;                                                 //@synthesize toggle=_toggle - In the implementation block
@property (assign,nonatomic) BOOL on; 
@property (assign,nonatomic,__weak) id<NTKCFaceDetailToggleCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)reuseIdentifier;
-(id)init;
-(id<NTKCFaceDetailToggleCellDelegate>)delegate;
-(void)setDelegate:(id<NTKCFaceDetailToggleCellDelegate>)arg1 ;
-(BOOL)on;
-(void)layoutSubviews;
-(double)rowHeight;
-(void)setOn:(BOOL)arg1 ;
-(UISwitch *)toggle;
-(void)setToggle:(UISwitch *)arg1 ;
-(void)_switchToggled;
@end

