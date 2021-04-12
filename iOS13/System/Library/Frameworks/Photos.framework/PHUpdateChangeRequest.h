/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@protocol PHUpdateChangeRequest <PHChangeRequest>
@property (getter=isMutated,readonly) BOOL mutated; 
@required
-(BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3;
-(BOOL)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2;
-(BOOL)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3;
-(BOOL)isMutated;

@end

