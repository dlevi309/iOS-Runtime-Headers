/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
*/


@protocol OS_xpc_object;
@class NSObject, NSString;

@interface _CDXPCEventSubscriber : NSObject {

	unsigned _uid;
	unsigned long long _token;
	NSObject*<OS_xpc_object> _descriptor;
	NSString* _streamName;

}

@property (nonatomic,readonly) unsigned long long token;                         //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) unsigned uid;                                     //@synthesize uid=_uid - In the implementation block
@property (nonatomic,readonly) NSString * streamName;                            //@synthesize streamName=_streamName - In the implementation block
@property (nonatomic,readonly) NSString * clientIdentifier; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)token;
-(unsigned)uid;
-(NSString *)streamName;
-(NSObject*<OS_xpc_object>)descriptor;
-(NSString *)clientIdentifier;
-(id)initWithToken:(unsigned long long)arg1 descriptor:(id)arg2 userID:(unsigned)arg3 streamName:(id)arg4 ;
@end

