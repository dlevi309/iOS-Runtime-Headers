/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <FrontBoardServices/FBSSceneSettings.h>

@interface FBSMutableSceneSettings : FBSSceneSettings

@property (assign,nonatomic) CGRect frame; 
@property (assign,nonatomic) double level; 
@property (assign,nonatomic) long long interfaceOrientation; 
@property (assign,getter=isForeground,nonatomic) BOOL foreground; 
@property (assign,getter=isBackgrounded,nonatomic) BOOL backgrounded; 
@property (assign,nonatomic) long long interruptionPolicy; 
+(BOOL)_isMutable;
-(void)setForeground:(BOOL)arg1 ;
-(void)setOccluded:(BOOL)arg1 ;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)_setDisplayConfiguration:(id)arg1 ;
-(void)setInterruptionPolicy:(long long)arg1 ;
-(id)transientLocalSettings;
-(id)ignoreOcclusionReasons;
-(void)setDisplayConfiguration:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBackgrounded:(BOOL)arg1 ;
-(id)otherSettings;
-(void)setLevel:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

