/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@interface PXSearchLoggingUtility : NSObject {

	BOOL _nextTokenSuggestionTappedInCurrentSearchSession;
	BOOL _wordCompletionTappedInCurrentSearchSession;

}

@property (assign,nonatomic) BOOL nextTokenSuggestionTappedInCurrentSearchSession;              //@synthesize nextTokenSuggestionTappedInCurrentSearchSession=_nextTokenSuggestionTappedInCurrentSearchSession - In the implementation block
@property (assign,nonatomic) BOOL wordCompletionTappedInCurrentSearchSession;                   //@synthesize wordCompletionTappedInCurrentSearchSession=_wordCompletionTappedInCurrentSearchSession - In the implementation block
-(BOOL)nextTokenSuggestionTappedInCurrentSearchSession;
-(void)setNextTokenSuggestionTappedInCurrentSearchSession:(BOOL)arg1 ;
-(BOOL)wordCompletionTappedInCurrentSearchSession;
-(void)setWordCompletionTappedInCurrentSearchSession:(BOOL)arg1 ;
-(void)setNextTokenSuggestionTappedInCurrentSearchSession;
-(void)setWordCompletionTappedInCurrentSearchSession;
-(void)logCurrentState;
@end

