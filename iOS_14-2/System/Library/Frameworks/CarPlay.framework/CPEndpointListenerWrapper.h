/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <libobjc.A.dylib/BSXPCCoding.h>

@protocol OS_xpc_object;
@class NSObject, NSString;

@interface CPEndpointListenerWrapper : NSObject <BSXPCCoding> {

	NSObject*<OS_xpc_object> _endpoint;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEndpoint:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)endpoint;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCEndpoint:(id)arg1 ;
@end

