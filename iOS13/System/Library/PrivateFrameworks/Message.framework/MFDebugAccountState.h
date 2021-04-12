/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithStateEventDictionary:(id)arg1 identifier:(id)arg2 lastKnownCapabilities:(id)arg3 ;
-(MailAccount *)mailAccount;
-(NSArray *)lastKnownCapabilities;
-(void)setLastKnownCapabilities:(NSArray *)arg1 ;
-(void)setMailAccount:(MailAccount *)arg1 ;
@end

