/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/

#import <MobileMailUI/MobileMailUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface _MFMessageContentResizeWrapperView : UIView {

	UIView* _snapshotView;
	double _snapshotViewYOrigin;

}

@property (nonatomic,retain) UIView * snapshotView;                   //@synthesize snapshotView=_snapshotView - In the implementation block
@property (assign,nonatomic) double snapshotViewYOrigin;              //@synthesize snapshotViewYOrigin=_snapshotViewYOrigin - In the implementation block
-(UIView *)snapshotView;
-(void)setSnapshotView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(double)snapshotViewYOrigin;
-(id)initWithFrame:(CGRect)arg1 snapshotView:(id)arg2 ;
-(void)setSnapshotViewYOrigin:(double)arg1 ;
@end

