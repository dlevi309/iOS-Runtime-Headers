/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/


@class NSString, NSURL;

@interface NUArticleExcerptHTML : NSObject {

	NSString* _processedHTML;
	NSURL* _URL;
	unsigned long long _lengthType;

}

@property (nonatomic,readonly) NSString * processedHTML;                   //@synthesize processedHTML=_processedHTML - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) unsigned long long lengthType;              //@synthesize lengthType=_lengthType - In the implementation block
+(id)articleExcerptCSS;
+(id)articleExcerptHTML;
-(NSURL *)URL;
-(id)stripHTMLTagsFromExcerptHTML:(id)arg1 ;
-(id)excerptHTMLToProcessedHTML:(id)arg1 headline:(id)arg2 scale:(double)arg3 ;
-(id)paragraphShortExcerptHTML:(id)arg1 headline:(id)arg2 ;
-(id)embedCSSIntoExcerptHTML:(id)arg1 scale:(double)arg2 ;
-(id)initWitHeadline:(id)arg1 excerptHTML:(id)arg2 scale:(double)arg3 ;
-(NSString *)processedHTML;
-(unsigned long long)lengthType;
@end

