/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TrialServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_os_transaction, OS_xpc_object;
@class NSObject, NSString;

@interface TRIXPCActivityDescriptor : NSObject <NSCopying> {

	NSObject*<OS_os_transaction> _txn;
	NSString* _name;
	/*^block*/id _shouldDefer;
	/*^block*/id _completion;
	NSObject*<OS_xpc_object> _activity;

}

@property (nonatomic,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) id shouldDefer;                                 //@synthesize shouldDefer=_shouldDefer - In the implementation block
@property (nonatomic,readonly) id completion;                                  //@synthesize completion=_completion - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> activity;              //@synthesize activity=_activity - In the implementation block
-(id)init;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSObject*<OS_xpc_object>)activity;
-(id)shouldDefer;
-(id)completion;
-(id)initWithActivity:(id)arg1 name:(id)arg2 ;
@end

