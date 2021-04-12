/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSObject*<OS_xpc_object> endpoint; 
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSObject*<OS_xpc_object>)endpoint;
@end

