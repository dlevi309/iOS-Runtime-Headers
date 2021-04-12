/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoundAutoConfig.framework/SoundAutoConfig
*/

#import <libobjc.A.dylib/SACServiceInfoDelegate.h>

@protocol SACServiceDelegate, SACInfoDelegate;
@class NSXPCConnection, NSString;

@interface SACInfoListener : NSObject <SACServiceInfoDelegate> {

	NSXPCConnection* mServiceConnection;
	id<SACServiceDelegate> mProxyInterface;
	unsigned long long mVerbosity;
	id<SACInfoDelegate> _delegate;

}

@property (nonatomic,retain) id<SACInfoDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<SACInfoDelegate>)delegate;
-(void)setDelegate:(id<SACInfoDelegate>)arg1 ;
-(void)startServiceConnection;
-(void)handleServiceCrash;
-(void)handleSACInfo:(id)arg1 ;
-(void)setListenerVerbosity:(unsigned long long)arg1 ;
@end

