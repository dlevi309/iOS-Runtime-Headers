/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

@class NSManagedObjectID, NSNumber, NSDictionary, NSString;


@protocol PFHistoryAnalyzerObjectState
@property (nonatomic,readonly) NSManagedObjectID * analyzedObjectID; 
@property (nonatomic,readonly) NSNumber * originalTransactionNumber; 
@property (nonatomic,readonly) long long originalChangeType; 
@property (nonatomic,readonly) NSNumber * finalTransactionNumber; 
@property (nonatomic,readonly) long long finalChangeType; 
@property (nonatomic,readonly) NSDictionary * tombstone; 
@property (nonatomic,readonly) NSString * finalChangeAuthor; 
@required
-(NSDictionary *)tombstone;
-(void)updateWithChange:(id)arg1;
-(NSManagedObjectID *)analyzedObjectID;
-(NSNumber *)originalTransactionNumber;
-(long long)originalChangeType;
-(NSNumber *)finalTransactionNumber;
-(long long)finalChangeType;
-(NSString *)finalChangeAuthor;

@end

