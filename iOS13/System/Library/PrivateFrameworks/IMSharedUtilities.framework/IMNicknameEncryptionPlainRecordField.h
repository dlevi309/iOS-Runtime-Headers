/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@class NSString, NSData;

@interface IMNicknameEncryptionPlainRecordField : NSObject {

	NSString* _fieldName;
	NSData* _plainData;

}

@property (nonatomic,readonly) NSString * fieldName;              //@synthesize fieldName=_fieldName - In the implementation block
@property (nonatomic,readonly) NSData * plainData;                //@synthesize plainData=_plainData - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)fieldName;
-(id)initWithFieldName:(id)arg1 plainData:(id)arg2 ;
-(NSData *)plainData;
@end

