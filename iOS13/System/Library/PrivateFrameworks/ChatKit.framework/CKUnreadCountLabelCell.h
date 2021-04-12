/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptMultilineLabelCell.h>

@class UIView;

@interface CKUnreadCountLabelCell : CKTranscriptMultilineLabelCell {

	UIView* _leftSeparator;
	UIView* _rightSeparator;

}

@property (nonatomic,retain) UIView * leftSeparator;               //@synthesize leftSeparator=_leftSeparator - In the implementation block
@property (nonatomic,retain) UIView * rightSeparator;              //@synthesize rightSeparator=_rightSeparator - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviewsForContents;
-(UIView *)leftSeparator;
-(void)setLeftSeparator:(UIView *)arg1 ;
-(UIView *)rightSeparator;
-(void)setRightSeparator:(UIView *)arg1 ;
@end

