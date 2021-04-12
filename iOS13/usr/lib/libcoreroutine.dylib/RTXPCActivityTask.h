/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@protocol OS_xpc_object;
@class NSString, NSObject;

@interface RTXPCActivityTask : NSObject {

	NSString* _identifier;
	NSObject*<OS_xpc_object> _activity;
	/*^block*/id _handler;

}

@property (nonatomic,readonly) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> activity;              //@synthesize activity=_activity - In the implementation block
@property (nonatomic,copy,readonly) id handler;                                //@synthesize handler=_handler - In the implementation block
-(id)init;
-(id)handler;
-(NSString *)identifier;
-(NSObject*<OS_xpc_object>)activity;
-(id)initWithIdentifier:(id)arg1 activity:(id)arg2 handler:(/*^block*/id)arg3 ;
@end

