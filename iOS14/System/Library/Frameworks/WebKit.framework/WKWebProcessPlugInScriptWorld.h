/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface WKWebProcessPlugInScriptWorld : NSObject <WKObject> {

	ObjectStorage<WebKit::InjectedBundleScriptWorld> _world;

}

@property (readonly) InjectedBundleScriptWorld* _scriptWorld; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)world;
+(id)normalWorld;
-(void)makeAllShadowRootsOpen;
-(NSString *)name;
-(void)clearWrappers;
-(void)disableOverrideBuiltinsBehavior;
-(Object*)_apiObject;
-(InjectedBundleScriptWorld*)_scriptWorld;
-(void)dealloc;
@end

