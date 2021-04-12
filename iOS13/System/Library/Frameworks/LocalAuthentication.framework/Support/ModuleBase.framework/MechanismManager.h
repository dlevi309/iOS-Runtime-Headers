/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/ModuleBase.framework/ModuleBase
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, MechanismContext, NSObject;

@interface MechanismManager : NSObject {

	NSMutableDictionary* _plugins;
	MechanismContext* _mechanismContext;
	NSObject*<OS_dispatch_queue> _serverQueue;
	long long _evaluatedPolicy;

}

@property (nonatomic,readonly) long long evaluatedPolicy;                           //@synthesize evaluatedPolicy=_evaluatedPolicy - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serverQueue;              //@synthesize serverQueue=_serverQueue - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_queue>)serverQueue;
-(void)setServerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)loadMechanism:(long long)arg1 initParams:(id)arg2 request:(id)arg3 className:(id)arg4 error:(id*)arg5 ;
-(void)_logClass:(Class)arg1 tag:(id)arg2 level:(int)arg3 ;
-(BOOL)_preloadForPlugin:(long long)arg1 className:(id)arg2 userId:(id)arg3 error:(id*)arg4 ;
-(id)_pathForPlugin:(long long)arg1 error:(id*)arg2 ;
-(void)_logClass:(Class)arg1 tag:(id)arg2 ;
-(id)loadMechanism:(long long)arg1 initParams:(id)arg2 request:(id)arg3 error:(id*)arg4 ;
-(long long)evaluatedPolicy;
@end

