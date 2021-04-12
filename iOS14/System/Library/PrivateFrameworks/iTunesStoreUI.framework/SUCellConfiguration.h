/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@protocol SUCellConfigurationView;
#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
@class UIView;

@interface SUCellConfiguration : NSObject {

	id _context;
	unsigned _isDeleteConfirmationVisible : 1;
	CGSize _layoutSize;
	unsigned _needsDisplay : 1;
	id _representedObject;
	UIView*<SUCellConfigurationView> _view;

}

@property (nonatomic,retain) id context; 
@property (nonatomic,retain) id representedObject;                               //@synthesize representedObject=_representedObject - In the implementation block
@property (assign,nonatomic) CGSize layoutSize;                                  //@synthesize layoutSize=_layoutSize - In the implementation block
@property (assign,nonatomic) BOOL needsDisplay; 
@property (assign,nonatomic) UIView*<SUCellConfigurationView> view;              //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfImages; 
@property (nonatomic,readonly) unsigned long long numberOfLabels; 
@property (assign,nonatomic) BOOL isDeleteConfirmationVisible; 
+(double)minimumRowHeight;
+(double)rowHeightForContext:(id)arg1 representedObject:(id)arg2 ;
+(id)copyDefaultContext;
-(CGSize)layoutSize;
-(BOOL)needsDisplay;
-(id)context;
-(void)setView:(UIView*<SUCellConfigurationView>)arg1 ;
-(void)setRepresentedObject:(id)arg1 ;
-(UIView*<SUCellConfigurationView>)view;
-(unsigned long long)numberOfImages;
-(void)reloadData;
-(void)setNeedsDisplay:(BOOL)arg1 ;
-(void)setLayoutSize:(CGSize)arg1 ;
-(void)dealloc;
-(id)representedObject;
-(void)setContext:(id)arg1 ;
-(unsigned long long)indexOfLabelForPurchaseAnimation;
-(void)drawBackgroundWithModifiers:(unsigned long long)arg1 ;
-(void)drawWithModifiers:(unsigned long long)arg1 ;
-(unsigned long long)numberOfLabels;
-(id)stringForLabelAtIndex:(unsigned long long)arg1 ;
-(CGRect)frameForLabelAtIndex:(unsigned long long)arg1 ;
-(id)fontForLabelAtIndex:(unsigned long long)arg1 ;
-(long long)textAlignmentForLabelAtIndex:(unsigned long long)arg1 ;
-(BOOL)getShadowColor:(id*)arg1 offset:(CGSize*)arg2 forLabelAtIndex:(unsigned long long)arg3 withModifiers:(unsigned long long)arg4 ;
-(id)colorForLabelAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2 ;
-(id)imageAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2 ;
-(CGRect)frameForImageAtIndex:(unsigned long long)arg1 ;
-(BOOL)isDeleteConfirmationVisible;
-(void)setIsDeleteConfirmationVisible:(BOOL)arg1 ;
-(CGRect)frameForAccessoryViewWithFrame:(CGRect)arg1 ;
@end

