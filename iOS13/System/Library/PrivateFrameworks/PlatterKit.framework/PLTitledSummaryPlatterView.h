/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
*/

#import <PlatterKit/PlatterKit-Structs.h>
#import <PlatterKit/PLTitledPlatterView.h>
#import <libobjc.A.dylib/PLSummaryPlatter.h>

@class NSString, UIImage, UIView, PLSummaryContentView;

@interface PLTitledSummaryPlatterView : PLTitledPlatterView <PLSummaryPlatter> {

	PLSummaryContentView* _summaryContentView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * customContentView; 
@property (assign,nonatomic) BOOL hasShadow; 
@property (assign,getter=isBackgroundBlurred,nonatomic) BOOL backgroundBlurred; 
@property (nonatomic,retain) NSString * primaryText; 
@property (nonatomic,retain) NSString * primarySubtitleText; 
@property (nonatomic,retain) NSString * secondaryText; 
@property (nonatomic,retain) NSString * summaryText; 
@property (nonatomic,retain) UIImage * thumbnail; 
@property (nonatomic,retain) UIView * accessoryView; 
@property (assign,nonatomic) unsigned long long messageNumberOfLines; 
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(void)setAccessoryView:(UIView *)arg1 ;
-(UIView *)accessoryView;
-(void)setBackgroundView:(id)arg1 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(UIImage *)thumbnail;
-(void)setThumbnail:(UIImage *)arg1 ;
-(NSString *)primaryText;
-(void)setPrimaryText:(NSString *)arg1 ;
-(NSString *)secondaryText;
-(void)setSecondaryText:(NSString *)arg1 ;
-(void)setSummaryText:(NSString *)arg1 ;
-(NSString *)summaryText;
-(void)setMessageNumberOfLines:(unsigned long long)arg1 ;
-(unsigned long long)messageNumberOfLines;
-(CGSize)sizeThatFitsContentWithSize:(CGSize)arg1 ;
-(BOOL)adjustForContentSizeCategoryChange;
-(void)_configureSummaryContentViewIfNecessary;
-(void)_layoutSummaryContentView;
-(NSString *)primarySubtitleText;
-(void)setPrimarySubtitleText:(NSString *)arg1 ;
@end

