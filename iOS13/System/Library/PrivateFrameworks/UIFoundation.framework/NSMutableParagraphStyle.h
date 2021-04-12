/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSParagraphStyle.h>

@class NSArray;

@interface NSMutableParagraphStyle : NSParagraphStyle

@property (assign,nonatomic) double lineSpacing; 
@property (assign,nonatomic) double paragraphSpacing; 
@property (assign,nonatomic) long long alignment; 
@property (assign,nonatomic) double firstLineHeadIndent; 
@property (assign,nonatomic) double headIndent; 
@property (assign,nonatomic) double tailIndent; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (assign,nonatomic) double minimumLineHeight; 
@property (assign,nonatomic) double maximumLineHeight; 
@property (assign,nonatomic) long long baseWritingDirection; 
@property (assign,nonatomic) double lineHeightMultiple; 
@property (assign,nonatomic) double paragraphSpacingBefore; 
@property (assign,nonatomic) float hyphenationFactor; 
@property (nonatomic,copy) NSArray * tabStops; 
@property (assign,nonatomic) double defaultTabInterval; 
@property (assign,nonatomic) BOOL allowsDefaultTighteningForTruncation; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAlignment:(long long)arg1 ;
-(void)setFirstLineHeadIndent:(double)arg1 ;
-(void)setHeadIndent:(double)arg1 ;
-(void)setTailIndent:(double)arg1 ;
-(void)setTabStops:(NSArray *)arg1 ;
-(void)setDefaultTabInterval:(double)arg1 ;
-(void)setLineBreakMode:(long long)arg1 ;
-(void)setLineHeightMultiple:(double)arg1 ;
-(void)setMaximumLineHeight:(double)arg1 ;
-(void)setMinimumLineHeight:(double)arg1 ;
-(void)setLineSpacing:(double)arg1 ;
-(void)setParagraphSpacing:(double)arg1 ;
-(void)setParagraphSpacingBefore:(double)arg1 ;
-(void)setBaseWritingDirection:(long long)arg1 ;
-(void)_setLineBoundsOptions:(unsigned long long)arg1 ;
-(void)setCompositionLanguage:(long long)arg1 ;
-(void)setLineBreakStrategy:(unsigned long long)arg1 ;
-(void)setHyphenationFactor:(float)arg1 ;
-(void)setUsesDefaultHyphenation:(BOOL)arg1 ;
-(void)setTighteningFactorForTruncation:(float)arg1 ;
-(void)setHeaderLevel:(long long)arg1 ;
-(void)setTextBlocks:(id)arg1 ;
-(void)setTextLists:(id)arg1 ;
-(void)setAllowsDefaultTighteningForTruncation:(BOOL)arg1 ;
-(void)_mutateTabStops;
-(void)setAllowsHangingPunctuation:(BOOL)arg1 ;
-(void)setUsesOpticalAlignment:(BOOL)arg1 ;
-(void)setParagraphStyle:(id)arg1 ;
-(void)addTabStop:(id)arg1 ;
-(void)removeTabStop:(id)arg1 ;
@end

