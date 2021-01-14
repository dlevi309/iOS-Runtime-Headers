/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

