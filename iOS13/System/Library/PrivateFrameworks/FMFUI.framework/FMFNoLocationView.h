/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
*/

#import <FMFUI/FMFUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol FMFNoLocationViewDelegate;
@class NSLayoutConstraint, UIImage, UIImageView, UILabel, UIView;

@interface FMFNoLocationView : UIView {

	BOOL _blockLabelUpdates;
	id<FMFNoLocationViewDelegate> _delegate;
	NSLayoutConstraint* _topInsetConstraint;
	NSLayoutConstraint* _bottomInsetConstraint;
	UIImage* _offlineProfileImage;
	UIImageView* _offlineProfileImageView;
	UIImageView* _personImageView;
	UILabel* _detailsLabel;
	UIView* _blur;
	UIView* _insetView;

}

@property (nonatomic,retain) NSLayoutConstraint * topInsetConstraint;                    //@synthesize topInsetConstraint=_topInsetConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomInsetConstraint;                 //@synthesize bottomInsetConstraint=_bottomInsetConstraint - In the implementation block
@property (nonatomic,retain) UIImage * offlineProfileImage;                              //@synthesize offlineProfileImage=_offlineProfileImage - In the implementation block
@property (nonatomic,retain) UIImageView * offlineProfileImageView;                      //@synthesize offlineProfileImageView=_offlineProfileImageView - In the implementation block
@property (nonatomic,retain) UIImageView * personImageView;                              //@synthesize personImageView=_personImageView - In the implementation block
@property (nonatomic,retain) UILabel * detailsLabel;                                     //@synthesize detailsLabel=_detailsLabel - In the implementation block
@property (nonatomic,retain) UIView * blur;                                              //@synthesize blur=_blur - In the implementation block
@property (nonatomic,retain) UIView * insetView;                                         //@synthesize insetView=_insetView - In the implementation block
@property (assign,nonatomic,__weak) id<FMFNoLocationViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL blockLabelUpdates;                                     //@synthesize blockLabelUpdates=_blockLabelUpdates - In the implementation block
-(void)dealloc;
-(id<FMFNoLocationViewDelegate>)delegate;
-(void)setDelegate:(id<FMFNoLocationViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityLabel;
-(void)setAlpha:(double)arg1 ;
-(UIView *)blur;
-(void)updateLabel;
-(void)setBlur:(UIView *)arg1 ;
-(UILabel *)detailsLabel;
-(UIImage *)offlineProfileImage;
-(void)setOfflineProfileImageView:(UIImageView *)arg1 ;
-(void)setPersonImageView:(UIImageView *)arg1 ;
-(void)setDetailsLabel:(UILabel *)arg1 ;
-(void)setInsetView:(UIView *)arg1 ;
-(void)addLayoutConstraints;
-(void)updatePersonImageViewImage;
-(void)updateLabelNotification:(id)arg1 ;
-(void)setTopInsetConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBottomInsetConstraint:(NSLayoutConstraint *)arg1 ;
-(void)updateConstriantsForInsets;
-(BOOL)blockLabelUpdates;
-(UIImageView *)personImageView;
-(void)setOfflineProfileImage:(UIImage *)arg1 ;
-(void)setBlockLabelUpdates:(BOOL)arg1 ;
-(NSLayoutConstraint *)topInsetConstraint;
-(NSLayoutConstraint *)bottomInsetConstraint;
-(UIImageView *)offlineProfileImageView;
-(UIView *)insetView;
@end

