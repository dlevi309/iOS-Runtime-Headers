/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)willMoveToSuperview:(id)arg1 ;
-(void)setViewController:(VideosExtrasGridElementViewController *)arg1 ;
-(VideosExtrasStackTemplateViewController *)parentViewController;
-(VideosExtrasGridElementViewController *)viewController;
-(void)setParentViewController:(VideosExtrasStackTemplateViewController *)arg1 ;
-(VideosExtrasGridSectionHeaderStyle *)sectionStyle;
@end

