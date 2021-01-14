/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)pairingPresent;
-(NSData *)setupHash;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 categoryIdentifier:(id)arg3 pairingPresent:(BOOL)arg4 setupHash:(id)arg5 ;
-(void)setSetupHash:(NSData *)arg1 ;
@end

