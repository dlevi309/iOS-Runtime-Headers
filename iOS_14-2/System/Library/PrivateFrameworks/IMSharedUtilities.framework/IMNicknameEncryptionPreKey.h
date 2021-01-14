/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@class NSData, IMNicknameFieldEncryptionKey, IMNicknameFieldTaggingKey, IMNicknameRecordTaggingKey;

@interface IMNicknameEncryptionPreKey : NSObject {

	NSData* _generatedData;
	NSData* _derivedData;

}

@property (nonatomic,readonly) IMNicknameFieldEncryptionKey * fieldEncryptionKey; 
@property (nonatomic,readonly) IMNicknameFieldTaggingKey * fieldTaggingKey; 
@property (nonatomic,readonly) IMNicknameRecordTaggingKey * recordTaggingKey; 
+(id)preKeyWithDataRepresentation:(id)arg1 error:(id*)arg2 ;
+(id)generatePreKeyWithError:(id*)arg1 ;
-(id)dataRepresentation;
-(IMNicknameFieldTaggingKey *)fieldTaggingKey;
-(IMNicknameRecordTaggingKey *)recordTaggingKey;
-(IMNicknameFieldEncryptionKey *)fieldEncryptionKey;
-(id)initWithGeneratedData:(id)arg1 derivedData:(id)arg2 ;
-(id)_subDerviedKeyDataAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
@end

