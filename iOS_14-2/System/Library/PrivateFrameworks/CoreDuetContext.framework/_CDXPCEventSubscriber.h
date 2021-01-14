/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned)uid;
-(NSString *)streamName;
-(NSObject*<OS_xpc_object>)descriptor;
-(id)description;
-(unsigned long long)hash;
-(unsigned long long)token;
-(id)initWithToken:(unsigned long long)arg1 descriptor:(id)arg2 userID:(unsigned)arg3 streamName:(id)arg4 ;
-(NSString *)clientIdentifier;
-(BOOL)isEqual:(id)arg1 ;
@end

