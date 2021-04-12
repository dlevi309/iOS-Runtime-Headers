/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)failWithError:(id)arg1 ;
-(id)request;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)_initWithRequest:(id)arg1 remoteResponseListenerEndpoint:(id)arg2 usageResultListenerEndpoint:(id)arg3 ;
-(id)_responseHandlerConnection;
-(void)_invalidateConectionAfterMessageSent:(id)arg1 ;
-(id)_usageResultHandlerConnection;
-(void)completeWithResponse:(id)arg1 ;
-(void)reportUsageResult:(id)arg1 ;
@end

