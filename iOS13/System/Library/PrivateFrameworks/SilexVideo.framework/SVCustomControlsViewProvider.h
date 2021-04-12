/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVCustomControlsViewProviding.h>

@protocol SVCustomControlsLayoutGuideProviding, SVVideoViewControllerProviding;
@class UIView, NSString;

@interface SVCustomControlsViewProvider : NSObject <SVCustomControlsViewProviding> {

	UIView* _controlsView;
	id<SVCustomControlsLayoutGuideProviding> _layoutGuideProvider;
	id<SVVideoViewControllerProviding> _viewControllerProvider;

}

@property (nonatomic,readonly) id<SVVideoViewControllerProviding> viewControllerProvider;                 //@synthesize viewControllerProvider=_viewControllerProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * controlsView;                                                     //@synthesize controlsView=_controlsView - In the implementation block
@property (nonatomic,readonly) id<SVCustomControlsLayoutGuideProviding> layoutGuideProvider;              //@synthesize layoutGuideProvider=_layoutGuideProvider - In the implementation block
-(UIView *)controlsView;
-(id<SVCustomControlsLayoutGuideProviding>)layoutGuideProvider;
-(id)initWithViewControllerProvider:(id)arg1 layoutGuideProvider:(id)arg2 ;
-(id<SVVideoViewControllerProviding>)viewControllerProvider;
@end

