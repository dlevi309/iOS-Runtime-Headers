/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSArray *)initialSettingsDiffActions;
-(NSArray *)finalSettingsDiffActions;
-(NSArray *)initialActionHandlers;
-(NSArray *)finalActionHandlers;
-(Class)lifecycleMonitorClass;
-(BOOL)isUIKitManaged;
-(BOOL)isInternal;
-(id)disconnectionHandlers;
-(Class)uiSceneMinimumClass;
-(NSDictionary *)baseSceneComponentClassDictionary;
-(id)connectionHandlers;
-(NSString *)uiSceneSessionRole;
-(Class)sceneSubstrateClass;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(Class)hostAgentClass;
-(Class)clientAgentClass;
-(Class)settingsClass;
-(Class)clientSettingsClass;
-(Class)transitionContextClass;
-(id)_copyForLocalSynchronousSceneClientProvider;
@end

