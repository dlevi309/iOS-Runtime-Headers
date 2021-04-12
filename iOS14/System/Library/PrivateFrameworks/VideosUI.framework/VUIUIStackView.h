/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAxisFollowsDeviceOrientation:(BOOL)arg1 ;
-(void)setAlignmentFollowsDeviceOrientation:(BOOL)arg1 ;
-(BOOL)axisFollowsDeviceOrientation;
-(BOOL)alignmentFollowsDeviceOrientation;
-(void)setLastOrientation:(long long)arg1 ;
@end

