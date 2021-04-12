/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)domain;
-(id)initWithDomain:(id)arg1 ;
-(void)enqueueCorrectionsRequestForFormMetadata:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)bestAvailableMetadataFromMetadata:(id)arg1 ;
-(id)bestAvailableMetadataFromControlMetadata:(id)arg1 ;
-(void)_commonInitWithDomain:(id)arg1 correctionsStore:(id)arg2 ;
-(BOOL)hasAttemptedToCorrectMetadata:(id)arg1 ;
@end

