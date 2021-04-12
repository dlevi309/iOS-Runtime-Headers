/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/

#import <Pegasus/Pegasus-Structs.h>
#import <UIKitCore/UIView.h>

@class _UIRemoteView, BKSTouchDeliveryPolicyAssertion, PGHostedWindowHostingHandle;

@interface PGLayerHostView : UIView {

	_UIRemoteView* _remoteView;
	BKSTouchDeliveryPolicyAssertion* _touchDeliveryPolicyAssertion;
	double _cornerRadiusScale;
	double _cornerRadius;
	BOOL _ignoreCornerRadiusUpdates;

}

@property (nonatomic,retain) PGHostedWindowHostingHandle * hostedWindowHostingHandle; 
@property (assign,nonatomic) double cornerRadiusScale;                                             //@synthesize cornerRadiusScale=_cornerRadiusScale - In the implementation block
@property (assign,nonatomic) BOOL ignoreCornerRadiusUpdates;                                       //@synthesize ignoreCornerRadiusUpdates=_ignoreCornerRadiusUpdates - In the implementation block
-(PGHostedWindowHostingHandle *)hostedWindowHostingHandle;
-(void)setHostedWindowHostingHandle:(PGHostedWindowHostingHandle *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(void)didMoveToWindow;
-(void)dealloc;
-(void)_manageSharingOfTouchesBetweenClientAndHostContext;
-(void)setCornerRadiusScale:(double)arg1 ;
-(double)cornerRadiusScale;
-(BOOL)ignoreCornerRadiusUpdates;
-(void)setIgnoreCornerRadiusUpdates:(BOOL)arg1 ;
@end

