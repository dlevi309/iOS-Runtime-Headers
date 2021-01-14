/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)changes;
-(NSString *)storeID;
-(NSString *)processID;
-(NSString *)author;
-(id)objectIDNotification;
-(NSString *)contextName;
-(NSDate *)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initialQueryGenerationToken;
-(id)postQueryGenerationToken;
-(NSString *)bundleID;
-(id)initWithCoder:(id)arg1 ;
-(long long)transactionNumber;
-(NSPersistentHistoryToken *)token;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

