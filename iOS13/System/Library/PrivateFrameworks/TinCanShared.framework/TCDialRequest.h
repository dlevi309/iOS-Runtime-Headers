/*
* Generated on Monday, March 1, 2021 at 2:35:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
*/

#import <TelephonyUtilities/TUDialRequest.h>

@interface TCDialRequest : TUDialRequest {

	BOOL _remoteUplinkMuted;
	unsigned long long _state;

}

@property (assign,nonatomic) unsigned long long state;                                       //@synthesize state=_state - In the implementation block
@property (assign,getter=isRemoteUplinkMuted,nonatomic) BOOL remoteUplinkMuted;              //@synthesize remoteUplinkMuted=_remoteUplinkMuted - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(unsigned long long)state;
-(id)URL;
-(void)setState:(unsigned long long)arg1 ;
-(BOOL)isRemoteUplinkMuted;
-(void)setRemoteUplinkMuted:(BOOL)arg1 ;
@end

