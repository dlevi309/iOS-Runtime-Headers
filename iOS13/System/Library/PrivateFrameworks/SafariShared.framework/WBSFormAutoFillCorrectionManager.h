/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setDelegate:(id<WBSFormAutoFillCorrectionManagerDelegate>)arg1 ;
-(void)_setCorrections:(id)arg1 forFingerprint:(id)arg2 onDomain:(id)arg3 ;
-(id)_feedbackProcessor;
-(id)initWithCorrectionsStore:(id)arg1 ;
-(void)getCorrectionsForFormFieldFingerprint:(id)arg1 onDomain:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setCorrectionSet:(id)arg1 ;
@end

