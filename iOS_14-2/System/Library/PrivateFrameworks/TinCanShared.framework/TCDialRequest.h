/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRemoteUplinkMuted:(BOOL)arg1 ;
-(id)URL;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(BOOL)isRemoteUplinkMuted;
@end

