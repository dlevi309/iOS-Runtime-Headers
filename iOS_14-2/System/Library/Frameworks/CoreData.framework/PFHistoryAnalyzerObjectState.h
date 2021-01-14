/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSNumber *)originalTransactionNumber;
-(long long)finalChangeType;
-(NSManagedObjectID *)analyzedObjectID;
-(NSString *)finalChangeAuthor;
-(long long)originalChangeType;
-(NSNumber *)finalTransactionNumber;

@end

