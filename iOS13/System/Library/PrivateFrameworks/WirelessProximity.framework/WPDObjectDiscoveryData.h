/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
*/


@class NSMutableData;

@interface WPDObjectDiscoveryData : NSObject {

	long long _length;
	NSMutableData* _address;
	NSMutableData* _payload;

}

@property (nonatomic,retain) NSMutableData * address;              //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) NSMutableData * payload;              //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) long long length;                     //@synthesize length=_length - In the implementation block
+(unsigned char)applyMaskToAddress:(id)arg1 ;
+(id)addressFromNearbyToken:(id)arg1 ;
+(id)objectDiscoveryReportFromAdvReport:(id)arg1 ;
+(id)addressesFromNearbyTokens:(id)arg1 ;
-(id)init;
-(long long)length;
-(id)description;
-(void)setLength:(long long)arg1 ;
-(NSMutableData *)address;
-(void)setPayload:(NSMutableData *)arg1 ;
-(NSMutableData *)payload;
-(void)setAddress:(NSMutableData *)arg1 ;
-(void)wipeout;
-(id)updateWithKey:(id)arg1 Status:(unsigned char)arg2 Reserved:(id)arg3 ;
@end

