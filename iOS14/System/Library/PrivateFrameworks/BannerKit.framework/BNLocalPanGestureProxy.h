/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
*/

#import <BannerKit/BannerKit-Structs.h>
#import <libobjc.A.dylib/BNPanGestureProxyPrivate.h>

@protocol BNPanGestureProxyDelegate;
@class UIPanGestureRecognizer, UIView, NSString;

@interface BNLocalPanGestureProxy : NSObject <BNPanGestureProxyPrivate> {

	UIPanGestureRecognizer* _panGesture;
	UIView* _containerView;
	BOOL _didCrossDefaultThreshold;
	long long _state;
	/*^block*/id _actionHandler;
	id<BNPanGestureProxyDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BNPanGestureProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long state;                                          //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id actionHandler;                                             //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,readonly) BOOL didCrossDefaultThreshold;                            //@synthesize didCrossDefaultThreshold=_didCrossDefaultThreshold - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<BNPanGestureProxyDelegate>)delegate;
-(id)actionHandler;
-(void)_handlePan:(id)arg1 ;
-(CGPoint)locationInCoordinateSpace:(id)arg1 ;
-(void)sendAction;
-(void)setActionHandler:(id)arg1 ;
-(void)setDelegate:(id<BNPanGestureProxyDelegate>)arg1 ;
-(long long)state;
-(CGPoint)visualTranslationInCoordinateSpace:(id)arg1 ;
-(BOOL)didCrossDefaultThreshold;
-(CGPoint)velocityInCoordinateSpace:(id)arg1 ;
-(CGPoint)translationInCoordinateSpace:(id)arg1 ;
-(id)initWithPanGestureRecognizer:(id)arg1 containerView:(id)arg2 ;
@end

