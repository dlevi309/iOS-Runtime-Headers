/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <SpringBoardServices/SpringBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_xpc_object;
@class NSString, NSObject, NSDictionary;

@interface SBSRemoteContentDefinition : NSObject <BSXPCCoding, BSDescriptionProviding, NSCopying> {

	NSString* _serviceName;
	NSString* _viewControllerClassName;
	NSObject*<OS_xpc_object> _xpcEndpoint;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy,readonly) NSString * serviceName;                          //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy,readonly) NSString * viewControllerClassName;              //@synthesize viewControllerClassName=_viewControllerClassName - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcEndpoint;                   //@synthesize xpcEndpoint=_xpcEndpoint - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                                  //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)succinctDescription;
-(NSDictionary *)userInfo;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(id)initWithXPCDictionary:(id)arg1 ;
-(NSString *)serviceName;
-(NSString *)viewControllerClassName;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(NSObject*<OS_xpc_object>)xpcEndpoint;
-(id)initWithServiceName:(id)arg1 viewControllerClassName:(id)arg2 ;
-(void)setXpcEndpoint:(NSObject*<OS_xpc_object>)arg1 ;
-(id)initWithServiceName:(id)arg1 viewControllerClassName:(id)arg2 xpcEndpoint:(id)arg3 userInfo:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

