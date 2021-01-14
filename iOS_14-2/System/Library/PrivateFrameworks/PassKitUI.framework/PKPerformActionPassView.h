/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithPass:(id)arg1 frame:(CGRect)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)shakeImage;
-(void)smallShakeImage;
-(void)_loadSnapshotView;
-(CGSize)_passImageSize;
-(void)_createSubviews;
@end

