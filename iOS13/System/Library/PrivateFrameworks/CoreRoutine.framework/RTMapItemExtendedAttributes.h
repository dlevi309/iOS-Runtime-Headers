/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSString *)addressIdentifier;
-(void)setAddressIdentifier:(NSString *)arg1 ;
-(BOOL)isMe;
-(void)setIsMe:(BOOL)arg1 ;
-(BOOL)isEqualToMapItemExtendedAttributes:(id)arg1 ;
-(double)wifiConfidence;
-(id)initWithIdentifier:(id)arg1 addressIdentifier:(id)arg2 isMe:(BOOL)arg3 wifiConfidence:(double)arg4 wifiFingerprintLabelType:(long long)arg5 ;
-(long long)wifiFingerprintLabelType;
-(id)initWithExtendedAttributesMO:(id)arg1 ;
-(id)initWithAddressIdentifier:(id)arg1 isMe:(BOOL)arg2 wifiConfidence:(double)arg3 wifiFingerprintLabelType:(long long)arg4 ;
-(void)setWifiConfidence:(double)arg1 ;
-(void)setWifiFingerprintLabelType:(long long)arg1 ;
@end

