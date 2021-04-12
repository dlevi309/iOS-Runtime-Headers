/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LPMetadataProviderSpecialization.h>

@class LPMediaAssetFetcher, AVAssetImageGenerator, LPLinkMetadata;

@interface LPStreamingMediaMetadataProviderSpecialization : LPMetadataProviderSpecialization {

	BOOL _cancelled;
	LPMediaAssetFetcher* _fetcher;
	AVAssetImageGenerator* _videoImageGenerator;
	LPLinkMetadata* _metadata;

}
+(id)specializedMetadataProviderForResourceWithContext:(id)arg1 ;
+(unsigned long long)specialization;
-(void)fail;
-(void)start;
-(void)done;
-(void)cancel;
@end

