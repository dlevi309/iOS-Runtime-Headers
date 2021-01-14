/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
*/

#import <PlatterKit/PlatterKit-Structs.h>
#import <PlatterKit/PLTitledPlatterView.h>
#import <libobjc.A.dylib/PLSummaryPlatter.h>

@class NSString, UIImage, UIView, PLSummaryContentView;

@interface PLTitledSummaryPlatterView : PLTitledPlatterView <PLSummaryPlatter> {

	PLSummaryContentView* _summaryContentView;

}

@property (nonatomic,retain) NSString * primaryText; 
@property (nonatomic,retain) NSString * primarySubtitleText; 
@property (nonatomic,retain) NSString * secondaryText; 
@property (nonatomic,retain) NSString * summaryText; 
@property (nonatomic,retain) UIImage * thumbnail; 
@property (nonatomic,retain) UIView * accessoryView; 
@property (assign,nonatomic) unsigned long long messageNumberOfLines; 
@property (nonatomic,readonly) UIView * customContentView; 
@property (assign,nonatomic) BOOL hasShadow; 
@property (assign,getter=isBackgroundBlurred,nonatomic) BOOL backgroundBlurred; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(BOOL)adjustForContentSizeCategoryChange;
-(UIImage *)thumbnail;
-(void)setMessageNumberOfLines:(unsigned long long)arg1 ;
-(void)setBackgroundView:(id)arg1 ;
-(UIView *)accessoryView;
-(void)setAccessoryView:(UIView *)arg1 ;
-(CGSize)sizeThatFitsContentWithSize:(CGSize)arg1 ;
-(void)setSummaryText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(NSString *)summaryText;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)primaryText;
-(void)setPrimaryText:(NSString *)arg1 ;
-(void)setSecondaryText:(NSString *)arg1 ;
-(NSString *)secondaryText;
-(void)setThumbnail:(UIImage *)arg1 ;
-(unsigned long long)messageNumberOfLines;
-(NSString *)primarySubtitleText;
-(void)setPrimarySubtitleText:(NSString *)arg1 ;
-(void)_configureSummaryContentViewIfNecessary;
-(void)_layoutSummaryContentView;
@end

