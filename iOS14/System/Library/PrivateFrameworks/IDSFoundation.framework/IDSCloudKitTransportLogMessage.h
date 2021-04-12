/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@class NSDictionary, NSString, ENGroupID, IDSDestinationPushToken, NSData;

@interface IDSCloudKitTransportLogMessage : NSObject {

	NSDictionary* _payload;
	NSString* _secondaryID;
	NSString* _deviceID;
	NSString* _encryptionType;

}

@property (nonatomic,retain) NSDictionary * payload;                               //@synthesize payload=_payload - In the implementation block
@property (nonatomic,retain) NSString * secondaryID;                               //@synthesize secondaryID=_secondaryID - In the implementation block
@property (nonatomic,retain) NSString * deviceID;                                  //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSString * encryptionType;                            //@synthesize encryptionType=_encryptionType - In the implementation block
@property (nonatomic,readonly) ENGroupID * groupID; 
@property (nonatomic,readonly) NSString * recipientAlias; 
@property (nonatomic,readonly) NSString * senderAlias; 
@property (nonatomic,readonly) IDSDestinationPushToken * destination; 
@property (nonatomic,readonly) NSData * encryptedPayload; 
@property (nonatomic,readonly) NSString * cypherIdentifier; 
-(void)setDeviceID:(NSString *)arg1 ;
-(void)setPayload:(NSDictionary *)arg1 ;
-(NSString *)deviceID;
-(NSString *)senderAlias;
-(NSString *)recipientAlias;
-(NSData *)encryptedPayload;
-(ENGroupID *)groupID;
-(NSString *)cypherIdentifier;
-(NSString *)encryptionType;
-(void)setEncryptionType:(NSString *)arg1 ;
-(NSDictionary *)payload;
-(void)setSecondaryID:(NSString *)arg1 ;
-(NSString *)secondaryID;
-(IDSDestinationPushToken *)destination;
@end

