/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(unsigned long long)specialization;
+(id)specializedMetadataProviderForResourceWithContext:(id)arg1 ;
-(void)cancel;
-(void)start;
-(void)done;
-(void)fail;
@end

