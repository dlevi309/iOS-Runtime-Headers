/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
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
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSObject*<OS_xpc_object>)endpoint;
-(id)initWithEndpoint:(id)arg1 customURLHandlerObjectID:(unsigned long long)arg2 authHandlerObjectID:(unsigned long long)arg3 contentKeySessionHandlerObjectID:(unsigned long long)arg4 ;
-(unsigned long long)customURLHandlerObjectID;
-(unsigned long long)authHandlerObjectID;
-(unsigned long long)contentKeySessionHandlerObjectID;
@end

