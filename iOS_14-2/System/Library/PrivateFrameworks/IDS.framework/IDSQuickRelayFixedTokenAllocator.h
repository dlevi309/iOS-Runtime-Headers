/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@class NSData, NSNumber;

@interface IDSQuickRelayFixedTokenAllocator : NSObject {

	NSData* _relayIP;
	NSNumber* _relayPort;
	NSData* _relaySessionToken;
	NSData* _relaySessionKey;
	NSData* _relaySessionID;
	NSNumber* _relayCombinedSoftwareID;
	NSData* _appleID;
	NSData* _relayIPv6;

}

@property (copy) NSData * relayIP;                                //@synthesize relayIP=_relayIP - In the implementation block
@property (copy) NSData * relayIPv6;                              //@synthesize relayIPv6=_relayIPv6 - In the implementation block
@property (copy) NSNumber * relayPort;                            //@synthesize relayPort=_relayPort - In the implementation block
@property (copy) NSData * relaySessionToken;                      //@synthesize relaySessionToken=_relaySessionToken - In the implementation block
@property (copy) NSData * relaySessionKey;                        //@synthesize relaySessionKey=_relaySessionKey - In the implementation block
@property (copy) NSData * relaySessionID;                         //@synthesize relaySessionID=_relaySessionID - In the implementation block
@property (copy) NSNumber * relayCombinedSoftwareID;              //@synthesize relayCombinedSoftwareID=_relayCombinedSoftwareID - In the implementation block
@property (copy) NSData * appleID;                                //@synthesize appleID=_appleID - In the implementation block
-(NSData *)relayIP;
-(id)initWithDictionary:(id)arg1 ;
-(NSNumber *)relayPort;
-(NSData *)relayIPv6;
-(NSData *)appleID;
-(void)setAppleID:(NSData *)arg1 ;
-(void)setRelayIP:(NSData *)arg1 ;
-(NSData *)relaySessionID;
-(void)setRelayPort:(NSNumber *)arg1 ;
-(id)initWithDefaults;
-(void)setRelayIPv6:(NSData *)arg1 ;
-(NSData *)relaySessionKey;
-(BOOL)_isSessionInfoValid:(id)arg1 ;
-(void)_setAllValuesFromDictionary:(id)arg1 ;
-(id)_parseQuickRelayDefaults;
-(void)setRelaySessionToken:(NSData *)arg1 ;
-(void)setRelaySessionKey:(NSData *)arg1 ;
-(void)setRelaySessionID:(NSData *)arg1 ;
-(void)setRelayCombinedSoftwareID:(NSNumber *)arg1 ;
-(NSData *)relaySessionToken;
-(NSNumber *)relayCombinedSoftwareID;
@end

