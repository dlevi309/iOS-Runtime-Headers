/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@class NSString, NSData, IMNicknameEncryptionFieldTag;

@interface IMNicknameEncryptionCipherRecordField : NSObject {

	NSString* _fieldName;
	NSData* _cipherData;
	NSData* _IV;
	IMNicknameEncryptionFieldTag* _tag;

}

@property (nonatomic,readonly) NSString * fieldName;                            //@synthesize fieldName=_fieldName - In the implementation block
@property (nonatomic,readonly) NSData * cipherData;                             //@synthesize cipherData=_cipherData - In the implementation block
@property (nonatomic,readonly) NSData * IV;                                     //@synthesize IV=_IV - In the implementation block
@property (nonatomic,readonly) IMNicknameEncryptionFieldTag * tag;              //@synthesize tag=_tag - In the implementation block
+(id)cipherRecordFieldWithFieldName:(id)arg1 dataRepresentation:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(id)description;
-(IMNicknameEncryptionFieldTag *)tag;
-(NSString *)fieldName;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(id)initWithFieldName:(id)arg1 cipherData:(id)arg2 IV:(id)arg3 tag:(id)arg4 ;
-(NSData *)cipherData;
-(NSData *)IV;
@end

