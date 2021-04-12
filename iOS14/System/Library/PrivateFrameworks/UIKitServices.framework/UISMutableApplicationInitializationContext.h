/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
*/

#import <UIKitServices/UIKitServices-Structs.h>
#import <UIKitServices/UISApplicationInitializationContext.h>

@class UISDisplayContext, UISDeviceContext, NSSet, FBSSceneIdentityToken;

@interface UISMutableApplicationInitializationContext : UISApplicationInitializationContext

@property (nonatomic,retain) UISDisplayContext * displayContext; 
@property (nonatomic,retain) UISDeviceContext * deviceContext; 
@property (nonatomic,retain) NSSet * persistedSceneIdentifiers; 
@property (nonatomic,retain) FBSSceneIdentityToken * defaultSceneToken; 
-(void)setDefaultSceneToken:(FBSSceneIdentityToken *)arg1 ;
-(void)setPersistedSceneIdentifiers:(NSSet *)arg1 ;
-(void)setDeviceContext:(UISDeviceContext *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDisplayContext:(UISDisplayContext *)arg1 ;
@end

