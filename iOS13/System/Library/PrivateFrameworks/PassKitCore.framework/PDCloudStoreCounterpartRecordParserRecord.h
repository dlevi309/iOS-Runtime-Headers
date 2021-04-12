/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class CKRecord;

@interface PDCloudStoreCounterpartRecordParserRecord : NSObject {

	BOOL _fromPush;
	CKRecord* _record;

}

@property (nonatomic,readonly) CKRecord * record;              //@synthesize record=_record - In the implementation block
@property (nonatomic,readonly) BOOL fromPush;                  //@synthesize fromPush=_fromPush - In the implementation block
-(id)description;
-(CKRecord *)record;
-(id)initWithRecord:(id)arg1 fromPush:(BOOL)arg2 ;
-(BOOL)fromPush;
@end

