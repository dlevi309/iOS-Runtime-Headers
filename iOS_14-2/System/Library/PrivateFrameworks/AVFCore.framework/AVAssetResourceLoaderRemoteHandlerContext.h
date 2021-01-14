/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_xpc_object;
@class NSObject;

@interface AVAssetResourceLoaderRemoteHandlerContext : NSObject <NSSecureCoding> {

	NSObject*<OS_xpc_object> _endpoint;
	unsigned long long _customURLHandlerObjectID;
	unsigned long long _authHandlerObjectID;
	unsigned long long _contentKeySessionHandlerObjectID;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> endpoint;                                //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,readonly) unsigned long long customURLHandlerObjectID;                      //@synthesize customURLHandlerObjectID=_customURLHandlerObjectID - In the implementation block
@property (nonatomic,readonly) unsigned long long authHandlerObjectID;                           //@synthesize authHandlerObjectID=_authHandlerObjectID - In the implementation block
@property (nonatomic,readonly) unsigned long long contentKeySessionHandlerObjectID;              //@synthesize contentKeySessionHandlerObjectID=_contentKeySessionHandlerObjectID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSObject*<OS_xpc_object>)endpoint;
-(unsigned long long)customURLHandlerObjectID;
-(unsigned long long)contentKeySessionHandlerObjectID;
-(unsigned long long)authHandlerObjectID;
-(id)initWithEndpoint:(id)arg1 customURLHandlerObjectID:(unsigned long long)arg2 authHandlerObjectID:(unsigned long long)arg3 contentKeySessionHandlerObjectID:(unsigned long long)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
@end

