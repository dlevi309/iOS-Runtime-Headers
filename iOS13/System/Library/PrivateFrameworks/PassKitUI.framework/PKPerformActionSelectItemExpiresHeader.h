/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UIView.h>

@class UILabel, NSString;

@interface PKPerformActionSelectItemExpiresHeader : UIView {

	UILabel* _leadingLabel;
	UILabel* _trailingLabel;
	NSString* _leadingString;
	NSString* _trailingString;

}

@property (nonatomic,retain) NSString * leadingString;               //@synthesize leadingString=_leadingString - In the implementation block
@property (nonatomic,retain) NSString * trailingString;              //@synthesize trailingString=_trailingString - In the implementation block
-(id)init;
-(void)layoutSubviews;
-(void)setLeadingString:(NSString *)arg1 ;
-(void)setTrailingString:(NSString *)arg1 ;
-(NSString *)leadingString;
-(NSString *)trailingString;
@end

