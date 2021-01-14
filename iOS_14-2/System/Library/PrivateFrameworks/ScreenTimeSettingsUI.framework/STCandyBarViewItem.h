/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIImageView *)sectionView;
-(void)setWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setSectionView:(UIImageView *)arg1 ;
@end

