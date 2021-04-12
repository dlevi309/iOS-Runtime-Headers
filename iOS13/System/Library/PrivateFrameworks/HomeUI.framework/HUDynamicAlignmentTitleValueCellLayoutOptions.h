/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUGridCellLayoutOptions.h>

@class NSString;

@interface HUDynamicAlignmentTitleValueCellLayoutOptions : HUGridCellLayoutOptions {

	NSString* _longestPossibleValueText;
	NSString* _longestPossibleTitleText;

}

@property (nonatomic,retain) NSString * longestPossibleValueText;              //@synthesize longestPossibleValueText=_longestPossibleValueText - In the implementation block
@property (nonatomic,retain) NSString * longestPossibleTitleText;              //@synthesize longestPossibleTitleText=_longestPossibleTitleText - In the implementation block
-(id)initWithCellSizeSubclass:(long long)arg1 longestPossibleValueText:(id)arg2 longestPossibleTitleText:(id)arg3 ;
-(NSString *)longestPossibleTitleText;
-(NSString *)longestPossibleValueText;
-(void)setLongestPossibleValueText:(NSString *)arg1 ;
-(void)setLongestPossibleTitleText:(NSString *)arg1 ;
@end

