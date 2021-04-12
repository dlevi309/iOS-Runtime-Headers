/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <TemplateKit/TLKView.h>

@class TLKGridLayoutManager, TLKTableRow, NSMutableArray;

@interface TLKGridRowView : TLKView {

	BOOL _needsSizingPass;
	TLKGridLayoutManager* _manager;
	TLKTableRow* _tableRow;
	NSMutableArray* _labels;
	NSMutableArray* _imageViews;
	NSMutableArray* _currentListOfViews;
	unsigned long long _indexOfFirstCenteredColumnForForcedCentering;
	unsigned long long _indexOfFirstTrailingColumn;

}

@property (nonatomic,retain) NSMutableArray * labels;                                                      //@synthesize labels=_labels - In the implementation block
@property (nonatomic,retain) NSMutableArray * imageViews;                                                  //@synthesize imageViews=_imageViews - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentListOfViews;                                          //@synthesize currentListOfViews=_currentListOfViews - In the implementation block
@property (assign,nonatomic) unsigned long long indexOfFirstCenteredColumnForForcedCentering;              //@synthesize indexOfFirstCenteredColumnForForcedCentering=_indexOfFirstCenteredColumnForForcedCentering - In the implementation block
@property (assign,nonatomic) unsigned long long indexOfFirstTrailingColumn;                                //@synthesize indexOfFirstTrailingColumn=_indexOfFirstTrailingColumn - In the implementation block
@property (assign,nonatomic) BOOL needsSizingPass;                                                         //@synthesize needsSizingPass=_needsSizingPass - In the implementation block
@property (nonatomic,retain) TLKGridLayoutManager * manager;                                               //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) TLKTableRow * tableRow;                                                       //@synthesize tableRow=_tableRow - In the implementation block
+(void)updateLabel:(id)arg1 withRichText:(id)arg2 alignment:(long long)arg3 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(void)setLabels:(NSMutableArray *)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)init;
-(void)setCurrentListOfViews:(NSMutableArray *)arg1 ;
-(NSMutableArray *)currentListOfViews;
-(void)setNeedsSizingPass:(BOOL)arg1 ;
-(BOOL)needsSizingPass;
-(unsigned long long)indexOfFirstCenteredColumnForForcedCentering;
-(unsigned long long)indexOfFirstTrailingColumn;
-(void)setTableRow:(TLKTableRow *)arg1 ;
-(void)resetStateOfAllViews;
-(void)generateLabelsAndImagesIfNecessary;
-(void)setIndexOfFirstCenteredColumnForForcedCentering:(unsigned long long)arg1 ;
-(void)setIndexOfFirstTrailingColumn:(unsigned long long)arg1 ;
-(NSMutableArray *)labels;
-(void)setManager:(TLKGridLayoutManager *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isLayoutSizeDependentOnPerpendicularAxis;
-(TLKGridLayoutManager *)manager;
-(NSMutableArray *)imageViews;
-(TLKTableRow *)tableRow;
-(void)observedPropertiesChanged;
-(void)setImageViews:(NSMutableArray *)arg1 ;
-(id)leadingTextView;
@end

