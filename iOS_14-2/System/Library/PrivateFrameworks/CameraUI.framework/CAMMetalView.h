/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CAMetalLayer *)metalLayer;
-(id<CAMMetalViewDelegate>)metalViewDelegate;
-(void)setMetalViewDelegate:(id<CAMMetalViewDelegate>)arg1 ;
@end

