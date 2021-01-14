/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <CarPlay/CarPlay-Structs.h>
#import <UIKitCore/UIApplicationSceneSettings.h>
#import <libobjc.A.dylib/CPUITemplateApplicationSceneSettings.h>

@protocol CPUITemplateApplicationSceneSettings <NSObject>
@property (nonatomic,copy,readonly) NSObject*<OS_xpc_object> endpoint; 
@required
-(NSObject*<OS_xpc_object>)endpoint;

@end


@class NSString;

@interface CPUITemplateApplicationSceneSettings : UIApplicationSceneSettings <CPUITemplateApplicationSceneSettings>

@property (nonatomic,copy,readonly) NSObject*<OS_xpc_object> endpoint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_xpc_object>)endpoint;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end

