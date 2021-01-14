/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation
*/


@protocol OS_dispatch_queue;
@class NSString, NSXPCConnection, NSObject;

@interface BRLTTranslationService : NSObject {

	BOOL _invalid;
	BOOL _interrupted;
	NSString* _serviceIdentifier;
	/*^block*/id _invalidationHandler;
	NSXPCConnection* _queue_connection;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSXPCConnection * queue_connection;              //@synthesize queue_connection=_queue_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,getter=isInvalid,nonatomic) BOOL invalid;                   //@synthesize invalid=_invalid - In the implementation block
@property (assign,nonatomic) BOOL interrupted;                                //@synthesize interrupted=_interrupted - In the implementation block
@property (nonatomic,readonly) NSString * serviceIdentifier;                  //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (getter=isLoopback,nonatomic,readonly) BOOL loopback; 
@property (nonatomic,copy) id invalidationHandler;                            //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
+(id)serviceForIdentifier:(id)arg1 ;
+(id)connections;
+(id)serviceForIdentifier:(id)arg1 loopback:(BOOL)arg2 ;
+(id)connectionForServiceIdentifier:(id)arg1 ;
+(id)connectionForLoopbackService:(id)arg1 ;
-(BOOL)isInvalid;
-(void)setQueue_connection:(NSXPCConnection *)arg1 ;
-(void)_queue_invalidate;
-(void)setInterrupted:(BOOL)arg1 ;
-(NSString *)serviceIdentifier;
-(id)description;
-(BOOL)interrupted;
-(void)setInvalid:(BOOL)arg1 ;
-(NSXPCConnection *)queue_connection;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_queue_resume;
-(id)invalidationHandler;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)brailleForText:(id)arg1 parameters:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)textForBraille:(id)arg1 parameters:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(id)initWithServiceIdentifier:(id)arg1 connection:(id)arg2 ;
-(void)_queue_loadBundle;
-(id)_queue_serviceProxy;
-(BOOL)isLoopback;
@end

