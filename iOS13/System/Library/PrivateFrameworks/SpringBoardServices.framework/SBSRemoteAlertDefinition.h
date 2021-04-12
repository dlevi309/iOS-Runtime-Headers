/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <SpringBoardServices/SpringBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface SBSRemoteAlertDefinition : NSObject <BSXPCCoding, BSDescriptionProviding, NSCopying> {

	BOOL _forCarPlay;
	NSString* _serviceName;
	NSString* _viewControllerClassName;
	NSDictionary* _userInfo;
	NSString* _impersonatedCarPlayAppIdentifier;

}

@property (nonatomic,copy) NSDictionary * userInfo;                                  //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy) NSString * impersonatedCarPlayAppIdentifier;              //@synthesize impersonatedCarPlayAppIdentifier=_impersonatedCarPlayAppIdentifier - In the implementation block
@property (assign,getter=isForCarPlay,nonatomic) BOOL forCarPlay;                    //@synthesize forCarPlay=_forCarPlay - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceName;                          //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy,readonly) NSString * viewControllerClassName;              //@synthesize viewControllerClassName=_viewControllerClassName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSString *)serviceName;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(NSString *)viewControllerClassName;
-(id)initWithServiceName:(id)arg1 viewControllerClassName:(id)arg2 ;
-(void)setImpersonatedCarPlayAppIdentifier:(NSString *)arg1 ;
-(void)setForCarPlay:(BOOL)arg1 ;
-(NSString *)impersonatedCarPlayAppIdentifier;
-(BOOL)isForCarPlay;
@end

