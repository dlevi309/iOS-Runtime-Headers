/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDisplayContext:(UISDisplayContext *)arg1 ;
-(void)setDeviceContext:(UISDeviceContext *)arg1 ;
-(void)setPersistedSceneIdentifiers:(NSSet *)arg1 ;
-(void)setDefaultSceneToken:(FBSSceneIdentityToken *)arg1 ;
@end

