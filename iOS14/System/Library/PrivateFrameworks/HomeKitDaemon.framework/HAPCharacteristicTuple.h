/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class HAPCharacteristic, NSString;

@interface HAPCharacteristicTuple : HMFObject {

	HAPCharacteristic* _hapCharacteristic;
	NSString* _serverIdentifier;
	long long _linkType;

}

@property (nonatomic,retain) HAPCharacteristic * hapCharacteristic;              //@synthesize hapCharacteristic=_hapCharacteristic - In the implementation block
@property (nonatomic,retain) NSString * serverIdentifier;                        //@synthesize serverIdentifier=_serverIdentifier - In the implementation block
@property (assign) long long linkType;                                           //@synthesize linkType=_linkType - In the implementation block
-(void)setServerIdentifier:(NSString *)arg1 ;
-(NSString *)serverIdentifier;
-(void)setLinkType:(long long)arg1 ;
-(long long)linkType;
-(id)initWithHAPCharacteristic:(id)arg1 serverIdentifier:(id)arg2 linkType:(long long)arg3 ;
-(HAPCharacteristic *)hapCharacteristic;
-(void)setHapCharacteristic:(HAPCharacteristic *)arg1 ;
@end

