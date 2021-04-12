/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LPMetadataProviderSpecialization.h>

@protocol LPiTunesMediaUnresolvedMetadata;
@class NSString, LPiTunesMediaLookupTask, LPSpecializationMetadata, LPFetcherGroup;

@interface LPiTunesMediaMetadataProviderSpecialization : LPMetadataProviderSpecialization {

	NSString* _identifier;
	NSString* _storefrontCountryCode;
	BOOL _canceled;
	LPiTunesMediaLookupTask* _lookupTask;
	LPSpecializationMetadata* _resolvedMetadata;
	id<LPiTunesMediaUnresolvedMetadata> _unresolvedMetadata;
	LPFetcherGroup* _fetcherGroup;

}
+(unsigned long long)specialization;
+(long long)determineOrientationOfScreenshotsInArray:(id)arg1 ;
+(id)assetArrayScreenshotArray:(id)arg1 ;
+(id)assetArrayFromScreenshotArray:(id)arg1 ;
+(id)extractOffers:(id)arg1 ;
+(id)assetArrayFromScreenshotDictionary:(id)arg1 usingPreferredPlatformArray:(id)arg2 ;
+(id)assetFromVideoPreviewDictionary:(id)arg1 usingPreferredPlatformArray:(id)arg2 ;
+(id)specializedMetadataProviderForURLWithContext:(id)arg1 ;
+(id)specializedMetadataProviderForMetadata:(id)arg1 withContext:(id)arg2 ;
-(void)cancel;
-(void)start;
-(id)schema;
-(void)resolve;
-(void)completed;
-(void)done;
-(void)fail;
-(id)initWithIdentifier:(id)arg1 storefrontCountryCode:(id)arg2 withContext:(id)arg3 ;
-(id)processResponseDictionary:(id)arg1 withStorefrontIdentifier:(id)arg2 ;
@end

