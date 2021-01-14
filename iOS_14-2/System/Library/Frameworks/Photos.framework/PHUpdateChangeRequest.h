/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@protocol PHUpdateChangeRequest <PHChangeRequest>
@property (getter=isMutated,readonly) BOOL mutated; 
@required
-(BOOL)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3;
-(BOOL)isMutated;
-(BOOL)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2;
-(BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3;

@end

