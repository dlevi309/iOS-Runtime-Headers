/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <FrontBoardServices/FBSSceneSettings.h>

@class NSArray;

@interface FBSMutableSceneSettings : FBSSceneSettings

@property (nonatomic,copy) NSArray * occlusions; 
@property (assign,nonatomic) CGRect frame; 
@property (assign,nonatomic) double level; 
@property (assign,nonatomic) long long interfaceOrientation; 
@property (assign,getter=isForeground,nonatomic) BOOL foreground; 
@property (assign,getter=isBackgrounded,nonatomic) BOOL backgrounded; 
+(BOOL)_isMutable;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setLevel:(double)arg1 ;
-(void)setForeground:(BOOL)arg1 ;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(void)setDisplayConfiguration:(id)arg1 ;
-(id)otherSettings;
-(void)setOccluded:(BOOL)arg1 ;
-(void)_setDisplayConfiguration:(id)arg1 ;
-(void)setOcclusions:(NSArray *)arg1 ;
-(id)transientLocalSettings;
-(id)ignoreOcclusionReasons;
-(void)setBackgrounded:(BOOL)arg1 ;
@end

