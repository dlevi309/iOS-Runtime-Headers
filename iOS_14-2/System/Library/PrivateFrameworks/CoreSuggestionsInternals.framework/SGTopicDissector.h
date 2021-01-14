/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/SGPipelineDissector.h>
#import <libobjc.A.dylib/SGMailMessageProcessing.h>

@class CKContextClient, PPTextToTopicTransform, NSString;

@interface SGTopicDissector : SGPipelineDissector <SGMailMessageProcessing> {

	CKContextClient* _contextClient;
	PPTextToTopicTransform* _transform;
	BOOL _significanceCheckEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_collectHighLevelTopicsWithText:(id)arg1 bundleId:(id)arg2 addTopic:(/*^block*/id)arg3 weight:(double)arg4 ;
-(id)initWithContextClient:(id)arg1 significanceCheckEnabled:(BOOL)arg2 ;
-(id)init;
-(id)initWithSignificanceCheckEnabled:(BOOL)arg1 ;
-(id)topicsInText:(id)arg1 isPlainText:(BOOL)arg2 source:(id)arg3 cloudSync:(BOOL)arg4 language:(id)arg5 topicAlgorithms:(id)arg6 namedEntityAlgorithms:(id)arg7 weight:(double)arg8 ;
-(void)_collectResultsFromContextKitWithText:(id)arg1 isPlainText:(BOOL)arg2 bundleId:(id)arg3 language:(id)arg4 useContextKitTopics:(BOOL)arg5 useContextKitNamedEntities:(BOOL)arg6 addTopic:(/*^block*/id)arg7 addNamedEntity:(/*^block*/id)arg8 weight:(double)arg9 ;
-(void)dissectMailMessage:(id)arg1 entity:(id)arg2 context:(id)arg3 ;
-(id)extractionsFromContextKitWithText:(id)arg1 isPlainText:(BOOL)arg2 bundleId:(id)arg3 language:(id)arg4 weight:(double)arg5 ;
@end

