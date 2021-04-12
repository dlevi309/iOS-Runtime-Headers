/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@interface HKConceptIndexUtilities : NSObject
+(id)keyPathRemovingFirstComponentFromKeyPath:(id)arg1 error:(id*)arg2 ;
+(id)indexedCodingsForCodingCollections:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
+(id)conceptsForIndexedConcepts:(id)arg1 expectedCount:(long long)arg2 context:(id)arg3 error:(id*)arg4 ;
+(BOOL)applyConcepts:(id)arg1 toIndexableObject:(id)arg2 keyPath:(id)arg3 error:(id*)arg4 ;
+(id)medicalCodingCollectionForIndexableObject:(id)arg1 keyPath:(id)arg2 error:(id*)arg3 ;
+(id)keyPaths:(id)arg1 prefix:(id)arg2 ;
+(BOOL)assignError:(id*)arg1 forInvalidKeyPath:(id)arg2 inClass:(Class)arg3 ;
+(id)firstComponentForKeyPath:(id)arg1 error:(id*)arg2 ;
-(id)init;
@end

