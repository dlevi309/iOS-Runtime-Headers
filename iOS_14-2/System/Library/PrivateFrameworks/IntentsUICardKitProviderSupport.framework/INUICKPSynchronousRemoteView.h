/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IntentsUICardKitProviderSupport.framework/IntentsUICardKitProviderSupport
*/

#import <IntentsUICardKitProviderSupport/IntentsUICardKitProviderSupport-Structs.h>
#import <UIKitCore/UIView.h>

@protocol INUICKPSynchronousRemoteViewDelegate;
@interface INUICKPSynchronousRemoteView : UIView {

	id<INUICKPSynchronousRemoteViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<INUICKPSynchronousRemoteViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<INUICKPSynchronousRemoteViewDelegate>)delegate;
-(void)setDelegate:(id<INUICKPSynchronousRemoteViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

