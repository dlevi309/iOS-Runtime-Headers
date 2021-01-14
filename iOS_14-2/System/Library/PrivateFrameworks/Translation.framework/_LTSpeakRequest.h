/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/_LTTranslationRequest.h>

@class NSString;

@interface _LTSpeakRequest : _LTTranslationRequest {

	NSString* _text;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) NSString * text;                 //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)setCompletionHandler:(id)arg1 ;
-(void)_startTranslationWithService:(id)arg1 done:(/*^block*/id)arg2 ;
-(void)setText:(NSString *)arg1 ;
-(id)requestContext;
-(id)completionHandler;
-(NSString *)text;
@end

