/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/ENCypher.h>

@class NSString, IDSMPConversationGroup, NSArray, IDSDeviceIdentity;

@interface IDSConversationGroupCypher : NSObject <ENCypher> {

	IDSMPConversationGroup* _conversationGroup;
	NSArray* _participants;
	IDSDeviceIdentity* _deviceIdentity;

}

@property (nonatomic,retain) IDSMPConversationGroup * conversationGroup;              //@synthesize conversationGroup=_conversationGroup - In the implementation block
@property (nonatomic,retain) NSArray * participants;                                  //@synthesize participants=_participants - In the implementation block
@property (nonatomic,readonly) IDSDeviceIdentity * deviceIdentity;                    //@synthesize deviceIdentity=_deviceIdentity - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setParticipants:(NSArray *)arg1 ;
-(NSArray *)participants;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithConversationGroup:(id)arg1 deviceIdentity:(id)arg2 participants:(id)arg3 ;
-(IDSMPConversationGroup *)conversationGroup;
-(IDSDeviceIdentity *)deviceIdentity;
-(id)_memberList;
-(void)setConversationGroup:(IDSMPConversationGroup *)arg1 ;
-(id)cypherData:(id)arg1 withAccountIdentity:(id)arg2 identifier:(id*)arg3 error:(id*)arg4 ;
-(id)decypherData:(id)arg1 withAccountIdentity:(id)arg2 signingDevicePublicKey:(id)arg3 identifier:(id)arg4 error:(id*)arg5 ;
-(NSString *)identifier;
@end

