/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LPMetadataProviderSpecialization.h>

@class CLGeocoder, _MKURLParser, LPMapMetadata, LPMapCollectionMetadata;

@interface LPAppleMapsMetadataProviderSpecialization : LPMetadataProviderSpecialization {

	BOOL _cancelled;
	CLGeocoder* _geocoder;
	_MKURLParser* _parser;
	LPMapMetadata* _mapMetadata;
	LPMapCollectionMetadata* _collectionMetadata;

}
+(unsigned long long)specialization;
+(id)specializedMetadataProviderForURLWithContext:(id)arg1 ;
-(void)cancel;
-(void)start;
-(void)complete;
-(void)fail;
-(void)continueWithBaseSnapshotOptions:(id)arg1 mapItems:(id)arg2 ;
-(void)completeWithCollection;
-(void)completeWithDirections;
-(void)resolveMapRegionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)completeWithSearchQuery:(id)arg1 ;
-(void)completeWithMapItem:(id)arg1 ;
-(id)geocoder;
-(void)completeWithPlacemark:(id)arg1 ;
@end

