/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
*/


@class _PASXPCClientHelper;

@interface ATXInfoSuggestionFeedbackClient : NSObject {

	_PASXPCClientHelper* _xpcClientHelper;

}
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(void)suggestionDismissed:(id)arg1 isDismissalLongTerm:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)stackDidRotateProactivelyForInfoSuggestion:(id)arg1 isStalenessRotation:(BOOL)arg2 ;
@end

