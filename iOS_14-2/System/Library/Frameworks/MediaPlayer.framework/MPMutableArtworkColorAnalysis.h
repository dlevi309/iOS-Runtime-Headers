/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPArtworkColorAnalysis.h>

@class UIColor;

@interface MPMutableArtworkColorAnalysis : MPArtworkColorAnalysis

@property (nonatomic,retain) UIColor * backgroundColor; 
@property (assign,getter=isBackgroundColorLight,nonatomic) BOOL backgroundColorLight; 
@property (nonatomic,retain) UIColor * primaryTextColor; 
@property (assign,getter=isPrimaryTextColorLight,nonatomic) BOOL primaryTextColorLight; 
@property (nonatomic,retain) UIColor * secondaryTextColor; 
@property (assign,getter=isSecondaryTextColorLight,nonatomic) BOOL secondaryTextColorLight; 
-(void)setPrimaryTextColorLight:(BOOL)arg1 ;
-(void)setSecondaryTextColor:(UIColor *)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setPrimaryTextColor:(UIColor *)arg1 ;
-(void)setBackgroundColorLight:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSecondaryTextColorLight:(BOOL)arg1 ;
@end

