/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCCoreConfiguration, FCContentContext;
@class NSString, NSArray, NTPBTodayConfig, NSDictionary;

@interface FCTodayConfigOperation : FCOperation {

	id<FCCoreConfiguration> _configuration;
	id<FCContentContext> _context;
	NSString* _widgetConfigID;
	NSArray* _networkEvents;
	/*^block*/id _todayConfigCompletionHandler;
	NTPBTodayConfig* _resultTodayConfig;
	NSDictionary* _resultHeldRecordsByType;

}

@property (nonatomic,copy) NTPBTodayConfig * resultTodayConfig;                   //@synthesize resultTodayConfig=_resultTodayConfig - In the implementation block
@property (nonatomic,copy) NSArray * networkEvents;                               //@synthesize networkEvents=_networkEvents - In the implementation block
@property (nonatomic,retain) NSDictionary * resultHeldRecordsByType;              //@synthesize resultHeldRecordsByType=_resultHeldRecordsByType - In the implementation block
@property (copy) id<FCCoreConfiguration> configuration;                           //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) id<FCContentContext> context;                        //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * widgetConfigID;                             //@synthesize widgetConfigID=_widgetConfigID - In the implementation block
@property (nonatomic,copy) id todayConfigCompletionHandler;                       //@synthesize todayConfigCompletionHandler=_todayConfigCompletionHandler - In the implementation block
-(id)init;
-(id<FCContentContext>)context;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
-(id<FCCoreConfiguration>)configuration;
-(NSArray *)networkEvents;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(NSString *)widgetConfigID;
-(void)setNetworkEvents:(NSArray *)arg1 ;
-(NSDictionary *)resultHeldRecordsByType;
-(void)setResultHeldRecordsByType:(NSDictionary *)arg1 ;
-(id)todayConfigCompletionHandler;
-(void)_collectRecordIDsReferencedBySectionConfig:(id)arg1 withArticleListIDs:(id)arg2 articleIDs:(id)arg3 ;
-(void)setResultTodayConfig:(NTPBTodayConfig *)arg1 ;
-(NTPBTodayConfig *)resultTodayConfig;
-(void)setTodayConfigCompletionHandler:(id)arg1 ;
-(void)setWidgetConfigID:(NSString *)arg1 ;
@end

