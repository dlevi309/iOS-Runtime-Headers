/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
*/

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSArray, NSData, SPHandle, NSDate;

@interface SPUnknownBeacon : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isIgnored;
	NSUUID* _identifier;
	NSArray* _beaconLocations;
	NSData* _advertisement;
	NSUUID* _beaconIdentifier;
	SPHandle* _handle;
	NSDate* _triggerDate;
	NSDate* _ignoresUntilDate;

}

@property (nonatomic,copy) NSUUID * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSUUID * beaconIdentifier;              //@synthesize beaconIdentifier=_beaconIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * beaconLocations;              //@synthesize beaconLocations=_beaconLocations - In the implementation block
@property (nonatomic,copy) NSData * advertisement;                 //@synthesize advertisement=_advertisement - In the implementation block
@property (nonatomic,copy) SPHandle * handle;                      //@synthesize handle=_handle - In the implementation block
@property (assign,nonatomic) BOOL isIgnored;                       //@synthesize isIgnored=_isIgnored - In the implementation block
@property (nonatomic,copy) NSDate * triggerDate;                   //@synthesize triggerDate=_triggerDate - In the implementation block
@property (nonatomic,copy) NSDate * ignoresUntilDate;              //@synthesize ignoresUntilDate=_ignoresUntilDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setHandle:(SPHandle *)arg1 ;
-(SPHandle *)handle;
-(NSDate *)triggerDate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(BOOL)isIgnored;
-(void)setBeaconIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)beaconIdentifier;
-(NSArray *)beaconLocations;
-(void)setBeaconLocations:(NSArray *)arg1 ;
-(NSData *)advertisement;
-(void)setAdvertisement:(NSData *)arg1 ;
-(void)setIsIgnored:(BOOL)arg1 ;
-(NSDate *)ignoresUntilDate;
-(void)setIgnoresUntilDate:(NSDate *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTriggerDate:(NSDate *)arg1 ;
@end

