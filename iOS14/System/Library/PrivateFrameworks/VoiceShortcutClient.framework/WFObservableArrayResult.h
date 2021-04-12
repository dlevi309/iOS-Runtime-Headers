/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
*/

#import <VoiceShortcutClient/VoiceShortcutClient-Structs.h>
#import <VoiceShortcutClient/WFObservableResult.h>

@class NSArray, WFWorkflowQuery, WFCoreDataResultState;

@interface WFObservableArrayResult : WFObservableResult {

	NSArray* _values;
	WFWorkflowQuery* _query;
	WFCoreDataResultState* _resultState;

}

@property (nonatomic,readonly) WFWorkflowQuery * query;                      //@synthesize query=_query - In the implementation block
@property (nonatomic,copy) WFCoreDataResultState * resultState;              //@synthesize resultState=_resultState - In the implementation block
@property (nonatomic,readonly) NSArray * values;                             //@synthesize values=_values - In the implementation block
+(void)getResultWithQuery:(id)arg1 valueType:(Class)arg2 glyphSize:(CGSize)arg3 completionHandler:(/*^block*/id)arg4 ;
-(WFWorkflowQuery *)query;
-(NSArray *)values;
-(id)description;
-(id)initWithValueType:(Class)arg1 glyphSize:(CGSize)arg2 initialValues:(id)arg3 query:(id)arg4 resultState:(id)arg5 ;
-(void)handleChangeNotification:(id)arg1 ;
-(WFCoreDataResultState *)resultState;
-(void)setResultState:(WFCoreDataResultState *)arg1 ;
@end

