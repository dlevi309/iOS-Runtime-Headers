/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_xpc_object;
@class NSDictionary, NSObject, NSSet, NSString;

@interface SBSRemoteAlertConfigurationContext : NSObject <BSXPCCoding, NSSecureCoding> {

	NSDictionary* _userInfo;
	NSObject*<OS_xpc_object> _xpcEndpoint;
	NSSet* _actions;
	NSDictionary* _legacyAlertOptions;

}

@property (nonatomic,copy,readonly) NSDictionary * legacyAlertOptions;              //@synthesize legacyAlertOptions=_legacyAlertOptions - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                                 //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcEndpoint;                  //@synthesize xpcEndpoint=_xpcEndpoint - In the implementation block
@property (nonatomic,copy) NSSet * actions;                                         //@synthesize actions=_actions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)configurationContextWithLegacyAlertOptions:(id)arg1 ;
-(void)setActions:(NSSet *)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(NSSet *)actions;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(NSObject*<OS_xpc_object>)xpcEndpoint;
-(void)setXpcEndpoint:(NSObject*<OS_xpc_object>)arg1 ;
-(NSDictionary *)legacyAlertOptions;
@end

