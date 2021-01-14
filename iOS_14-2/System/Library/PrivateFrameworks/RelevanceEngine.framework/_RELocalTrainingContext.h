/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RETrainingContext.h>
#import <libobjc.A.dylib/RERemoteTrainingServerInterface.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSString;

@interface _RELocalTrainingContext : RETrainingContext <RERemoteTrainingServerInterface> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _invalidationHandler;

}

@property (nonatomic,copy) id invalidationHandler;                  //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConnection:(id)arg1 ;
-(void)_handleInvalidation;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)_configureForRelevanceEngine:(id)arg1 ;
-(id)_elementRelevanceEngine;
-(void)performTrainingWithElements:(id)arg1 events:(id)arg2 interactions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)updateRemoteAttribute:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

