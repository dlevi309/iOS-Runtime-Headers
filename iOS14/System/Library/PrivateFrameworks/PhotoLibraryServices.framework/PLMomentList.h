/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLManagedObject.h>
#import <libobjc.A.dylib/PLAssetContainerList.h>
#import <libobjc.A.dylib/PLMomentListData.h>

@class NSDate, NSSet, NSArray, NSString;

@interface PLMomentList : PLManagedObject <PLAssetContainerList, PLMomentListData>

@property (assign,nonatomic) short granularityLevel; 
@property (assign,nonatomic) int sortIndex; 
@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain) NSDate * representativeDate; 
@property (nonatomic,retain) NSDate * endDate; 
@property (nonatomic,retain) NSSet * momentsForMegaMoment; 
@property (nonatomic,retain) NSSet * momentsForYear; 
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSArray * localizedLocationNames; 
@property (nonatomic,readonly) NSSet * moments; 
@property (nonatomic,readonly) NSArray * sortedMoments; 
@property (nonatomic,readonly) unsigned long long containersCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) NSObject*<NSCopying> uniqueObjectID; 
@property (nonatomic,retain,readonly) NSArray * batchedMoments; 
@property (nonatomic,retain,readonly) NSString * momentListDebugDescription; 
@property (nonatomic,retain,readonly) NSString * title; 
+(id)entityName;
+(id)monthMomentListForMonth:(long long)arg1 year:(long long)arg2 inManagedObjectContext:(id)arg3 ;
+(id)_findMomentListForGranularity:(short)arg1 sortIndex:(int)arg2 inManagedObjectContext:(id)arg3 ;
+(id)allMomentListsInManagedObjectContext:(id)arg1 forLevel:(short)arg2 error:(id*)arg3 returnsObjectsAsFaults:(BOOL)arg4 ;
+(id)allMomentListsInLibrary:(id)arg1 forLevel:(short)arg2 returnsObjectsAsFaults:(BOOL)arg3 ;
+(id)allMomentListsInManagedObjectContext:(id)arg1 forLevel:(short)arg2 error:(id*)arg3 ;
+(id)allMomentListsInLibrary:(id)arg1 forLevel:(short)arg2 ;
+(id)yearMomentListForYear:(long long)arg1 inManagedObjectContext:(id)arg2 ;
+(id)descriptionForGranularityLevel:(short)arg1 ;
-(id)containers;
-(void)awakeFromInsert;
-(id)_typeDescription;
-(unsigned long long)containersCount;
-(BOOL)canEditContainers;
-(NSSet *)moments;
-(id)diagnosticInformation;
-(NSString *)localizedTitle;
-(void)delete;
-(void)_updateStartAndEndDate;
-(NSObject*<NSCopying>)uniqueObjectID;
-(id)containersRelationshipName;
-(void)_performMomentChangesForKey:(id)arg1 mutation:(unsigned long long)arg2 primitiveMoments:(id)arg3 changedMoment:(id)arg4 ;
-(NSString *)momentListDebugDescription;
-(void)_performMutation:(unsigned long long)arg1 withMoments:(id)arg2 forMomentListLevel:(short)arg3 ;
-(NSArray *)localizedLocationNames;
-(void)addMoments:(id)arg1 ;
-(void)removeMomentForMegaMoment:(id)arg1 ;
-(void)insertMomentForMegaMoment:(id)arg1 ;
-(void)insertMomentForYear:(id)arg1 ;
-(void)removeMomentForYear:(id)arg1 ;
-(id)_batchedMomentsPredicate;
-(void)_performMomentChangesForKey:(id)arg1 mutation:(unsigned long long)arg2 primitiveMoments:(id)arg3 changedMoments:(id)arg4 ;
-(void)removeMoments:(id)arg1 ;
-(BOOL)isEmpty;
-(BOOL)supportsDiagnosticInformation;
-(void)didTurnIntoFault;
-(NSArray *)batchedMoments;
-(NSArray *)sortedMoments;
-(id)pl_debugDescription;
-(void)dealloc;
@end

