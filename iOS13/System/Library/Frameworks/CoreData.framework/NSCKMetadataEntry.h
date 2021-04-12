/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)entityPath;
+(id)entryForKey:(id)arg1 fromStore:(id)arg2 inManagedObjectContext:(id)arg3 error:(id*)arg4 ;
+(id)entriesForKeys:(id)arg1 fromStore:(id)arg2 inManagedObjectContext:(id)arg3 error:(id*)arg4 ;
+(id)insertMetadataEntryWithKey:(id)arg1 boolValue:(BOOL)arg2 forStore:(id)arg3 intoManagedObjectContext:(id)arg4 ;
+(id)insertMetadataEntryWithKey:(id)arg1 stringValue:(id)arg2 forStore:(id)arg3 intoManagedObjectContext:(id)arg4 ;
+(id)updateOrInsertMetadataEntryWithKey:(id)arg1 boolValue:(BOOL)arg2 forStore:(id)arg3 intoManagedObjectContext:(id)arg4 error:(id*)arg5 ;
+(id)entriesForKeys:(id)arg1 onlyFetchingProperties:(id)arg2 fromStore:(id)arg3 inManagedObjectContext:(id)arg4 error:(id*)arg5 ;
+(id)_insertMetadataEntryWithKey:(id)arg1 forStore:(id)arg2 intoManagedObjectContext:(id)arg3 ;
+(id)_updateOrInsertMetadataEntryWithKey:(id)arg1 valueSettingBlock:(/*^block*/id)arg2 forStore:(id)arg3 intoManagedObjectContext:(id)arg4 error:(id*)arg5 ;
+(id)insertMetadataEntryWithKey:(id)arg1 transformedValue:(id)arg2 forStore:(id)arg3 intoManagedObjectContext:(id)arg4 ;
+(id)insertMetadataEntryWithKey:(id)arg1 integerValue:(id)arg2 forStore:(id)arg3 intoManagedObjectContext:(id)arg4 ;
+(id)updateOrInsertMetadataEntryWithKey:(id)arg1 stringValue:(id)arg2 forStore:(id)arg3 intoManagedObjectContext:(id)arg4 error:(id*)arg5 ;
+(id)updateOrInsertMetadataEntryWithKey:(id)arg1 transformedValue:(id)arg2 forStore:(id)arg3 intoManagedObjectContext:(id)arg4 error:(id*)arg5 ;
+(id)updateOrInsertMetadataEntryWithKey:(id)arg1 integerValue:(id)arg2 forStore:(id)arg3 intoManagedObjectContext:(id)arg4 error:(id*)arg5 ;
-(BOOL)boolValue;
-(void)setBoolValue:(BOOL)arg1 ;
-(id)describeValue;
@end

