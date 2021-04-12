/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/STSerializableManagedObject.h>
#import <libobjc.A.dylib/STSyncableSubObject.h>

@class STBlueprint, NSArray, NSNumber, STBlueprintUsageLimitScheduleRepresentation, NSString;

@interface STBlueprintUsageLimit : NSManagedObject <STSerializableManagedObject, STSyncableSubObject>

@property (assign,nonatomic) double day0Limit; 
@property (assign,nonatomic) double day1Limit; 
@property (assign,nonatomic) double day2Limit; 
@property (assign,nonatomic) double day3Limit; 
@property (assign,nonatomic) double day4Limit; 
@property (assign,nonatomic) double day5Limit; 
@property (assign,nonatomic) double day6Limit; 
@property (nonatomic,readonly) STBlueprint * blueprint; 
@property (nonatomic,copy) NSArray * applicationIdentifiers; 
@property (nonatomic,copy) NSArray * categoryIdentifiers; 
@property (nonatomic,copy) NSArray * websiteIdentifiers; 
@property (nonatomic,retain) NSNumber * notificationTimeInterval; 
@property (nonatomic,retain) STBlueprintUsageLimitScheduleRepresentation * budgetLimitScheduleRepresentation; 
@property (nonatomic,copy) NSString * usageItemType; 
@property (nonatomic,copy) NSArray * itemIdentifiers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<STSerializableManagedObject> syncableRootObject; 
+(id)limitKeyPaths;
+(id)keyPathsForValuesAffectingBudgetLimitScheduleRepresentation;
-(id)dictionaryRepresentation;
-(void)awakeFromFetch;
-(void)setItemIdentifiers:(NSArray *)arg1 ;
-(BOOL)updateWithDictionaryRepresentation:(id)arg1 ;
-(STBlueprintUsageLimitScheduleRepresentation *)budgetLimitScheduleRepresentation;
-(void)setApplicationIdentifiers:(NSArray *)arg1 ;
-(void)setWebsiteIdentifiers:(NSArray *)arg1 ;
-(void)setCategoryIdentifiers:(NSArray *)arg1 ;
-(void)setUsageItemType:(NSString *)arg1 ;
-(void)setBudgetLimit:(double)arg1 forDay:(unsigned long long)arg2 ;
-(void)setBudgetLimit:(double)arg1 ;
-(id<STSerializableManagedObject>)syncableRootObject;
-(void)_usageLimitDidChangeFromOldApplicationIdentifiers:(id)arg1 oldCategoryIdentifiers:(id)arg2 oldWebDomains:(id)arg3 oldItemIdentifiers:(id)arg4 oldItemType:(id)arg5 toNewApplicationIdentifiers:(id)arg6 newCategoryIdentifiers:(id)arg7 newWebDomains:(id)arg8 newItemIdentifiers:(id)arg9 newItemType:(id)arg10 ;
-(void)setBudgetLimitScheduleRepresentation:(STBlueprintUsageLimitScheduleRepresentation *)arg1 ;
@end

