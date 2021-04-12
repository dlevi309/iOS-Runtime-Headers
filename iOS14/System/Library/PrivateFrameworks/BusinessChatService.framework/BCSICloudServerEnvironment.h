/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BCSICloudServerEnvironmentProtocol.h>

@protocol BCSUserDefaultsProviding;
@class NSString, NSDictionary;

@interface BCSICloudServerEnvironment : NSObject <BSDescriptionProviding, BCSICloudServerEnvironmentProtocol> {

	BOOL _isInternalInstall;
	id<BCSUserDefaultsProviding> _userDefaults;
	long long _type;

}

@property (nonatomic,readonly) id<BCSUserDefaultsProviding> userDefaults;                    //@synthesize userDefaults=_userDefaults - In the implementation block
@property (getter=isInternalInstall,nonatomic,readonly) BOOL isInternalInstall;              //@synthesize isInternalInstall=_isInternalInstall - In the implementation block
@property (getter=isStagingMode,nonatomic,readonly) BOOL isStagingMode; 
@property (assign,nonatomic) long long type;                                                 //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * containerID; 
@property (nonatomic,readonly) long long containerEnvironment; 
@property (nonatomic,readonly) NSDictionary * additionalRequestHTTPHeaders; 
-(NSDictionary *)additionalRequestHTTPHeaders;
-(id)succinctDescription;
-(NSString *)containerID;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(id<BCSUserDefaultsProviding>)userDefaults;
-(NSString *)description;
-(long long)type;
-(BOOL)isInternalInstall;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(long long)containerEnvironment;
-(id)_productionContainerID;
-(BOOL)isStagingMode;
-(id)initWithUserDefaults:(id)arg1 isInternalInstall:(BOOL)arg2 type:(long long)arg3 ;
@end

