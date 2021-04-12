/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/


@class _LTTranslationParagraph, FTMutableBatchTranslationRequest_Paragraph;

@interface _FTParagraphBatchInfo : NSObject {

	/*^block*/id _completion;
	_LTTranslationParagraph* _paragraph;
	FTMutableBatchTranslationRequest_Paragraph* _requestParagraph;

}

@property (nonatomic,copy) id completion;                                                                //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) _LTTranslationParagraph * paragraph;                                        //@synthesize paragraph=_paragraph - In the implementation block
@property (nonatomic,retain) FTMutableBatchTranslationRequest_Paragraph * requestParagraph;              //@synthesize requestParagraph=_requestParagraph - In the implementation block
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(_LTTranslationParagraph *)paragraph;
-(void)setParagraph:(_LTTranslationParagraph *)arg1 ;
-(FTMutableBatchTranslationRequest_Paragraph *)requestParagraph;
-(void)setRequestParagraph:(FTMutableBatchTranslationRequest_Paragraph *)arg1 ;
@end

