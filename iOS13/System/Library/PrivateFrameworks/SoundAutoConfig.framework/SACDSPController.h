/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoundAutoConfig.framework/SoundAutoConfig
*/

#import <libobjc.A.dylib/SACServiceDSPDelegate.h>

@protocol SACServiceDelegate, SACServiceDSPDelegate, SACDSPDelegate;
@class NSXPCConnection, NSString;

@interface SACDSPController : NSObject <SACServiceDSPDelegate> {

	NSXPCConnection* mServiceConnection;
	id<SACServiceDelegate> mProxyInterface;
	id<SACServiceDSPDelegate> mSACDSPDelegate;
	id<SACDSPDelegate> _delegate;

}

@property (assign,nonatomic) id<SACDSPDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<SACDSPDelegate>)delegate;
-(void)setDelegate:(id<SACDSPDelegate>)arg1 ;
-(void)startServiceConnection;
-(void)handleServiceCrash;
-(void)setDSPConfig:(id)arg1 ;
-(void)getDSPInfoByKey:(id)arg1 withReply:(/*^block*/id)arg2 ;
@end

