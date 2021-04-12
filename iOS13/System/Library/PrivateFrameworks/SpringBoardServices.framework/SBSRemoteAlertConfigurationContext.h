/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(NSSet *)actions;
-(void)setActions:(NSSet *)arg1 ;
-(NSDictionary *)legacyAlertOptions;
-(NSObject*<OS_xpc_object>)xpcEndpoint;
-(void)setXpcEndpoint:(NSObject*<OS_xpc_object>)arg1 ;
@end

