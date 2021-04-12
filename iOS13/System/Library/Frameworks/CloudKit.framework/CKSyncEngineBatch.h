/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@class NSArray;

@interface CKSyncEngineBatch : NSObject {

	BOOL _atomic;
	NSArray* _recordsToSave;
	NSArray* _recordIDsToDelete;

}

@property (assign,getter=isAtomic,nonatomic) BOOL atomic;                //@synthesize atomic=_atomic - In the implementation block
@property (nonatomic,readonly) NSArray * recordsToSave;                  //@synthesize recordsToSave=_recordsToSave - In the implementation block
@property (nonatomic,readonly) NSArray * recordIDsToDelete;              //@synthesize recordIDsToDelete=_recordIDsToDelete - In the implementation block
-(id)description;
-(id)initWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2 ;
-(void)setAtomic:(BOOL)arg1 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(NSArray *)recordsToSave;
-(NSArray *)recordIDsToDelete;
-(BOOL)isAtomic;
@end

