/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray;

@interface _HKAnnotationColumnLayout : UIView {

	BOOL _includeSeparators;
	long long _context;
	NSMutableArray* _columnViews;
	NSMutableArray* _separatorViews;

}

@property (assign,nonatomic) long long context;                            //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSMutableArray * columnViews;                 //@synthesize columnViews=_columnViews - In the implementation block
@property (nonatomic,retain) NSMutableArray * separatorViews;              //@synthesize separatorViews=_separatorViews - In the implementation block
@property (assign,nonatomic) BOOL includeSeparators;                       //@synthesize includeSeparators=_includeSeparators - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithContext:(long long)arg1 ;
-(long long)context;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)_minimumHeight;
-(double)_minimumWidth;
-(void)_invalidateLayout;
-(void)setContext:(long long)arg1 ;
-(void)setSeparatorViews:(NSMutableArray *)arg1 ;
-(NSMutableArray *)separatorViews;
-(id)_makeSeparatorView;
-(void)setIncludeSeparators:(BOOL)arg1 ;
-(void)addColumnView:(id)arg1 ;
-(void)clearViews;
-(void)_clearSeparatorViews;
-(void)_addSeparatorViews;
-(BOOL)includeSeparators;
-(NSMutableArray *)columnViews;
-(void)_clearColumnViews;
-(void)_layoutColumnsEqually;
-(void)_layoutColumnsPacked;
-(double)_columnSeparation;
-(void)_layoutColumnsWithWidth:(double)arg1 columnSeparation:(double)arg2 currentSize:(CGSize)arg3 ;
-(double)_minimumWidthForPackedLayout;
-(double)_minimumWithForEqualLayout;
-(double)_largestColumnWidth;
-(double)_totalColumnWidth;
-(void)setColumnViews:(NSMutableArray *)arg1 ;
@end

