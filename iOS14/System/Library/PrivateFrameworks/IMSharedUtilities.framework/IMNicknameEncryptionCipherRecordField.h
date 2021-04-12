/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSData *)IV;
-(IMNicknameEncryptionFieldTag *)tag;
-(id)description;
-(NSString *)fieldName;
-(NSData *)cipherData;
-(id)initWithFieldName:(id)arg1 cipherData:(id)arg2 IV:(id)arg3 tag:(id)arg4 ;
-(void)dealloc;
-(id)dataRepresentationWithError:(id*)arg1 ;
@end

