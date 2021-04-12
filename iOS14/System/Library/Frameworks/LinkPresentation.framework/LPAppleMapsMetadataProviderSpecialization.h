/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LPMetadataProviderSpecialization.h>

@class CLGeocoder, _MKURLParser, LPMapMetadata, LPMapCollectionMetadata, LPMapCollectionPublisherMetadata, MKPlaceCuratedCollectionRefiner, MKPlacePublisherRefiner;

@interface LPAppleMapsMetadataProviderSpecialization : LPMetadataProviderSpecialization {

	BOOL _cancelled;
	CLGeocoder* _geocoder;
	_MKURLParser* _parser;
	LPMapMetadata* _mapMetadata;
	LPMapCollectionMetadata* _collectionMetadata;
	LPMapCollectionPublisherMetadata* _publisherMetadata;
	MKPlaceCuratedCollectionRefiner* _curatedCollectionRefiner;
	MKPlacePublisherRefiner* _publisherRefiner;

}
+(id)specializedMetadataProviderForURLWithContext:(id)arg1 ;
+(unsigned long long)specialization;
-(void)fail;
-(void)start;
-(void)complete;
-(id)geocoder;
-(void)completeWithCollection;
-(void)continueWithBaseSnapshotOptions:(id)arg1 mapItems:(id)arg2 ;
-(void)completeWithCuratedCollection;
-(void)completeWithPublisher;
-(void)completeWithDirections;
-(void)resolveMapRegionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)completeWithSearchQuery:(id)arg1 ;
-(void)completeWithMapItem:(id)arg1 ;
-(void)completeWithPlacemark:(id)arg1 ;
-(void)cancel;
@end

