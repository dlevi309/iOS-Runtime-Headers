/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSArray;

@interface PLUnintendedChangeChecker : NSObject {

	NSArray* _unexpectedMomentAssetKeys;
	NSArray* _unexpectedMomentAdditionalAssetAttributeKeys;
	NSArray* _unexpectedCPLAssetKeys;

}
+(void)checkForUnintendedChangesDuringeSave:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(void)checkForUnintendedChangeOnMergeConflicts:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(BOOL)shouldCheckForUnintendedChanges;
-(id)init;
-(void)checkForUnintendedChangesDuringeSave:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)checkForUnintendedChangeOnMergeConflicts:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_checkForUnintendedChangesOnObject:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_checkForUnintendedMomentChangesOnObject:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_checkForUnintendedCPLChangesOnObject:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_checkForUnintendedChangesOnObject:(id)arg1 withEntity:(id)arg2 unexpectedKeys:(id)arg3 block:(/*^block*/id)arg4 ;
@end

