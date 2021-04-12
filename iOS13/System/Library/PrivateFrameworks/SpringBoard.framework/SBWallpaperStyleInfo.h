/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class SBWallpaperEffectView, NSString;

@interface SBWallpaperStyleInfo : NSObject <BSDescriptionProviding> {

	SCD_Struct_SB31 _priorityInfo[12];
	SBWallpaperEffectView* _wallpaperEffectView;
	SCD_Struct_SB30 _styleTransitionState;

}

@property (nonatomic,retain) SBWallpaperEffectView * wallpaperEffectView;              //@synthesize wallpaperEffectView=_wallpaperEffectView - In the implementation block
@property (assign,nonatomic) SCD_Struct_SB30 styleTransitionState;                     //@synthesize styleTransitionState=_styleTransitionState - In the implementation block
@property (nonatomic,readonly) long long highestValidPriority; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setWallpaperEffectView:(SBWallpaperEffectView *)arg1 ;
-(SBWallpaperEffectView *)wallpaperEffectView;
-(SCD_Struct_SB30)styleTransitionState;
-(void)setPriorityInfo:(SCD_Struct_SB32)arg1 forPriority:(long long)arg2 ;
-(void)removePriorityInfoForPriority:(long long)arg1 ;
-(long long)highestValidPriority;
-(SCD_Struct_SB32)priorityInfoForPriority:(long long)arg1 ;
-(void)setStyleTransitionState:(SCD_Struct_SB30)arg1 ;
-(void)enumerateValidPrioritiesUsingBlock:(/*^block*/id)arg1 ;
@end

