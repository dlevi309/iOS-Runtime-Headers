/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)_defaultRestorationDirectory;
+(id)serverWithConnection:(id)arg1 responder:(id)arg2 ;
-(void)invalidate;
-(long long)type;
-(NSString *)identifier;
-(NSXPCConnection *)connection;
-(unsigned long long)categories;
-(void)registerClient:(long long)arg1 category:(unsigned long long)arg2 identifier:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 criteria:(id)arg3 limit:(unsigned long long)arg4 providesFeedback:(BOOL)arg5 reply:(/*^block*/id)arg6 ;
-(void)setPrediction:(id)arg1 category:(unsigned long long)arg2 consumer:(unsigned long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)prewarmPredictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 limit:(unsigned long long)arg3 providesFeedback:(BOOL)arg4 reply:(/*^block*/id)arg5 ;
-(void)userEngaged:(id)arg1 result:(id)arg2 metadata:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)userAbandoned:(id)arg1 result:(id)arg2 metadata:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 criteria:(id)arg3 limit:(unsigned long long)arg4 backgroundQuery:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)initWithConnection:(id)arg1 responder:(id)arg2 ;
-(void)_filterPrediction:(id)arg1 forConsumer:(unsigned long long)arg2 ;
-(id)_restorationPath;
-(void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 limit:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

