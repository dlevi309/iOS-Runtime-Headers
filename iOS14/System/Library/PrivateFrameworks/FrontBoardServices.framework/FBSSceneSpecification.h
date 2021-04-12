/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSArray, NSDictionary, NSString;

@interface FBSSceneSpecification : NSObject <NSCopying, BSDescriptionProviding> {

	BOOL _forLocalSynchronousSceneClientProvider;

}

@property (nonatomic,readonly) NSArray * initialSettingsDiffActions; 
@property (nonatomic,readonly) NSArray * finalSettingsDiffActions; 
@property (nonatomic,readonly) NSArray * initialActionHandlers; 
@property (nonatomic,readonly) NSArray * finalActionHandlers; 
@property (nonatomic,readonly) NSDictionary * baseSceneComponentClassDictionary; 
@property (nonatomic,readonly) NSString * uiSceneSessionRole; 
@property (nonatomic,readonly) Class sceneSubstrateClass; 
@property (nonatomic,readonly) Class lifecycleMonitorClass; 
@property (nonatomic,readonly) Class uiSceneMinimumClass; 
@property (nonatomic,readonly) BOOL isUIKitManaged; 
@property (nonatomic,readonly) BOOL isInternal; 
@property (nonatomic,readonly) BOOL affectsAppLifecycleIfInternal; 
@property (nonatomic,readonly) Class hostAgentClass; 
@property (nonatomic,readonly) Class clientAgentClass; 
@property (nonatomic,readonly) Class settingsClass; 
@property (nonatomic,readonly) Class clientSettingsClass; 
@property (nonatomic,readonly) Class transitionContextClass; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)specification;
+(/*function pointer*/void*)_swizzleMethodOnClass:(Class)arg1 originalSelector:(SEL)arg2 block:(id)arg3 ;
-(BOOL)isInternal;
-(NSDictionary *)baseSceneComponentClassDictionary;
-(BOOL)affectsAppLifecycleIfInternal;
-(BOOL)isUIKitManaged;
-(NSArray *)finalSettingsDiffActions;
-(NSArray *)initialActionHandlers;
-(NSArray *)initialSettingsDiffActions;
-(Class)lifecycleMonitorClass;
-(id)disconnectionHandlers;
-(Class)uiSceneMinimumClass;
-(NSString *)uiSceneSessionRole;
-(NSArray *)finalActionHandlers;
-(Class)sceneSubstrateClass;
-(id)connectionHandlers;
-(id)succinctDescription;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(Class)settingsClass;
-(Class)hostAgentClass;
-(Class)clientAgentClass;
-(Class)clientSettingsClass;
-(Class)transitionContextClass;
-(NSString *)description;
-(BOOL)isValid;
-(id)_copyForLocalSynchronousSceneClientProvider;
-(unsigned long long)hash;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

