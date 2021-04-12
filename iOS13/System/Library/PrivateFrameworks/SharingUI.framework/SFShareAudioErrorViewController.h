/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
*/

#import <SharingUI/SFShareAudioBaseViewController.h>

@class UILabel, UIButton, NSError;

@interface SFShareAudioErrorViewController : SFShareAudioBaseViewController {

	UILabel* _infoLabel;
	UILabel* _internalLabel;
	UIButton* _dismissButton;
	NSError* _error;

}

@property (nonatomic,retain) UILabel * infoLabel;                   //@synthesize infoLabel=_infoLabel - In the implementation block
@property (nonatomic,retain) UILabel * internalLabel;               //@synthesize internalLabel=_internalLabel - In the implementation block
@property (nonatomic,retain) UIButton * dismissButton;              //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,copy) NSError * error;                         //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setDismissButton:(UIButton *)arg1 ;
-(UIButton *)dismissButton;
-(UILabel *)infoLabel;
-(void)setInfoLabel:(UILabel *)arg1 ;
-(void)eventDismiss:(id)arg1 ;
-(UILabel *)internalLabel;
-(void)setInternalLabel:(UILabel *)arg1 ;
@end

