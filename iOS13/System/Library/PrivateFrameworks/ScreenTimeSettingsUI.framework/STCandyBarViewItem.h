/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/


@class UIImageView, NSLayoutConstraint;

@interface STCandyBarViewItem : NSObject {

	UIImageView* _sectionView;
	NSLayoutConstraint* _widthConstraint;

}

@property (nonatomic,retain) UIImageView * sectionView;                         //@synthesize sectionView=_sectionView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * widthConstraint;              //@synthesize widthConstraint=_widthConstraint - In the implementation block
-(id)init;
-(NSLayoutConstraint *)widthConstraint;
-(void)setWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(UIImageView *)sectionView;
-(void)setSectionView:(UIImageView *)arg1 ;
@end

