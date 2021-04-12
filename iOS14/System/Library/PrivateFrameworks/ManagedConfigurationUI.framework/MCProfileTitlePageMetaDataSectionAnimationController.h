/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <libobjc.A.dylib/MCUIScrollAnimationResponder.h>

@class MCProfileTitlePageMetaDataSectionController, UIView, UITableView, NSString;

@interface MCProfileTitlePageMetaDataSectionAnimationController : NSObject <MCUIScrollAnimationResponder> {

	MCProfileTitlePageMetaDataSectionController* _sectionController;
	UIView* _iconView;
	UIView* _titleView;
	UIView* _subtitleView;
	UIView* _orgView;
	UIView* _topBar;
	UITableView* _tableView;
	CGRect _iconViewOriginFrame;
	CGRect _titleLabelOriginFrame;

}

@property (assign,nonatomic,__weak) MCProfileTitlePageMetaDataSectionController * sectionController;              //@synthesize sectionController=_sectionController - In the implementation block
@property (assign,nonatomic,__weak) UIView * iconView;                                                            //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic,__weak) UIView * titleView;                                                           //@synthesize titleView=_titleView - In the implementation block
@property (assign,nonatomic,__weak) UIView * subtitleView;                                                        //@synthesize subtitleView=_subtitleView - In the implementation block
@property (assign,nonatomic,__weak) UIView * orgView;                                                             //@synthesize orgView=_orgView - In the implementation block
@property (assign,nonatomic,__weak) UIView * topBar;                                                              //@synthesize topBar=_topBar - In the implementation block
@property (assign,nonatomic,__weak) UITableView * tableView;                                                      //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) CGRect iconViewOriginFrame;                                                          //@synthesize iconViewOriginFrame=_iconViewOriginFrame - In the implementation block
@property (assign,nonatomic) CGRect titleLabelOriginFrame;                                                        //@synthesize titleLabelOriginFrame=_titleLabelOriginFrame - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)titleView;
-(UITableView *)tableView;
-(MCProfileTitlePageMetaDataSectionController *)sectionController;
-(void)setSectionController:(MCProfileTitlePageMetaDataSectionController *)arg1 ;
-(void)setTitleView:(UIView *)arg1 ;
-(UIView *)subtitleView;
-(void)setSubtitleView:(UIView *)arg1 ;
-(UIView *)iconView;
-(void)setIconView:(UIView *)arg1 ;
-(void)setTopBar:(UIView *)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UIView *)orgView;
-(UIView *)topBar;
-(void)setOrgView:(UIView *)arg1 ;
-(BOOL)_putBackViewIfNeeded:(id)arg1 toView:(id)arg2 ;
-(BOOL)_relocateViewIfNeeded:(id)arg1 fromView:(id)arg2 toView:(id)arg3 ;
-(void)setTitleLabelOriginFrame:(CGRect)arg1 ;
-(CGRect)titleLabelOriginFrame;
-(void)_animateView:(id)arg1 progress:(double)arg2 startFrame:(CGRect)arg3 endY:(double)arg4 endScale:(double)arg5 extraYOffset:(double)arg6 ;
-(void)setIconViewOriginFrame:(CGRect)arg1 ;
-(CGRect)iconViewOriginFrame;
-(void)updateProgressWithTranslationDistance:(double)arg1 referenceDistance:(double)arg2 isScrolling:(BOOL)arg3 ;
-(double)_alphaWithProgress:(double)arg1 keys:(id)arg2 values:(id)arg3 ;
-(unsigned long long)_binarySearch:(id)arg1 target:(double)arg2 ;
-(void)startTrackingWithMetaDataSectionController:(id)arg1 topBar:(id)arg2 ;
@end

