/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDAccessoryAdvertisement.h>

@class NSData;

@interface HMDHAPAccessoryAdvertisement : HMDAccessoryAdvertisement {

	BOOL _pairingPresent;
	NSData* _setupHash;

}

@property (nonatomic,readonly) BOOL pairingPresent;              //@synthesize pairingPresent=_pairingPresent - In the implementation block
@property (nonatomic,retain) NSData * setupHash;                 //@synthesize setupHash=_setupHash - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSData *)setupHash;
-(void)setSetupHash:(NSData *)arg1 ;
-(BOOL)pairingPresent;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 categoryIdentifier:(id)arg3 pairingPresent:(BOOL)arg4 setupHash:(id)arg5 ;
@end

