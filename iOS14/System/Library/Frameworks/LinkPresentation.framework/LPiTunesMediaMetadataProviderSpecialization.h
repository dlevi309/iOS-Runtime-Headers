/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(long long)determineOrientationOfScreenshotsInArray:(id)arg1 ;
+(id)assetArrayScreenshotArray:(id)arg1 ;
+(id)assetArrayFromScreenshotArray:(id)arg1 ;
+(id)extractOffers:(id)arg1 ;
+(id)assetArrayFromScreenshotDictionary:(id)arg1 usingPreferredPlatformArray:(id)arg2 ;
+(id)assetFromVideoPreviewDictionary:(id)arg1 usingPreferredPlatformArray:(id)arg2 ;
+(id)specializedMetadataProviderForURLWithContext:(id)arg1 ;
+(id)specializedMetadataProviderForMetadata:(id)arg1 withContext:(id)arg2 ;
+(unsigned long long)specialization;
-(id)schema;
-(void)fail;
-(void)start;
-(void)completed;
-(void)done;
-(id)initWithIdentifier:(id)arg1 storefrontCountryCode:(id)arg2 withContext:(id)arg3 ;
-(id)processResponseDictionary:(id)arg1 withStorefrontIdentifier:(id)arg2 ;
-(void)resolve;
-(void)cancel;
@end

