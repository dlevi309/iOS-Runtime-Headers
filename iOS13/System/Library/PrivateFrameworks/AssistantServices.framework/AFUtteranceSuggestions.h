/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@protocol OS_dispatch_queue, AFUtteranceSuggestionsDelegate;
@class NSObject, NSArray, NSString;

@interface AFUtteranceSuggestions : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _suggestedUtterances;
	NSString* _languageCode;
	id<AFUtteranceSuggestionsDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSString * languageCode;                                    //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,__weak,readonly) id<AFUtteranceSuggestionsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<AFUtteranceSuggestionsDelegate>)delegate;
-(NSString *)languageCode;
-(id)_suggestionsFilePath;
-(id)initWithLanguageCode:(id)arg1 delegate:(id)arg2 ;
-(void)getSuggestedUtterancesWithCompletion:(/*^block*/id)arg1 ;
-(void)setSuggestedUtterances:(id)arg1 ;
@end

