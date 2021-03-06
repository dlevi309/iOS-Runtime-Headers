/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@protocol HAPRelayPairingClientDelegate;
@class NSURL;

@interface HAPRelayPairingClient : HMFObject {

	id<HAPRelayPairingClientDelegate> _delegate;
	NSURL* _accessoryBagURL;

}

@property (__weak) id<HAPRelayPairingClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSURL * accessoryBagURL;                     //@synthesize accessoryBagURL=_accessoryBagURL - In the implementation block
-(void)open;
-(id<HAPRelayPairingClientDelegate>)delegate;
-(void)close;
-(void)setDelegate:(id<HAPRelayPairingClientDelegate>)arg1 ;
-(NSURL *)accessoryBagURL;
-(void)requestControllerIdentifier;
-(void)requestAccessTokenForAccessoryIdentifier:(id)arg1 pairingToken:(id)arg2 ;
@end

