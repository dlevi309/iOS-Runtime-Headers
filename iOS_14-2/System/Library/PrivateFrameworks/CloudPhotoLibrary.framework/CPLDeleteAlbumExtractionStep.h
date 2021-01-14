/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLBatchExtractionStep.h>

@interface CPLDeleteAlbumExtractionStep : CPLBatchExtractionStep {

	unsigned long long _maximumCount;

}

@property (nonatomic,readonly) unsigned long long maximumCount;              //@synthesize maximumCount=_maximumCount - In the implementation block
-(unsigned long long)maximumCount;
-(id)shortDescription;
-(BOOL)extractToBatch:(id)arg1 maximumCount:(unsigned long long)arg2 maximumResourceSize:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)shouldResetFromThisStepWithIncomingChange:(id)arg1 ;
-(id)initWithStorage:(id)arg1 scopeIdentifier:(id)arg2 maximumCount:(unsigned long long)arg3 ;
@end

