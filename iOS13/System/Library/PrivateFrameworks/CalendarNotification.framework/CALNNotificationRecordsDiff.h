/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@class NSArray;

@interface CALNNotificationRecordsDiff : NSObject {

	NSArray* _addedRecords;
	NSArray* _removedRecords;
	NSArray* _modifiedRecords;

}

@property (nonatomic,copy,readonly) NSArray * addedRecords;                 //@synthesize addedRecords=_addedRecords - In the implementation block
@property (nonatomic,copy,readonly) NSArray * removedRecords;               //@synthesize removedRecords=_removedRecords - In the implementation block
@property (nonatomic,copy,readonly) NSArray * modifiedRecords;              //@synthesize modifiedRecords=_modifiedRecords - In the implementation block
+(id)emptyDiff;
+(id)diffWithAddedRecords:(id)arg1 removedRecords:(id)arg2 modifiedRecords:(id)arg3 ;
-(id)description;
-(NSArray *)modifiedRecords;
-(NSArray *)addedRecords;
-(id)initWithAddedRecords:(id)arg1 removedRecords:(id)arg2 modifiedRecords:(id)arg3 ;
-(NSArray *)removedRecords;
@end

