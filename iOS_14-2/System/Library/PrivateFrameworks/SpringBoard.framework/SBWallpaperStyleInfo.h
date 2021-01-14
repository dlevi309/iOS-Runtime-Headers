/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class SBWallpaperEffectViewBase, NSString;

@interface SBWallpaperStyleInfo : NSObject <BSDescriptionProviding> {

	SCD_Struct_SB21 _priorityInfo[12];
	SBWallpaperEffectViewBase* _wallpaperEffectView;
	SCD_Struct_SB20 _styleTransitionState;

}

@property (nonatomic,retain) SBWallpaperEffectViewBase * wallpaperEffectView;              //@synthesize wallpaperEffectView=_wallpaperEffectView - In the implementation block
@property (assign,nonatomic) SCD_Struct_SB20 styleTransitionState;                         //@synthesize styleTransitionState=_styleTransitionState - In the implementation block
@property (nonatomic,readonly) long long highestValidPriority; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(void)setPriorityInfo:(SCD_Struct_SB22)arg1 forPriority:(long long)arg2 ;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setWallpaperEffectView:(SBWallpaperEffectViewBase *)arg1 ;
-(SBWallpaperEffectViewBase *)wallpaperEffectView;
-(SCD_Struct_SB22)priorityInfoForPriority:(long long)arg1 ;
-(void)removePriorityInfoForPriority:(long long)arg1 ;
-(NSString *)description;
-(void)setStyleTransitionState:(SCD_Struct_SB20)arg1 ;
-(SCD_Struct_SB20)styleTransitionState;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(long long)highestValidPriority;
-(id)succinctDescriptionBuilder;
-(void)enumerateValidPrioritiesUsingBlock:(/*^block*/id)arg1 ;
@end

