/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <UIKitCore/UIApplicationSceneClientSettings.h>
#import <libobjc.A.dylib/AFUISceneClientSettings.h>

@protocol AFUISceneClientSettings <NSObject>
@property (nonatomic,readonly) unsigned clientWindowContextID; 
@required
-(unsigned)clientWindowContextID;

@end


@class NSString;

@interface AFUISceneClientSettings : UIApplicationSceneClientSettings <AFUISceneClientSettings>

@property (nonatomic,readonly) unsigned clientWindowContextID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned)clientWindowContextID;
@end

