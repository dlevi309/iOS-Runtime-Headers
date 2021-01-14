/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NearbyInteraction.framework/NearbyInteraction
*/

#import <NearbyInteraction/NearbyInteraction-Structs.h>
#import <NearbyInteraction/NIConfiguration.h>

@class NSData;

@interface NIHomeDeviceConfiguration : NIConfiguration {

	BOOL _anchor;
	unsigned long long _allowedDevices;
	NSData* _sessionKey;

}

@property (assign) unsigned long long allowedDevices;              //@synthesize allowedDevices=_allowedDevices - In the implementation block
@property (copy) NSData * sessionKey;                              //@synthesize sessionKey=_sessionKey - In the implementation block
@property (getter=isAnchor) BOOL anchor;                           //@synthesize anchor=_anchor - In the implementation block
+(id)new;
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSData *)sessionKey;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setAnchor:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)descriptionInternal;
-(id)initWithAllowedDevices:(unsigned long long)arg1 sessionKey:(id)arg2 asAnchor:(BOOL)arg3 ;
-(unsigned long long)allowedDevices;
-(BOOL)isAnchor;
-(void)setAllowedDevices:(unsigned long long)arg1 ;
-(void)setSessionKey:(NSData *)arg1 ;
@end

