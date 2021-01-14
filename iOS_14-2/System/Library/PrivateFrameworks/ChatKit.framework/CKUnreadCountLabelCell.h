/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

