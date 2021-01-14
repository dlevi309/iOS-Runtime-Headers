/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)addedRecords;
-(NSArray *)removedRecords;
-(NSArray *)modifiedRecords;
-(id)initWithAddedRecords:(id)arg1 removedRecords:(id)arg2 modifiedRecords:(id)arg3 ;
@end

