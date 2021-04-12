/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSUUID;

@interface RTMapItemExtendedAttributes : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isMe;
	NSString* _addressIdentifier;
	double _wifiConfidence;
	long long _wifiFingerprintLabelType;
	NSUUID* _identifier;

}

@property (nonatomic,retain) NSUUID * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * addressIdentifier;                      //@synthesize addressIdentifier=_addressIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isMe;                                       //@synthesize isMe=_isMe - In the implementation block
@property (assign,nonatomic) double wifiConfidence;                           //@synthesize wifiConfidence=_wifiConfidence - In the implementation block
@property (assign,nonatomic) long long wifiFingerprintLabelType;              //@synthesize wifiFingerprintLabelType=_wifiFingerprintLabelType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)fingerprintLabelTypeToString:(long long)arg1 ;
-(BOOL)isMe;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToMapItemExtendedAttributes:(id)arg1 ;
-(double)wifiConfidence;
-(long long)wifiFingerprintLabelType;
-(id)initWithIdentifier:(id)arg1 addressIdentifier:(id)arg2 isMe:(BOOL)arg3 wifiConfidence:(double)arg4 wifiFingerprintLabelType:(long long)arg5 ;
-(id)initWithExtendedAttributesMO:(id)arg1 ;
-(id)initWithAddressIdentifier:(id)arg1 isMe:(BOOL)arg2 wifiConfidence:(double)arg3 wifiFingerprintLabelType:(long long)arg4 ;
-(void)setWifiConfidence:(double)arg1 ;
-(void)setWifiFingerprintLabelType:(long long)arg1 ;
-(void)setIsMe:(BOOL)arg1 ;
-(id)description;
-(void)setAddressIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
-(NSString *)addressIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

