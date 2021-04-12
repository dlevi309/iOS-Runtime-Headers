/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

