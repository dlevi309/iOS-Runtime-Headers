/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCCoreConfiguration, FCContentContext;
@class NSString, NSArray, NTPBTodayConfig, NSError, NSDictionary;

@interface FCTodayConfigOperation : FCOperation {

	id<FCCoreConfiguration> _configuration;
	id<FCContentContext> _context;
	NSString* _widgetConfigID;
	NSArray* _networkEvents;
	/*^block*/id _defaultConfigCompletionHandler;
	/*^block*/id _singleTagConfigCompletionHandler;
	NTPBTodayConfig* _resultDefaultConfig;
	NSError* _defaultConfigError;
	NTPBTodayConfig* _resultSingleTagConfig;
	NSError* _singleTagConfigError;
	NSDictionary* _resultHeldRecordsByType;

}

@property (nonatomic,copy) NTPBTodayConfig * resultDefaultConfig;                 //@synthesize resultDefaultConfig=_resultDefaultConfig - In the implementation block
@property (nonatomic,copy) NSError * defaultConfigError;                          //@synthesize defaultConfigError=_defaultConfigError - In the implementation block
@property (nonatomic,copy) NTPBTodayConfig * resultSingleTagConfig;               //@synthesize resultSingleTagConfig=_resultSingleTagConfig - In the implementation block
@property (nonatomic,copy) NSError * singleTagConfigError;                        //@synthesize singleTagConfigError=_singleTagConfigError - In the implementation block
@property (nonatomic,copy) NSArray * networkEvents;                               //@synthesize networkEvents=_networkEvents - In the implementation block
@property (nonatomic,retain) NSDictionary * resultHeldRecordsByType;              //@synthesize resultHeldRecordsByType=_resultHeldRecordsByType - In the implementation block
@property (copy) id<FCCoreConfiguration> configuration;                           //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) id<FCContentContext> context;                        //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * widgetConfigID;                             //@synthesize widgetConfigID=_widgetConfigID - In the implementation block
@property (nonatomic,copy) id defaultConfigCompletionHandler;                     //@synthesize defaultConfigCompletionHandler=_defaultConfigCompletionHandler - In the implementation block
@property (nonatomic,copy) id singleTagConfigCompletionHandler;                   //@synthesize singleTagConfigCompletionHandler=_singleTagConfigCompletionHandler - In the implementation block
-(void)setResultHeldRecordsByType:(NSDictionary *)arg1 ;
-(BOOL)validateOperation;
-(NSDictionary *)resultHeldRecordsByType;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(id)init;
-(NSString *)widgetConfigID;
-(id<FCContentContext>)context;
-(void)setNetworkEvents:(NSArray *)arg1 ;
-(id<FCCoreConfiguration>)configuration;
-(id)defaultConfigCompletionHandler;
-(id)singleTagConfigCompletionHandler;
-(id)_todayConfigWithConfigJSON:(id)arg1 articleListIDs:(id)arg2 articleIDs:(id)arg3 error:(id*)arg4 ;
-(void)setDefaultConfigError:(NSError *)arg1 ;
-(void)setSingleTagConfigError:(NSError *)arg1 ;
-(void)setResultDefaultConfig:(NTPBTodayConfig *)arg1 ;
-(void)setResultSingleTagConfig:(NTPBTodayConfig *)arg1 ;
-(NTPBTodayConfig *)resultDefaultConfig;
-(NTPBTodayConfig *)resultSingleTagConfig;
-(NSError *)defaultConfigError;
-(NSError *)singleTagConfigError;
-(void)_collectRecordIDsReferencedBySectionConfig:(id)arg1 withArticleListIDs:(id)arg2 articleIDs:(id)arg3 ;
-(void)setDefaultConfigCompletionHandler:(id)arg1 ;
-(void)setSingleTagConfigCompletionHandler:(id)arg1 ;
-(NSArray *)networkEvents;
-(void)setWidgetConfigID:(NSString *)arg1 ;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
-(void)setContext:(id<FCContentContext>)arg1 ;
@end

