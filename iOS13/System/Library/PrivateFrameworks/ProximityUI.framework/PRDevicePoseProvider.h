/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProximityUI.framework/ProximityUI
*/


@protocol PRDevicePoseProviderDelegate;
@interface PRDevicePoseProvider : NSObject {

	id<PRDevicePoseProviderDelegate> _delegate;

}

@property (__weak) id<PRDevicePoseProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<PRDevicePoseProviderDelegate>)delegate;
-(void)setDelegate:(id<PRDevicePoseProviderDelegate>)arg1 ;
-(void)reset;
@end

