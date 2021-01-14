/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)mtu;
-(void)open;
-(id<HAPStreamDelegate>)delegate;
-(void)close;
-(void)setDelegate:(id<HAPStreamDelegate>)arg1 ;
-(id)writeData:(id)arg1 error:(id*)arg2 ;
@end

