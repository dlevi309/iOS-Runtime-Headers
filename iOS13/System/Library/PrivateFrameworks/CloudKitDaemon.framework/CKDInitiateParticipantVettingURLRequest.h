/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKRecordID, NSData, NSString;

@interface CKDInitiateParticipantVettingURLRequest : CKDURLRequest {

	/*^block*/id _vettingInitiationRequestCompletionBlock;
	CKRecordID* _shareRecordID;
	NSData* _encryptedKey;
	NSString* _participantID;
	NSString* _baseToken;

}

@property (nonatomic,copy) CKRecordID * shareRecordID;                              //@synthesize shareRecordID=_shareRecordID - In the implementation block
@property (nonatomic,copy) NSData * encryptedKey;                                   //@synthesize encryptedKey=_encryptedKey - In the implementation block
@property (nonatomic,copy) NSString * participantID;                                //@synthesize participantID=_participantID - In the implementation block
@property (nonatomic,copy) NSString * baseToken;                                    //@synthesize baseToken=_baseToken - In the implementation block
@property (nonatomic,copy) id vettingInitiationRequestCompletionBlock;              //@synthesize vettingInitiationRequestCompletionBlock=_vettingInitiationRequestCompletionBlock - In the implementation block
-(int)operationType;
-(NSString *)participantID;
-(void)setParticipantID:(NSString *)arg1 ;
-(NSString *)baseToken;
-(void)setBaseToken:(NSString *)arg1 ;
-(CKRecordID *)shareRecordID;
-(void)setShareRecordID:(CKRecordID *)arg1 ;
-(NSData *)encryptedKey;
-(void)setEncryptedKey:(NSData *)arg1 ;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(id)vettingInitiationRequestCompletionBlock;
-(id)initWithShareRecordID:(id)arg1 encryptedKey:(id)arg2 participantID:(id)arg3 baseToken:(id)arg4 ;
-(void)setVettingInitiationRequestCompletionBlock:(id)arg1 ;
@end

