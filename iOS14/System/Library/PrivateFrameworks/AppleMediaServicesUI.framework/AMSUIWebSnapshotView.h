/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServicesUI/AMSUICommonView.h>

@class UIView;

@interface AMSUIWebSnapshotView : AMSUICommonView {

	UIView* _snapshot;

}

@property (nonatomic,retain) UIView * snapshot;              //@synthesize snapshot=_snapshot - In the implementation block
+(void)_screenCapFromView:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)_imageViewForImage:(id)arg1 ;
-(UIView *)snapshot;
-(void)setSnapshot:(UIView *)arg1 ;
-(void)layoutSubviews;
-(void)_updateSnapshot:(id)arg1 ;
-(id)initWithView:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

