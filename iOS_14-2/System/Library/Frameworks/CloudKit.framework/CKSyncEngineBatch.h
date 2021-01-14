/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(NSArray *)recordIDsToDelete;
-(id)initWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2 ;
-(id)description;
-(BOOL)isAtomic;
-(NSArray *)recordsToSave;
-(void)setAtomic:(BOOL)arg1 ;
@end

