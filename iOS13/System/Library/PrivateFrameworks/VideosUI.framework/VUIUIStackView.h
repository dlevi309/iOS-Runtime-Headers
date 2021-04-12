/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIStackView.h>

@interface VUIUIStackView : UIStackView {

	BOOL _axisFollowsDeviceOrientation;
	BOOL _alignmentFollowsDeviceOrientation;
	long long _lastOrientation;

}

@property (assign,nonatomic) long long lastOrientation;                           //@synthesize lastOrientation=_lastOrientation - In the implementation block
@property (assign,nonatomic) BOOL axisFollowsDeviceOrientation;                   //@synthesize axisFollowsDeviceOrientation=_axisFollowsDeviceOrientation - In the implementation block
@property (assign,nonatomic) BOOL alignmentFollowsDeviceOrientation;              //@synthesize alignmentFollowsDeviceOrientation=_alignmentFollowsDeviceOrientation - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)lastOrientation;
-(void)setLastOrientation:(long long)arg1 ;
-(void)setAxisFollowsDeviceOrientation:(BOOL)arg1 ;
-(void)setAlignmentFollowsDeviceOrientation:(BOOL)arg1 ;
-(BOOL)axisFollowsDeviceOrientation;
-(BOOL)alignmentFollowsDeviceOrientation;
@end

