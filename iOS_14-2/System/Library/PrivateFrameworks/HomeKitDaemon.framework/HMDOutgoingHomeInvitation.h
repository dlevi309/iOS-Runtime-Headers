/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDHomeInvitation.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>

@protocol HMFLocking;
@class NSArray, NSUUID, HMDUser, NSString;

@interface HMDOutgoingHomeInvitation : HMDHomeInvitation <HMDBackingStoreObjectProtocol> {

	id<HMFLocking> _lock;
	BOOL _responseReceived;
	NSArray* _operationIdentifiers;
	NSUUID* _uuid;
	HMDUser* _user;
	NSString* _inviteeDestinationAddress;
	NSUUID* _messageIdentifier;

}

@property (nonatomic,retain) NSArray * operationIdentifiers;                           //@synthesize operationIdentifiers=_operationIdentifiers - In the implementation block
@property (nonatomic,retain) NSString * inviteeDestinationAddress;                     //@synthesize inviteeDestinationAddress=_inviteeDestinationAddress - In the implementation block
@property (nonatomic,readonly) NSArray * accessoryInvitationsInformation; 
@property (nonatomic,readonly) NSUUID * uuid;                                          //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) HMDUser * user;                                           //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) NSArray * operations; 
@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
@property (assign,nonatomic) BOOL responseReceived;                                    //@synthesize responseReceived=_responseReceived - In the implementation block
@property (nonatomic,readonly) NSUUID * messageIdentifier;                             //@synthesize messageIdentifier=_messageIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isComplete;
-(NSUUID *)uuid;
-(NSArray *)operations;
-(BOOL)responseReceived;
-(void)setUser:(HMDUser *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(NSString *)debugDescription;
-(NSString *)description;
-(void)setResponseReceived:(BOOL)arg1 ;
-(NSUUID *)messageIdentifier;
-(HMDUser *)user;
-(id)initWithCoder:(id)arg1 ;
-(void)cancel;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(void)updateInvitationState:(long long)arg1 ;
-(BOOL)refreshDisplayName;
-(void)notifyStateChangedForMessage:(id)arg1 ;
-(id)describeWithFormat;
-(id)initWithUUID:(id)arg1 invitee:(id)arg2 invitationState:(long long)arg3 forHome:(id)arg4 expiryDate:(id)arg5 messageIdentifier:(id)arg6 ;
-(NSArray *)operationIdentifiers;
-(NSString *)inviteeDestinationAddress;
-(NSArray *)accessoryInvitationsInformation;
-(void)setOperationIdentifiers:(NSArray *)arg1 ;
-(void)_transactionOutgoingInvitiationUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)updateUser:(id)arg1 ;
-(void)setInviteeDestinationAddress:(NSString *)arg1 ;
-(void)processUserManagementOperationIdentifiers:(id)arg1 ;
-(void)updateUserManagementOperations:(id)arg1 ;
-(id)emptyModelObjectWithChangeType:(unsigned long long)arg1 ;
-(id)initWithInvitee:(id)arg1 invitationState:(long long)arg2 forHome:(id)arg3 expiryDate:(id)arg4 messageIdentifier:(id)arg5 ;
@end

