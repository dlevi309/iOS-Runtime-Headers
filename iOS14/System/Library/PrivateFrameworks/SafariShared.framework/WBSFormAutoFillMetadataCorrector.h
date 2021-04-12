/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol WBSFormAutoFillCorrectionsStore;
@class NSCache, WBSFormAutoFillClassificationToCorrectionsTransformer, NSMutableSet, NSString;

@interface WBSFormAutoFillMetadataCorrector : NSObject {

	id<WBSFormAutoFillCorrectionsStore> _correctionsStore;
	NSCache* _fingerprintsToCorrections;
	WBSFormAutoFillClassificationToCorrectionsTransformer* _classificationToCorrectionsTransformer;
	NSMutableSet* _correctedFormMetadataID;
	NSString* _domain;

}

@property (nonatomic,readonly) NSString * domain;              //@synthesize domain=_domain - In the implementation block
-(id)init;
-(id)initWithDomain:(id)arg1 ;
-(NSString *)domain;
-(void)_commonInitWithDomain:(id)arg1 correctionsStore:(id)arg2 ;
-(id)bestAvailableMetadataFromControlMetadata:(id)arg1 ;
-(void)enqueueCorrectionsRequestForFormMetadata:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)hasAttemptedToCorrectMetadata:(id)arg1 ;
-(id)bestAvailableMetadataFromMetadata:(id)arg1 ;
@end

