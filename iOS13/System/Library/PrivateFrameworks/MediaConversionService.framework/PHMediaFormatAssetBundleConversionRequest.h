/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
*/

#import <MediaConversionService/PHMediaFormatConversionCompositeRequest.h>

@class NSArray;

@interface PHMediaFormatAssetBundleConversionRequest : PHMediaFormatConversionCompositeRequest {

	NSArray* _subrequests;

}

@property (retain) NSArray * subrequests;              //@synthesize subrequests=_subrequests - In the implementation block
-(id)outputFileType;
-(id)outputPathExtension;
-(BOOL)prepareWithError:(id*)arg1 ;
-(BOOL)requiresMetadataChanges;
-(BOOL)requiresFormatConversion;
-(void)enqueueSubrequestsOnConversionManager:(id)arg1 ;
-(void)enumerateSubrequests:(/*^block*/id)arg1 ;
-(void)postProcessSuccessfulCompositeRequest;
-(NSArray *)subrequests;
-(void)setSubrequests:(NSArray *)arg1 ;
@end

