/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@protocol IDSCKRecordKeyValueSetting;
@class IDSCKRecordID;

@interface IDSCKRecord : NSObject {

	IDSCKRecordID* _recordID;
	id<IDSCKRecordKeyValueSetting> _encryptedValuesByKey;

}

@property (nonatomic,copy,readonly) IDSCKRecordID * recordID;                                    //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,readonly) id<IDSCKRecordKeyValueSetting> encryptedValuesByKey;              //@synthesize encryptedValuesByKey=_encryptedValuesByKey - In the implementation block
+(id)alloc;
+(Class)__class;
-(IDSCKRecordID *)recordID;
-(id<IDSCKRecordKeyValueSetting>)encryptedValuesByKey;
@end

