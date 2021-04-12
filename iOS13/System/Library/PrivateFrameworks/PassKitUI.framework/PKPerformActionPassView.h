/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKPerformActionBackdropView.h>

@class PKPass, PKPassSnapshotter, UIImageView;

@interface PKPerformActionPassView : PKPerformActionBackdropView {

	PKPass* _pass;
	PKPassSnapshotter* _snapshotter;
	UIImageView* _passView;

}
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_createSubviews;
-(id)initWithPass:(id)arg1 frame:(CGRect)arg2 ;
-(void)shakeImage;
-(void)smallShakeImage;
-(void)_loadSnapshotView;
-(CGSize)_passImageSize;
@end

