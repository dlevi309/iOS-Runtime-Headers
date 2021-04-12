/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
*/

#import <IMSharedUI/IMSharedUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface IMChatTranscriptLayoutSpecification : NSObject <NSCopying> {

	double _maximumBubbleWidth;
	double _topMargin;
	double _bottomMargin;
	double _leadingMargin;
	double _trailingMargin;
	double _zeroVerticalItemSpacing;
	double _smallVerticalItemSpacing;
	double _mediumVerticalItemSpacing;
	double _largeVerticalItemSpacing;
	CGSize _layoutBoundsSize;

}

@property (assign,nonatomic) CGSize layoutBoundsSize;                       //@synthesize layoutBoundsSize=_layoutBoundsSize - In the implementation block
@property (assign,nonatomic) double maximumBubbleWidth;                     //@synthesize maximumBubbleWidth=_maximumBubbleWidth - In the implementation block
@property (assign,nonatomic) double topMargin;                              //@synthesize topMargin=_topMargin - In the implementation block
@property (assign,nonatomic) double bottomMargin;                           //@synthesize bottomMargin=_bottomMargin - In the implementation block
@property (assign,nonatomic) double leadingMargin;                          //@synthesize leadingMargin=_leadingMargin - In the implementation block
@property (assign,nonatomic) double trailingMargin;                         //@synthesize trailingMargin=_trailingMargin - In the implementation block
@property (assign,nonatomic) double zeroVerticalItemSpacing;                //@synthesize zeroVerticalItemSpacing=_zeroVerticalItemSpacing - In the implementation block
@property (assign,nonatomic) double smallVerticalItemSpacing;               //@synthesize smallVerticalItemSpacing=_smallVerticalItemSpacing - In the implementation block
@property (assign,nonatomic) double mediumVerticalItemSpacing;              //@synthesize mediumVerticalItemSpacing=_mediumVerticalItemSpacing - In the implementation block
@property (assign,nonatomic) double largeVerticalItemSpacing;               //@synthesize largeVerticalItemSpacing=_largeVerticalItemSpacing - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTopMargin:(double)arg1 ;
-(void)setBottomMargin:(double)arg1 ;
-(double)topMargin;
-(double)bottomMargin;
-(double)leadingMargin;
-(double)trailingMargin;
-(void)setLeadingMargin:(double)arg1 ;
-(void)setTrailingMargin:(double)arg1 ;
-(CGSize)layoutBoundsSize;
-(void)setLayoutBoundsSize:(CGSize)arg1 ;
-(double)maximumBubbleWidth;
-(void)setMaximumBubbleWidth:(double)arg1 ;
-(double)zeroVerticalItemSpacing;
-(void)setZeroVerticalItemSpacing:(double)arg1 ;
-(double)smallVerticalItemSpacing;
-(void)setSmallVerticalItemSpacing:(double)arg1 ;
-(double)mediumVerticalItemSpacing;
-(void)setMediumVerticalItemSpacing:(double)arg1 ;
-(double)largeVerticalItemSpacing;
-(void)setLargeVerticalItemSpacing:(double)arg1 ;
@end

