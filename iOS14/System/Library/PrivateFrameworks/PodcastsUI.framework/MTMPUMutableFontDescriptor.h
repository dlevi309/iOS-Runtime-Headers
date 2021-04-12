/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
*/

#import <PodcastsUI/PodcastsUI-Structs.h>
#import <PodcastsUI/MTMPUFontDescriptor.h>

@interface MTMPUMutableFontDescriptor : MTMPUFontDescriptor

@property (assign,nonatomic) long long textStyle; 
@property (assign,nonatomic) double systemFontSize; 
@property (assign,nonatomic) long long weight; 
@property (assign,nonatomic) long long leadingAdjustment; 
@property (assign,nonatomic) double defaultPointSizeAdjustment; 
@property (assign,nonatomic) BOOL usesItalic; 
@property (assign,nonatomic) BOOL usesCondensedMetrics; 
@property (assign,nonatomic) BOOL wantsMonospaceNumbers; 
-(void)setWantsMonospaceNumbers:(BOOL)arg1 ;
-(void)setDefaultPointSizeAdjustment:(double)arg1 ;
-(void)setWeight:(long long)arg1 ;
-(void)_resetToDefaultValues;
-(void)setSystemFontSize:(double)arg1 ;
-(void)setTextStyle:(long long)arg1 ;
-(id)_copyAllowingGlobalCacheLookup:(BOOL)arg1 ;
-(void)setUsesItalic:(BOOL)arg1 ;
-(void)setUsesCondensedMetrics:(BOOL)arg1 ;
-(void)setLeadingAdjustment:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

