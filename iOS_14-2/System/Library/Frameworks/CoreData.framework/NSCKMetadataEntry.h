/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, NSDate;

@interface NSCKMetadataEntry : NSManagedObject

@property (nonatomic,retain) NSNumber * boolValueNum; 
@property (nonatomic,retain) NSString * key; 
@property (nonatomic,retain) NSString * stringValue; 
@property (assign,nonatomic) BOOL boolValue; 
@property (nonatomic,retain) NSObject*<NSSecureCoding> transformedValue; 
@property (nonatomic,retain) NSNumber * integerValue; 
@property (nonatomic,retain) NSDate * dateValue; 
+(id)insertMetadataEntryWithKey:(id)arg1 boolValue:(BOOL)arg2 forStore:(id)arg3 intoManagedObjectContext:(id)arg4 ;
+(id)updateOrInsertMetadataEntryWithKey:(id)arg1 integerValue:(id)arg2 forStore:(id)arg3 intoManagedObjectContext:(id)arg4 error:(id*)arg5 ;
+(id)insertMetadataEntryWithKey:(id)arg1 transformedValue:(id)arg2 forStore:(id)arg3 intoManagedObjectContext:(id)arg4 ;
+(id)updateOrInsertMetadataEntryWithKey:(id)arg1 boolValue:(BOOL)arg2 forStore:(id)arg3 intoManagedObjectContext:(id)arg4 error:(id*)arg5 ;
+(id)insertMetadataEntryWithKey:(id)arg1 integerValue:(id)arg2 forStore:(id)arg3 intoManagedObjectContext:(id)arg4 ;
+(id)entryForKey:(id)arg1 fromStore:(id)arg2 inManagedObjectContext:(id)arg3 error:(id*)arg4 ;
+(id)updateOrInsertMetadataEntryWithKey:(id)arg1 stringValue:(id)arg2 forStore:(id)arg3 intoManagedObjectContext:(id)arg4 error:(id*)arg5 ;
+(id)entriesForKeys:(id)arg1 onlyFetchingProperties:(id)arg2 fromStore:(id)arg3 inManagedObjectContext:(id)arg4 error:(id*)arg5 ;
+(id)insertMetadataEntryWithKey:(id)arg1 stringValue:(id)arg2 forStore:(id)arg3 intoManagedObjectContext:(id)arg4 ;
+(id)updateOrInsertMetadataEntryWithKey:(id)arg1 transformedValue:(id)arg2 forStore:(id)arg3 intoManagedObjectContext:(id)arg4 error:(id*)arg5 ;
+(id)entriesForKeys:(id)arg1 fromStore:(id)arg2 inManagedObjectContext:(id)arg3 error:(id*)arg4 ;
+(id)entityPath;
-(BOOL)boolValue;
-(void)setBoolValue:(BOOL)arg1 ;
-(id)describeValue;
@end

