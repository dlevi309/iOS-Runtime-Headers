/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <OnBoardingKit/OnBoardingKit-Structs.h>
#import <UIKitCore/UIStackView.h>

@class NSMutableArray;

@interface OBStackedIconTextList : UIStackView {

	double _itemSpacing;
	NSMutableArray* _entries;
	double _iconTextPadding;
	unsigned long long _dataDetectorTypes;

}

@property (assign,nonatomic) double iconTextPadding;                            //@synthesize iconTextPadding=_iconTextPadding - In the implementation block
@property (assign,nonatomic) unsigned long long dataDetectorTypes;              //@synthesize dataDetectorTypes=_dataDetectorTypes - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)setDataDetectorTypes:(unsigned long long)arg1 ;
-(unsigned long long)dataDetectorTypes;
-(void)addEntryWithIcon:(id)arg1 iconSize:(CGSize)arg2 text:(id)arg3 ;
-(void)setIconTextPadding:(double)arg1 ;
-(void)addEntryWithIcon:(id)arg1 iconSize:(CGSize)arg2 attributedText:(id)arg3 ;
-(double)iconTextPadding;
@end

