/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
*/

#import <libobjc.A.dylib/_DECServer.h>

@protocol _DECServer <_DECServerInterface>
@required
-(void)invalidate;

@end


@protocol OS_dispatch_queue;
@class _DECServerResponder, _DECPredictionCache, NSObject, NSString, NSXPCConnection;

@interface _DECServer : NSObject <_DECServer> {

	_DECServerResponder* _responder;
	_DECPredictionCache* _resultCache;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _categories;
	long long _type;
	NSString* _identifier;
	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) unsigned long long categories;              //@synthesize categories=_categories - In the implementation block
@property (nonatomic,readonly) long long type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * connection;               //@synthesize connection=_connection - In the implementation block
+(id)serverWithConnection:(id)arg1 responder:(id)arg2 ;
+(id)_defaultRestorationDirectory;
-(void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 limit:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)registerClient:(long long)arg1 category:(unsigned long long)arg2 identifier:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)userAbandoned:(id)arg1 result:(id)arg2 metadata:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 criteria:(id)arg3 limit:(unsigned long long)arg4 providesFeedback:(BOOL)arg5 reply:(/*^block*/id)arg6 ;
-(unsigned long long)categories;
-(void)_filterPrediction:(id)arg1 forConsumer:(unsigned long long)arg2 ;
-(id)initWithConnection:(id)arg1 responder:(id)arg2 ;
-(void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 limit:(unsigned long long)arg3 providesFeedback:(BOOL)arg4 reply:(/*^block*/id)arg5 ;
-(void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 criteria:(id)arg3 limit:(unsigned long long)arg4 backgroundQuery:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(NSXPCConnection *)connection;
-(void)userEngaged:(id)arg1 result:(id)arg2 metadata:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)prewarmPredictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(long long)type;
-(void)invalidate;
-(id)_restorationPath;
-(NSString *)identifier;
-(void)setPrediction:(id)arg1 category:(unsigned long long)arg2 consumer:(unsigned long long)arg3 reply:(/*^block*/id)arg4 ;
@end

