/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
*/

#import <SidecarCore/SidecarSessionDelegate.h>

@protocol SidecarServiceProviderDelegate;
@interface SidecarProviderProxy : NSObject <SidecarSessionDelegate> {

	id<SidecarServiceProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SidecarServiceProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)defaultProxy;
-(id)init;
-(id<SidecarServiceProviderDelegate>)delegate;
-(void)setDelegate:(id<SidecarServiceProviderDelegate>)arg1 ;
-(void)sidecarSessionStarted:(id)arg1 ;
-(void)sidecarSession:(id)arg1 receivedMessage:(id)arg2 ;
-(void)sidecarSession:(id)arg1 closedWithError:(id)arg2 ;
-(void)sidecarServiceTerminate;
@end

