/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/


@protocol EMMutableDictionaryProtocol;
@interface EMListUnsubscribeDetector : NSObject {

	id<EMMutableDictionaryProtocol> _persistentDictionary;

}
+(id)receivingAccountFromMessage:(id)arg1 ;
-(id)commandForMessage:(id)arg1 ;
-(id)init;
-(id)initWithMutableDictionary:(id)arg1 ;
-(BOOL)_shouldIgnoreMessageWithHeaders:(id)arg1 ;
-(id)_persistentKeyForHeaders:(id)arg1 ;
-(id)_normalizedAddress:(id)arg1 ;
-(id)_listIDString:(id)arg1 ;
-(id)_senderString:(id)arg1 ;
-(void)acceptCommand:(id)arg1 ;
-(void)ignoreCommand:(id)arg1 ;
-(void)removeAllPersistedCommands;
@end

