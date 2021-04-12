/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
*/

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSArray, NSData, SPHandle;

@interface SPUnknownBeacon : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isIgnored;
	NSUUID* _identifier;
	NSArray* _beaconLocations;
	NSData* _advertisement;
	SPHandle* _handle;

}

@property (nonatomic,copy) NSUUID * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSArray * beaconLocations;              //@synthesize beaconLocations=_beaconLocations - In the implementation block
@property (nonatomic,copy) NSData * advertisement;                 //@synthesize advertisement=_advertisement - In the implementation block
@property (nonatomic,copy) SPHandle * handle;                      //@synthesize handle=_handle - In the implementation block
@property (assign,nonatomic) BOOL isIgnored;                       //@synthesize isIgnored=_isIgnored - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(SPHandle *)handle;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)setHandle:(SPHandle *)arg1 ;
-(BOOL)isIgnored;
-(NSArray *)beaconLocations;
-(void)setBeaconLocations:(NSArray *)arg1 ;
-(NSData *)advertisement;
-(void)setAdvertisement:(NSData *)arg1 ;
-(void)setIsIgnored:(BOOL)arg1 ;
@end

