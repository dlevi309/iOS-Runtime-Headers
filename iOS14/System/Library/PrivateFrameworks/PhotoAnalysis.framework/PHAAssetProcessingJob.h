/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

#import <PhotoAnalysis/PhotoAnalysis-Structs.h>
#import <PhotoAnalysis/PHAWorkerJob.h>

@class NSArray, NSRecursiveLock, NSMutableDictionary;

@interface PHAAssetProcessingJob : PHAWorkerJob {

	NSArray* _assetLocalIdentifiers;
	NSRecursiveLock* _resultsLock;
	NSMutableDictionary* _resultsByAssetLocalIdentifier;

}

@property (readonly) NSRecursiveLock * resultsLock;                                              //@synthesize resultsLock=_resultsLock - In the implementation block
@property (nonatomic,copy,readonly) NSArray * incompleteAssetLocalIdentifiers; 
@property (nonatomic,readonly) NSMutableDictionary * resultsByAssetLocalIdentifier;              //@synthesize resultsByAssetLocalIdentifier=_resultsByAssetLocalIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * assetLocalIdentifiers;                                  //@synthesize assetLocalIdentifiers=_assetLocalIdentifiers - In the implementation block
-(BOOL)finished;
-(unsigned long long)resultCount;
-(id)description;
-(id)statusAsDictionary;
-(float)completionScore;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)reportResult:(unsigned long long)arg1 forAssetLocalIdentifier:(id)arg2 ;
-(NSArray *)assetLocalIdentifiers;
-(id)_resultsCopy;
-(id)initWithWorkerType:(short)arg1 scenario:(unsigned long long)arg2 assetLocalIdentifiers:(id)arg3 library:(id)arg4 ;
-(unsigned long long)successfulResultCount;
-(NSArray *)incompleteAssetLocalIdentifiers;
-(unsigned long long)resultForAssetLocalIdentifier:(id)arg1 ;
-(NSRecursiveLock *)resultsLock;
-(NSMutableDictionary *)resultsByAssetLocalIdentifier;
@end

