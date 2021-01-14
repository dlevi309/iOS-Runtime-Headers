/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@class NSString, NSData;

@interface IMNicknameEncryptionPlainRecordField : NSObject {

	NSString* _fieldName;
	NSData* _plainData;

}

@property (nonatomic,readonly) NSString * fieldName;              //@synthesize fieldName=_fieldName - In the implementation block
@property (nonatomic,readonly) NSData * plainData;                //@synthesize plainData=_plainData - In the implementation block
-(id)description;
-(NSString *)fieldName;
-(id)initWithFieldName:(id)arg1 plainData:(id)arg2 ;
-(NSData *)plainData;
-(void)dealloc;
@end

