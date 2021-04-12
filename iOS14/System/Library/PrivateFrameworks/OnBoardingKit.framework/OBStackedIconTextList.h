/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)viewForLastBaselineLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)viewForFirstBaselineLayout;
-(void)setIconTextPadding:(double)arg1 ;
-(void)addEntryWithIcon:(id)arg1 iconSize:(CGSize)arg2 attributedText:(id)arg3 ;
-(double)iconTextPadding;
-(void)setDataDetectorTypes:(unsigned long long)arg1 ;
-(unsigned long long)dataDetectorTypes;
-(void)addEntryWithIcon:(id)arg1 iconSize:(CGSize)arg2 text:(id)arg3 ;
@end

