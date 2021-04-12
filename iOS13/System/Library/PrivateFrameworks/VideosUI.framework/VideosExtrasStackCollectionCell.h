/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/UICollectionViewCell.h>

@class NSArray, VideosExtrasStackTemplateViewController, VideosExtrasGridElementViewController, VideosExtrasGridSectionHeaderStyle;

@interface VideosExtrasStackCollectionCell : UICollectionViewCell {

	NSArray* _fitConstraints;
	BOOL _needsViewWillAppear;
	VideosExtrasStackTemplateViewController* _parentViewController;
	VideosExtrasGridElementViewController* _viewController;
	VideosExtrasGridSectionHeaderStyle* _sectionStyle;

}

@property (nonatomic,retain) VideosExtrasStackTemplateViewController * parentViewController;              //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,retain) VideosExtrasGridElementViewController * viewController;                      //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) VideosExtrasGridSectionHeaderStyle * sectionStyle;                         //@synthesize sectionStyle=_sectionStyle - In the implementation block
-(void)setViewController:(VideosExtrasGridElementViewController *)arg1 ;
-(VideosExtrasStackTemplateViewController *)parentViewController;
-(VideosExtrasGridElementViewController *)viewController;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)setParentViewController:(VideosExtrasStackTemplateViewController *)arg1 ;
-(VideosExtrasGridSectionHeaderStyle *)sectionStyle;
@end

