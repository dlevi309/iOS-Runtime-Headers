/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, NSSet, PLPerson, PLDetectedFace;

@interface PLDetectedFaceGroup : PLManagedObject

@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSSet * detectedFaces; 
@property (assign,nonatomic) int unnamedFaceCount; 
@property (nonatomic,retain) PLPerson * associatedPerson; 
@property (nonatomic,retain) PLDetectedFace * keyFace; 
@property (assign,nonatomic) int personBuilderState; 
+(id)entityName;
+(id)detectedFaceGroupWithUUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(void)batchFetchFaceGroupByFaceUUIDWithFaceUUIDs:(id)arg1 predicate:(id)arg2 library:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)awakeFromInsert;
-(void)willSave;
-(id)mutableDetectedFaces;
-(void)refreshFaces;
@end

