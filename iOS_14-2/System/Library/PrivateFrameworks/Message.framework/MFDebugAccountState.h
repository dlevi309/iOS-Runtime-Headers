/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@class NSString, NSArray, MailAccount;

@interface MFDebugAccountState : NSObject {

	NSString* _identifier;
	NSArray* _lastKnownCapabilities;
	MailAccount* _mailAccount;

}

@property (nonatomic,retain) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSArray * lastKnownCapabilities;              //@synthesize lastKnownCapabilities=_lastKnownCapabilities - In the implementation block
@property (nonatomic,retain) MailAccount * mailAccount;                    //@synthesize mailAccount=_mailAccount - In the implementation block
-(id)dictionaryRepresentation;
-(NSArray *)lastKnownCapabilities;
-(id)initWithStateEventDictionary:(id)arg1 identifier:(id)arg2 lastKnownCapabilities:(id)arg3 ;
-(MailAccount *)mailAccount;
-(void)setLastKnownCapabilities:(NSArray *)arg1 ;
-(void)setMailAccount:(MailAccount *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
@end

