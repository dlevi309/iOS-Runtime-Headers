/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSManagedObjectID, NSDictionary, NSPersistentHistoryTransaction, NSSet;

@interface NSPersistentHistoryChange : NSObject <NSCopying>

@property (readonly) long long changeID; 
@property (copy,readonly) NSManagedObjectID * changedObjectID; 
@property (readonly) long long changeType; 
@property (copy,readonly) NSDictionary * tombstone; 
@property (readonly) NSPersistentHistoryTransaction * transaction; 
@property (copy,readonly) NSSet * updatedProperties; 
+(BOOL)supportsSecureCoding;
+(id)fetchRequest;
+(id)entityDescription;
+(id)shortStringForChangeType:(long long)arg1 ;
+(id)stringForChangeType:(long long)arg1 ;
+(id)entityDescriptionWithContext:(id)arg1 ;
-(long long)changeType;
-(NSPersistentHistoryTransaction *)transaction;
-(void)encodeWithCoder:(id)arg1 ;
-(NSManagedObjectID *)changedObjectID;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(long long)changeID;
-(NSSet *)updatedProperties;
-(NSDictionary *)tombstone;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

