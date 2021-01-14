/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TrialServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_os_transaction, OS_xpc_object;
@class NSObject, NSString;

@interface TRIRunningXPCActivityDescriptor : NSObject <NSCopying> {

	NSObject*<OS_os_transaction> _txn;
	NSString* _name;
	/*^block*/id _shouldDefer;
	/*^block*/id _completion;
	NSObject*<OS_xpc_object> _activity;
	unsigned long long _capabilities;

}

@property (nonatomic,copy) id shouldDefer;                                     //@synthesize shouldDefer=_shouldDefer - In the implementation block
@property (nonatomic,copy) id completion;                                      //@synthesize completion=_completion - In the implementation block
@property (nonatomic,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> activity;              //@synthesize activity=_activity - In the implementation block
@property (nonatomic,readonly) unsigned long long capabilities;                //@synthesize capabilities=_capabilities - In the implementation block
-(id)shouldDefer;
-(void)setCompletion:(id)arg1 ;
-(unsigned long long)capabilities;
-(id)init;
-(NSObject*<OS_xpc_object>)activity;
-(id)completion;
-(NSString *)name;
-(void)setShouldDefer:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initForImmediateWorkWithCapabilities:(unsigned long long)arg1 ;
-(id)initWithActivity:(id)arg1 capabilities:(unsigned long long)arg2 name:(id)arg3 ;
@end

