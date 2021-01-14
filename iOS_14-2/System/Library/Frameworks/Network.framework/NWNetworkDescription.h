/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)privateDescription;
-(void)updateStateWithPath:(id)arg1 ;
-(NSSet *)ssidOptions;
-(void)setRoamingPreference:(long long)arg1 ;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(NSSet *)dnsServerAddressOptions;
-(id)description;
-(void)setSsidOptions:(NSSet *)arg1 ;
-(NSURL *)probeURL;
-(void)setProbeURL:(NSURL *)arg1 ;
-(NSSet *)interfaceTypeOptions;
-(void)setState:(long long)arg1 ;
-(unsigned long long)hash;
-(long long)state;
-(NSSet *)dnsSearchDomainOptions;
-(BOOL)matchesPath:(id)arg1 ;
-(void)setDnsSearchDomainOptions:(NSSet *)arg1 ;
-(long long)roamingPreference;
-(void)setDnsServerAddressOptions:(NSSet *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setInterfaceTypeOptions:(NSSet *)arg1 ;
@end

