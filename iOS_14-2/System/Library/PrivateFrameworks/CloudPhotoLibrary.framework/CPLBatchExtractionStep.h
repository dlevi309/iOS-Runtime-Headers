/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@protocol CPLBatchExtractionStrategyStorage;
@class NSString;

@interface CPLBatchExtractionStep : NSObject {

	id<CPLBatchExtractionStrategyStorage> _storage;
	NSString* _scopeIdentifier;

}

@property (nonatomic,readonly) id<CPLBatchExtractionStrategyStorage> storage;              //@synthesize storage=_storage - In the implementation block
@property (nonatomic,copy,readonly) NSString * scopeIdentifier;                            //@synthesize scopeIdentifier=_scopeIdentifier - In the implementation block
-(id<CPLBatchExtractionStrategyStorage>)storage;
-(id)shortDescription;
-(id)description;
-(void)reset;
-(NSString *)scopeIdentifier;
-(void)resetConditionallyFromNewIncomingChange:(id)arg1 ;
-(id)initWithStorage:(id)arg1 scopeIdentifier:(id)arg2 ;
-(BOOL)extractToBatch:(id)arg1 maximumCount:(unsigned long long)arg2 maximumResourceSize:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)shouldResetFromThisStepWithIncomingChange:(id)arg1 ;
@end

