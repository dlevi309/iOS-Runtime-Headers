/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSArray, NSString, NSPersistentHistoryToken;

@interface NSPersistentHistoryTransaction : NSObject <NSCopying>

@property (copy,readonly) NSDate * timestamp; 
@property (copy,readonly) NSArray * changes; 
@property (readonly) long long transactionNumber; 
@property (copy,readonly) NSString * storeID; 
@property (copy,readonly) NSString * bundleID; 
@property (copy,readonly) NSString * processID; 
@property (copy,readonly) NSString * contextName; 
@property (copy,readonly) NSString * author; 
@property (readonly) NSPersistentHistoryToken * token; 
+(BOOL)supportsSecureCoding;
+(id)fetchRequest;
+(id)entityDescription;
+(id)entityDescriptionWithContext:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSPersistentHistoryToken *)token;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)timestamp;
-(NSArray *)changes;
-(NSString *)bundleID;
-(NSString *)author;
-(NSString *)storeID;
-(long long)transactionNumber;
-(NSString *)processID;
-(NSString *)contextName;
-(id)initialQueryGenerationToken;
-(id)postQueryGenerationToken;
-(id)objectIDNotification;
@end

