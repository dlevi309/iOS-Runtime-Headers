/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoundAutoConfig.framework/SoundAutoConfig
*/

#import <libobjc.A.dylib/SACServiceSYSDelegate.h>

@protocol SACServiceDelegate, SACServiceSYSDelegate, SACSYSDelegate;
@class NSXPCConnection, NSString;

@interface SACSYSController : NSObject <SACServiceSYSDelegate> {

	NSXPCConnection* mServiceConnection;
	id<SACServiceDelegate> mProxyInterface;
	id<SACServiceSYSDelegate> mSACSYSDelegate;
	id<SACSYSDelegate> _delegate;

}

@property (assign,nonatomic) id<SACSYSDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<SACSYSDelegate>)delegate;
-(void)setDelegate:(id<SACSYSDelegate>)arg1 ;
-(void)startServiceConnection;
-(void)handleServiceCrash;
-(void)setSYSConfig:(id)arg1 ;
@end

