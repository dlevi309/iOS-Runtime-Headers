/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/

#import <Pegasus/Pegasus-Structs.h>
#import <UIKitCore/UIView.h>

@class _UIRemoteView, BKSTouchDeliveryPolicyAssertion, PGHostedWindowHostingHandle;

@interface PGLayerHostView : UIView {

	_UIRemoteView* _remoteView;
	BKSTouchDeliveryPolicyAssertion* _touchDeliveryPolicyAssertion;

}

@property (nonatomic,retain) PGHostedWindowHostingHandle * hostedWindowHostingHandle; 
@property (assign,nonatomic) CGAffineTransform layerHostTransform; 
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)setHostedWindowHostingHandle:(PGHostedWindowHostingHandle *)arg1 ;
-(PGHostedWindowHostingHandle *)hostedWindowHostingHandle;
-(void)_manageSharingOfTouchesBetweenClientAndHostContext;
-(CGAffineTransform)layerHostTransform;
-(void)setLayerHostTransform:(CGAffineTransform)arg1 ;
@end

