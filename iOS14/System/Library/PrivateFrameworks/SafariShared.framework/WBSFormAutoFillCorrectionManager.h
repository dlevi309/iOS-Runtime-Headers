/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol WBSFormAutoFillCorrectionsStore, WBSFormAutoFillCorrectionManagerDelegate;
@class WBSFormAutoFillClassificationToCorrectionsTransformer;

@interface WBSFormAutoFillCorrectionManager : NSObject {

	id<WBSFormAutoFillCorrectionsStore> _correctionsStore;
	WBSFormAutoFillClassificationToCorrectionsTransformer* _classificationToCorrectionsTransformer;
	id<WBSFormAutoFillCorrectionManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WBSFormAutoFillCorrectionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<WBSFormAutoFillCorrectionManagerDelegate>)delegate;
-(id)initWithCorrectionsStore:(id)arg1 ;
-(void)setDelegate:(id<WBSFormAutoFillCorrectionManagerDelegate>)arg1 ;
-(void)_setCorrections:(id)arg1 forFingerprint:(id)arg2 onDomain:(id)arg3 ;
-(id)_feedbackProcessor;
-(void)getCorrectionsForFormFieldFingerprint:(id)arg1 onDomain:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setCorrectionSet:(id)arg1 ;
@end

