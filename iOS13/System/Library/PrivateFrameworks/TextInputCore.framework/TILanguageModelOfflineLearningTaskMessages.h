/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TILanguageModelOfflineLearningTask.h>

@protocol TILinguisticDataSource;
@interface TILanguageModelOfflineLearningTaskMessages : TILanguageModelOfflineLearningTask {

	id<TILinguisticDataSource> _dataSource;

}
+(id)dataSourceForTask;
-(id)dataSource;
-(id)initWithClientIdentifier:(id)arg1 oneTimeTask:(BOOL)arg2 ;
@end

