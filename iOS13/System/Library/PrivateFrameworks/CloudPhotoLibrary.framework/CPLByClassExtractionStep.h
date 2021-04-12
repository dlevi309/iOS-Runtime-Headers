/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLBatchExtractionStep.h>

@class NSString;

@interface CPLByClassExtractionStep : CPLBatchExtractionStep {

	/*function pointer*/void* _query;
	Class _extractionClass;
	unsigned long long _maximumCount;
	NSString* _queryDescription;

}

@property (nonatomic,readonly) Class extractionClass;                         //@synthesize extractionClass=_extractionClass - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumCount;               //@synthesize maximumCount=_maximumCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * queryDescription;              //@synthesize queryDescription=_queryDescription - In the implementation block
-(void)reset;
-(id)shortDescription;
-(unsigned long long)maximumCount;
-(NSString *)queryDescription;
-(BOOL)extractToBatch:(id)arg1 maximumCount:(unsigned long long)arg2 maximumResourceSize:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)shouldResetFromThisStepWithIncomingChange:(id)arg1 ;
-(id)initWithStorage:(id)arg1 scopeIdentifier:(id)arg2 description:(id)arg3 class:(Class)arg4 maximumCount:(unsigned long long)arg5 query:(/*function pointer*/void*)arg6 ;
-(Class)extractionClass;
@end

