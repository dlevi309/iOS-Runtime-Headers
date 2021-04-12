/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)layoutSubviews;
-(UIView *)snapshotView;
-(void)setSnapshotView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 snapshotView:(id)arg2 ;
-(double)snapshotViewYOrigin;
-(void)setSnapshotViewYOrigin:(double)arg1 ;
@end

