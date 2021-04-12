/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSObject*<OS_xpc_object>)endpoint;
-(void)setEndpoint:(NSObject*<OS_xpc_object>)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCEndpoint:(id)arg1 ;
@end

