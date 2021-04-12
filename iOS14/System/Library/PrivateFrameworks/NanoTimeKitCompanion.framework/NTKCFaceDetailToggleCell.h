/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UISwitch *)toggle;
-(id<NTKCFaceDetailToggleCellDelegate>)delegate;
-(void)setOn:(BOOL)arg1 ;
-(void)setDelegate:(id<NTKCFaceDetailToggleCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(double)rowHeight;
-(void)setToggle:(UISwitch *)arg1 ;
-(BOOL)on;
-(void)_switchToggled;
@end

