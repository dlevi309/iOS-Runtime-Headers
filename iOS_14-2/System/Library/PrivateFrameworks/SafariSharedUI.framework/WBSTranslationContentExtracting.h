/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@protocol WBSTranslationContentExtracting <NSObject>
@property (assign,nonatomic,__weak) id<WBSTranslationContentExtractionDelegate> extractionDelegate; 
@required
-(void)beginExtractingContent;
-(void)stopExtractingContent;
-(id<WBSTranslationContentExtractionDelegate>)extractionDelegate;
-(void)setExtractionDelegate:(id)arg1;

@end

