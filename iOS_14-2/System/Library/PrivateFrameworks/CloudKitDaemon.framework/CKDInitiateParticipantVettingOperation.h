/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDOperation.h>

@class CKShareMetadata, NSData, NSString;

@interface CKDInitiateParticipantVettingOperation : CKDOperation {

	/*^block*/id _participantVettingProgressBlock;
	CKShareMetadata* _shareMetadata;
	NSData* _encryptedKey;
	NSString* _participantID;
	NSString* _address;

}

@property (nonatomic,retain) CKShareMetadata * shareMetadata;                                                              //@synthesize shareMetadata=_shareMetadata - In the implementation block
@property (nonatomic,retain) NSData * encryptedKey;                                                                        //@synthesize encryptedKey=_encryptedKey - In the implementation block
@property (nonatomic,retain) NSString * participantID;                                                                     //@synthesize participantID=_participantID - In the implementation block
@property (nonatomic,retain) NSString * address;                                                                           //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) id<CKInitiateParticipantVettingOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,copy) id participantVettingProgressBlock;                                                             //@synthesize participantVettingProgressBlock=_participantVettingProgressBlock - In the implementation block
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(int)operationType;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setShareMetadata:(CKShareMetadata *)arg1 ;
-(void)_sendRequest:(BOOL)arg1 ;
-(NSData *)encryptedKey;
-(void)setEncryptedKey:(NSData *)arg1 ;
-(NSString *)participantID;
-(void)setParticipantID:(NSString *)arg1 ;
-(void)main;
-(NSString *)address;
-(void)setAddress:(NSString *)arg1 ;
-(CKShareMetadata *)shareMetadata;
-(void)setParticipantVettingProgressBlock:(id)arg1 ;
-(id)participantVettingProgressBlock;
-(id)_addSelfIdentityToShareMetadataPublicPCS:(id)arg1 forShareWithURL:(id)arg2 error:(id*)arg3 ;
-(id)_encryptedKeyDataWithShareMetadata:(id)arg1 error:(id*)arg2 ;
-(void)_handleVettingInitiationProgress:(id)arg1 ;
@end

