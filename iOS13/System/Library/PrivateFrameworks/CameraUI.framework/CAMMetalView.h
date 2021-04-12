/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <UIKitCore/UIView.h>

@protocol CAMMetalViewDelegate;
@class CAMetalLayer;

@interface CAMMetalView : UIView {

	id<CAMMetalViewDelegate> _metalViewDelegate;

}

@property (nonatomic,retain) id<CAMMetalViewDelegate> metalViewDelegate;              //@synthesize metalViewDelegate=_metalViewDelegate - In the implementation block
@property (nonatomic,readonly) CAMetalLayer * metalLayer; 
+(Class)layerClass;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(CAMetalLayer *)metalLayer;
-(id<CAMMetalViewDelegate>)metalViewDelegate;
-(void)setMetalViewDelegate:(id<CAMMetalViewDelegate>)arg1 ;
@end

