/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSCKRecordMetadata, NSManagedObject;

@interface _PFCKInsertedMetadataLink : NSObject {

	NSCKRecordMetadata* _recordMetadata;
	NSManagedObject* _insertedObject;

}

@property (nonatomic,readonly) NSManagedObject * insertedObject;                 //@synthesize insertedObject=_insertedObject - In the implementation block
@property (nonatomic,readonly) NSCKRecordMetadata * recordMetadata;              //@synthesize recordMetadata=_recordMetadata - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithManagedObject:(id)arg1 andRecordMetadata:(id)arg2 ;
-(NSManagedObject *)insertedObject;
-(NSCKRecordMetadata *)recordMetadata;
@end

