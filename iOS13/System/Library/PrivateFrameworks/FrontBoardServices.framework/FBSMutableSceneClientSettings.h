/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <FrontBoardServices/FBSSceneClientSettings.h>
#import <libobjc.A.dylib/BSDebugDescriptionProviding.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>

@class NSOrderedSet, NSSet, NSString;

@interface FBSMutableSceneClientSettings : FBSSceneClientSettings <BSDebugDescriptionProviding, BSXPCSecureCoding>

@property (setter=_setLayers:,nonatomic,copy) NSOrderedSet * layers; 
@property (assign,nonatomic) double preferredLevel; 
@property (assign,nonatomic) long long preferredInterfaceOrientation; 
@property (nonatomic,copy) NSSet * occlusions; 
@property (nonatomic,copy) NSString * preferredSceneHostIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isMutable;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)otherSettings;
-(void)setOcclusions:(NSSet *)arg1 ;
-(void)_setLayers:(id)arg1 ;
-(void)setPreferredLevel:(double)arg1 ;
-(void)setPreferredInterfaceOrientation:(long long)arg1 ;
-(void)setPreferredSceneHostIdentifier:(NSString *)arg1 ;
@end

