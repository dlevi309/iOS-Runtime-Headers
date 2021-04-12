/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@class NSUUID, NSData;

@interface CUTDSDevice : NSObject {

	BOOL _paired;
	NSUUID* _identifier;
	NSData* _bloomFilterData;
	NSData* _deviceAddress;
	unsigned long long _lastSeenTicks;

}

@property (nonatomic,copy) NSUUID * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSData * bloomFilterData;                        //@synthesize bloomFilterData=_bloomFilterData - In the implementation block
@property (nonatomic,copy) NSData * deviceAddress;                          //@synthesize deviceAddress=_deviceAddress - In the implementation block
@property (assign,nonatomic) unsigned long long lastSeenTicks;              //@synthesize lastSeenTicks=_lastSeenTicks - In the implementation block
@property (assign,nonatomic) BOOL paired;                                   //@synthesize paired=_paired - In the implementation block
-(void)setPaired:(BOOL)arg1 ;
-(BOOL)paired;
-(NSData *)deviceAddress;
-(void)setDeviceAddress:(NSData *)arg1 ;
-(void)setBloomFilterData:(NSData *)arg1 ;
-(NSData *)bloomFilterData;
-(void)setLastSeenTicks:(unsigned long long)arg1 ;
-(unsigned long long)lastSeenTicks;
-(id)description;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
@end

