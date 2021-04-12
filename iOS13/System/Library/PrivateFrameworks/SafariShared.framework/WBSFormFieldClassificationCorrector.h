/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)domain;
-(id<WBSFormFieldClassificationCorrectorDelegate>)delegate;
-(void)setDelegate:(id<WBSFormFieldClassificationCorrectorDelegate>)arg1 ;
-(WBSFormMetadata *)formMetadata;
-(id)initWithDomain:(id)arg1 formMetadata:(id)arg2 formValues:(id)arg3 uniqueIDsOfControlsThatWereAutoFilled:(id)arg4 ;
-(id)_classificationCorrectionsForControlWithMetadata:(id)arg1 wasIdentifiedAsAddressBookField:(BOOL*)arg2 ;
-(void)processCorrections;
-(NSDictionary *)formValues;
@end

