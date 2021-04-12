/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface UIKeyboardEmojiGraphicsTraits : NSObject {

	double _emojiKeyWidth;
	double _minimumLineSpacing;
	double _minimumInteritemSpacing;
	double _columnOffset;
	double _sectionOffset;
	double _categoryHeaderHeight;
	double _categoryHeaderLeftPadding;
	double _categorySelectedCirWidth;
	double _scrubViewTopPadding;
	double _categoryHeaderFontSize;
	long long _prepolulatedRecentCount;
	double _inputViewLeftMostPadding;
	double _inputViewRightMostPadding;
	double _rightBiasPercentage;
	double _scrollSnapOffset;
	double _alertTextWidth;
	CGSize _fakeEmojiKeySize;

}

@property (nonatomic,readonly) double emojiKeyWidth;                           //@synthesize emojiKeyWidth=_emojiKeyWidth - In the implementation block
@property (nonatomic,readonly) double minimumLineSpacing;                      //@synthesize minimumLineSpacing=_minimumLineSpacing - In the implementation block
@property (nonatomic,readonly) double minimumInteritemSpacing;                 //@synthesize minimumInteritemSpacing=_minimumInteritemSpacing - In the implementation block
@property (nonatomic,readonly) double columnOffset;                            //@synthesize columnOffset=_columnOffset - In the implementation block
@property (nonatomic,readonly) double sectionOffset;                           //@synthesize sectionOffset=_sectionOffset - In the implementation block
@property (nonatomic,readonly) double categoryHeaderHeight;                    //@synthesize categoryHeaderHeight=_categoryHeaderHeight - In the implementation block
@property (nonatomic,readonly) double categoryHeaderLeftPadding;               //@synthesize categoryHeaderLeftPadding=_categoryHeaderLeftPadding - In the implementation block
@property (nonatomic,readonly) double categorySelectedCirWidth;                //@synthesize categorySelectedCirWidth=_categorySelectedCirWidth - In the implementation block
@property (nonatomic,readonly) double scrubViewTopPadding;                     //@synthesize scrubViewTopPadding=_scrubViewTopPadding - In the implementation block
@property (nonatomic,readonly) CGSize fakeEmojiKeySize;                        //@synthesize fakeEmojiKeySize=_fakeEmojiKeySize - In the implementation block
@property (nonatomic,readonly) double categoryHeaderFontSize;                  //@synthesize categoryHeaderFontSize=_categoryHeaderFontSize - In the implementation block
@property (nonatomic,readonly) long long prepolulatedRecentCount;              //@synthesize prepolulatedRecentCount=_prepolulatedRecentCount - In the implementation block
@property (nonatomic,readonly) double inputViewLeftMostPadding;                //@synthesize inputViewLeftMostPadding=_inputViewLeftMostPadding - In the implementation block
@property (nonatomic,readonly) double inputViewRightMostPadding;               //@synthesize inputViewRightMostPadding=_inputViewRightMostPadding - In the implementation block
@property (nonatomic,readonly) double rightBiasPercentage;                     //@synthesize rightBiasPercentage=_rightBiasPercentage - In the implementation block
@property (nonatomic,readonly) double alertTextWidth;                          //@synthesize alertTextWidth=_alertTextWidth - In the implementation block
@property (nonatomic,readonly) double scrollSnapOffset;                        //@synthesize scrollSnapOffset=_scrollSnapOffset - In the implementation block
+(id)emojiGraphicsTraitsWithScreenTraits:(id)arg1 ;
+(id)emojiGraphicsTraitsForCurrentScreenTraits;
-(double)minimumInteritemSpacing;
-(double)minimumLineSpacing;
-(double)scrubViewTopPadding;
-(double)categorySelectedCirWidth;
-(CGSize)fakeEmojiKeySize;
-(double)alertTextWidth;
-(long long)prepolulatedRecentCount;
-(double)emojiKeyWidth;
-(double)categoryHeaderFontSize;
-(double)categoryHeaderHeight;
-(double)sectionOffset;
-(double)inputViewLeftMostPadding;
-(double)inputViewRightMostPadding;
-(double)columnOffset;
-(double)scrollSnapOffset;
-(id)initWithScreenTrait:(id)arg1 ;
-(double)categoryHeaderLeftPadding;
-(double)rightBiasPercentage;
@end
