/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSXPCCoding.h>

@class AFSiriRequest, NSXPCListenerEndpoint, NSString;

@interface AFSiriTask : NSObject <NSSecureCoding, BSXPCCoding> {

	AFSiriRequest* _request;
	NSXPCListenerEndpoint* _remoteResponseListenerEndpoint;
	NSXPCListenerEndpoint* _usageResultListenerEndpoint;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)request;
-(NSString *)description;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)_initWithRequest:(id)arg1 remoteResponseListenerEndpoint:(id)arg2 usageResultListenerEndpoint:(id)arg3 ;
-(void)failWithError:(id)arg1 ;
-(id)_responseHandlerConnection;
-(void)_invalidateConnectionAfterMessageSent:(id)arg1 ;
-(id)_usageResultHandlerConnection;
-(void)completeWithResponse:(id)arg1 ;
-(void)reportUsageResult:(id)arg1 ;
-(void)dealloc;
@end

