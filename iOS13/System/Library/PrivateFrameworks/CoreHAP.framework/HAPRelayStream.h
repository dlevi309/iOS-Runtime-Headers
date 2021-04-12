/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@protocol HAPStreamDelegate;
@interface HAPRelayStream : HMFObject {

	id<HAPStreamDelegate> _delegate;
	unsigned long long _mtu;

}

@property (__weak) id<HAPStreamDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long mtu;              //@synthesize mtu=_mtu - In the implementation block
-(void)open;
-(void)close;
-(id<HAPStreamDelegate>)delegate;
-(void)setDelegate:(id<HAPStreamDelegate>)arg1 ;
-(id)writeData:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)mtu;
@end

