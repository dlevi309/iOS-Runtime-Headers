/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class NSMutableDictionary, BKSHIDEventAuthenticationMessage, NSArray;

@interface TIKeyboardSecureTouchManager : NSObject {

	BOOL _bypassCommunication;
	NSMutableDictionary* _slots;
	BKSHIDEventAuthenticationMessage* _lastEventAuthenticationMessage;
	NSArray* _keys;
	unsigned long long _lastVerifiedMessageTimestamp;

}

@property (nonatomic,retain) NSMutableDictionary * slots;                                                    //@synthesize slots=_slots - In the implementation block
@property (nonatomic,retain) BKSHIDEventAuthenticationMessage * lastEventAuthenticationMessage;              //@synthesize lastEventAuthenticationMessage=_lastEventAuthenticationMessage - In the implementation block
@property (nonatomic,retain) NSArray * keys;                                                                 //@synthesize keys=_keys - In the implementation block
@property (assign,nonatomic) unsigned long long lastVerifiedMessageTimestamp;                                //@synthesize lastVerifiedMessageTimestamp=_lastVerifiedMessageTimestamp - In the implementation block
@property (assign,nonatomic) BOOL bypassCommunication;                                                       //@synthesize bypassCommunication=_bypassCommunication - In the implementation block
+(id)sharedInstance;
-(NSArray *)keys;
-(id)init;
-(NSMutableDictionary *)slots;
-(void)setKeys:(NSArray *)arg1 ;
-(void)clearRegistrations;
-(void)touchEventWithAuthenticationMessage:(id)arg1 ;
-(void)registerSlotID:(unsigned)arg1 ;
-(BOOL)verifySlotID:(unsigned)arg1 ;
-(unsigned long long)authenticationMessageContextForSlotID:(unsigned)arg1 ;
-(void)setSlots:(NSMutableDictionary *)arg1 ;
-(BKSHIDEventAuthenticationMessage *)lastEventAuthenticationMessage;
-(void)setLastEventAuthenticationMessage:(BKSHIDEventAuthenticationMessage *)arg1 ;
-(unsigned long long)lastVerifiedMessageTimestamp;
-(void)setLastVerifiedMessageTimestamp:(unsigned long long)arg1 ;
-(BOOL)bypassCommunication;
-(void)setBypassCommunication:(BOOL)arg1 ;
@end

