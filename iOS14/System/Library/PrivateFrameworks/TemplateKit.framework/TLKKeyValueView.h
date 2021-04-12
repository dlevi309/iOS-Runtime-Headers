/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <TemplateKit/TLKView.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@class NSArray, TLKImage, TLKKeyValueGridView, TLKImageView, TLKStackView, NSString;

@interface TLKKeyValueView : TLKView <NUIContainerViewDelegate> {

	NSArray* _leadingTuples;
	NSArray* _trailingTuples;
	TLKImage* _image;
	TLKKeyValueGridView* _leadingGrid;
	TLKKeyValueGridView* _trailingGrid;
	TLKImageView* _imageView;
	double _lastMeasuredWidth;

}

@property (nonatomic,retain) TLKKeyValueGridView * leadingGrid;               //@synthesize leadingGrid=_leadingGrid - In the implementation block
@property (nonatomic,retain) TLKKeyValueGridView * trailingGrid;              //@synthesize trailingGrid=_trailingGrid - In the implementation block
@property (nonatomic,retain) TLKImageView * imageView;                        //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) TLKStackView * contentView; 
@property (assign,nonatomic) double lastMeasuredWidth;                        //@synthesize lastMeasuredWidth=_lastMeasuredWidth - In the implementation block
@property (nonatomic,retain) NSArray * leadingTuples;                         //@synthesize leadingTuples=_leadingTuples - In the implementation block
@property (nonatomic,retain) NSArray * trailingTuples;                        //@synthesize trailingTuples=_trailingTuples - In the implementation block
@property (nonatomic,retain) TLKImage * image;                                //@synthesize image=_image - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)visibleRowsInGrid:(id)arg1 ;
-(void)setImageView:(TLKImageView *)arg1 ;
-(void)setImage:(TLKImage *)arg1 ;
-(TLKImageView *)imageView;
-(TLKImage *)image;
-(void)setLeadingGrid:(TLKKeyValueGridView *)arg1 ;
-(void)setTrailingGrid:(TLKKeyValueGridView *)arg1 ;
-(TLKKeyValueGridView *)trailingGrid;
-(NSArray *)leadingTuples;
-(NSArray *)trailingTuples;
-(TLKKeyValueGridView *)leadingGrid;
-(void)_reconfigureForCompressedState;
-(void)setLeadingTuples:(NSArray *)arg1 ;
-(void)setTrailingTuples:(NSArray *)arg1 ;
-(long long)currentStackViewDistribution;
-(BOOL)leadingGridIsHidden;
-(BOOL)trailingGridIsHidden;
-(unsigned long long)numberOfVisibleRowsForLeadingGrid;
-(unsigned long long)numberOfVisibleRowsForTrailingGrid;
-(id)leadingTextKeyLabels;
-(double)lastMeasuredWidth;
-(void)setLastMeasuredWidth:(double)arg1 ;
-(CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(CGRect)arg3 ;
-(void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(CGSize)arg2 forReason:(long long)arg3 ;
-(BOOL)containerView:(id)arg1 shouldRestartMeasurementDueToCompressionInAxis:(long long)arg2 forReason:(long long)arg3 ;
-(id)setupContentView;
-(void)observedPropertiesChanged;
@end

