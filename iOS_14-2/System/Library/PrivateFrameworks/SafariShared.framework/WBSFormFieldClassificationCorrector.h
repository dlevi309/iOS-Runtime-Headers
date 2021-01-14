/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol WBSFormFieldClassificationCorrectorDelegate;
@class WBSFormAutoFillClassificationToCorrectionsTransformer, NSSet, NSString, WBSFormMetadata, NSDictionary;

@interface WBSFormFieldClassificationCorrector : NSObject {

	WBSFormAutoFillClassificationToCorrectionsTransformer* _classificationToCorrectionsTransformer;
	NSSet* _uniqueIDsOfControlsThatWereAutoFilled;
	id<WBSFormFieldClassificationCorrectorDelegate> _delegate;
	NSString* _domain;
	WBSFormMetadata* _formMetadata;
	NSDictionary* _formValues;

}

@property (assign,nonatomic,__weak) id<WBSFormFieldClassificationCorrectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * domain;                                                     //@synthesize domain=_domain - In the implementation block
@property (nonatomic,copy,readonly) WBSFormMetadata * formMetadata;                                        //@synthesize formMetadata=_formMetadata - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * formValues;                                             //@synthesize formValues=_formValues - In the implementation block
-(id)init;
-(id<WBSFormFieldClassificationCorrectorDelegate>)delegate;
-(NSString *)domain;
-(void)setDelegate:(id<WBSFormFieldClassificationCorrectorDelegate>)arg1 ;
-(NSDictionary *)formValues;
-(id)initWithDomain:(id)arg1 formMetadata:(id)arg2 formValues:(id)arg3 uniqueIDsOfControlsThatWereAutoFilled:(id)arg4 ;
-(id)_classificationCorrectionsForControlWithMetadata:(id)arg1 wasIdentifiedAsAddressBookField:(BOOL*)arg2 ;
-(void)processCorrections;
-(WBSFormMetadata *)formMetadata;
@end

