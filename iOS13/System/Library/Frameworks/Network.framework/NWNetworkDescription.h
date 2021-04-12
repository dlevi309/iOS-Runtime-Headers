/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/


#import <Network/Network-Structs.h>
@class NSSet, NSURL, NSString;

@interface NWNetworkDescription : NSObject {

	NSSet* _interfaceTypeOptions;
	NSSet* _ssidOptions;
	NSSet* _dnsSearchDomainOptions;
	NSSet* _dnsServerAddressOptions;
	long long _roamingPreference;
	NSURL* _probeURL;
	long long _state;

}

@property (assign) long long state;                                        //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSString * privateDescription; 
@property (copy) NSSet * interfaceTypeOptions;                             //@synthesize interfaceTypeOptions=_interfaceTypeOptions - In the implementation block
@property (copy) NSSet * ssidOptions;                                      //@synthesize ssidOptions=_ssidOptions - In the implementation block
@property (copy) NSSet * dnsSearchDomainOptions;                           //@synthesize dnsSearchDomainOptions=_dnsSearchDomainOptions - In the implementation block
@property (copy) NSSet * dnsServerAddressOptions;                          //@synthesize dnsServerAddressOptions=_dnsServerAddressOptions - In the implementation block
@property (assign) long long roamingPreference;                            //@synthesize roamingPreference=_roamingPreference - In the implementation block
@property (copy) NSURL * probeURL;                                         //@synthesize probeURL=_probeURL - In the implementation block
+(long long)getNewStateFromPathMatch:(BOOL)arg1 oldState:(long long)arg2 probeExists:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(NSString *)privateDescription;
-(BOOL)matchesPath:(id)arg1 ;
-(void)updateStateWithPath:(id)arg1 ;
-(NSSet *)interfaceTypeOptions;
-(void)setInterfaceTypeOptions:(NSSet *)arg1 ;
-(NSSet *)ssidOptions;
-(void)setSsidOptions:(NSSet *)arg1 ;
-(NSSet *)dnsSearchDomainOptions;
-(void)setDnsSearchDomainOptions:(NSSet *)arg1 ;
-(NSSet *)dnsServerAddressOptions;
-(void)setDnsServerAddressOptions:(NSSet *)arg1 ;
-(long long)roamingPreference;
-(void)setRoamingPreference:(long long)arg1 ;
-(NSURL *)probeURL;
-(void)setProbeURL:(NSURL *)arg1 ;
@end

