/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/_LTTranslationRequest.h>

@class NSString, NSArray;

@interface _LTParagraphTranslationRequest : _LTTranslationRequest {

	NSString* _text;
	NSArray* _ranges;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) NSString * text;                   //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSArray * ranges;                  //@synthesize ranges=_ranges - In the implementation block
@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
-(NSArray *)ranges;
-(void)setCompletionHandler:(id)arg1 ;
-(void)_startTranslationWithService:(id)arg1 done:(/*^block*/id)arg2 ;
-(id)loggingType;
-(void)_translationFailedWithError:(id)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(id)completionHandler;
-(id)translationParagraph;
-(NSString *)text;
-(void)setRanges:(NSArray *)arg1 ;
@end

