/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTopMargin:(double)arg1 ;
-(void)setBottomMargin:(double)arg1 ;
-(id)description;
-(double)leadingMargin;
-(double)topMargin;
-(double)trailingMargin;
-(void)setLeadingMargin:(double)arg1 ;
-(void)setTrailingMargin:(double)arg1 ;
-(unsigned long long)hash;
-(double)bottomMargin;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
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

