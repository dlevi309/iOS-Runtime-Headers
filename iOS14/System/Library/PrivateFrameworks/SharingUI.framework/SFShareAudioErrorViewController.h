/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setDismissButton:(UIButton *)arg1 ;
-(UILabel *)infoLabel;
-(void)setInfoLabel:(UILabel *)arg1 ;
-(UIButton *)dismissButton;
-(void)eventDismiss:(id)arg1 ;
-(UILabel *)internalLabel;
-(void)setInternalLabel:(UILabel *)arg1 ;
@end

