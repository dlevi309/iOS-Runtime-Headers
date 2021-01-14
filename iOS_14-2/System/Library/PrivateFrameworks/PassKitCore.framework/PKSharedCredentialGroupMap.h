/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSMutableDictionary, NSMutableArray, PKAppletSubcredential;

@interface PKSharedCredentialGroupMap : NSObject {

	NSMutableDictionary* _groupIdentifierToGroupNumber;
	NSMutableDictionary* _sharingSessionToGroupNumber;
	NSMutableDictionary* _recipientIdentifierToGroupNumber;
	NSMutableDictionary* _groupNumberToSharedCredentials;
	NSMutableDictionary* _groupNumberToInvitationReceipts;
	NSMutableArray* _notGroupedSharedCredentials;
	NSMutableArray* _notGroupedInvitationReceipts;
	long long _groupCount;
	PKAppletSubcredential* _credential;

}
-(id)groups;
-(id)initWithCredential:(id)arg1 ;
-(void)insertSharedCredential:(id)arg1 ;
-(void)insertInvitationReceipt:(id)arg1 ;
-(id)groupNumberWithGroupIdentifier:(id)arg1 sharingSessionIdentifier:(id)arg2 recipientIdentifier:(id)arg3 ;
-(void)insertSharedCredential:(id)arg1 intoGroup:(id)arg2 ;
-(void)assignGroupNumber:(id)arg1 toGroupIdentifier:(id)arg2 sharingSessionIdentifier:(id)arg3 recipientIdentifier:(id)arg4 ;
-(void)insertInvitationReceipt:(id)arg1 intoGroup:(id)arg2 ;
@end

