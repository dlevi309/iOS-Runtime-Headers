/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXGestureProviderDelegate;
@class NSArray, UIView;

@interface PXGestureProvider : NSObject {

	NSArray* _gestureRecognizers;
	id<PXGestureProviderDelegate> _delegate;
	UIView* _hostingView;

}

@property (nonatomic,readonly) NSArray * gestureRecognizers;                             //@synthesize gestureRecognizers=_gestureRecognizers - In the implementation block
@property (assign,nonatomic,__weak) id<PXGestureProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIView * hostingView;                                //@synthesize hostingView=_hostingView - In the implementation block
-(void)setHostingView:(UIView *)arg1 ;
-(id<PXGestureProviderDelegate>)delegate;
-(void)setDelegate:(id<PXGestureProviderDelegate>)arg1 ;
-(UIView *)hostingView;
-(NSArray *)gestureRecognizers;
-(void)hostingViewDidChange;
@end

