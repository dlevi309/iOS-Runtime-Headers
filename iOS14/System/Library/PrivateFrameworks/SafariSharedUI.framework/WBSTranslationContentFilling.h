/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@protocol WBSTranslationContentFilling <NSObject>
@property (assign,nonatomic,__weak) id<WBSTranslationContentFillingDelegate> fillingDelegate; 
@required
-(void)replaceExtractedContent:(id)arg1 withTranslatedContent:(id)arg2 targetLocale:(id)arg3;
-(id<WBSTranslationContentFillingDelegate>)fillingDelegate;
-(void)setFillingDelegate:(id)arg1;

@end

