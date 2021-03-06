/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptCell.h>

@class UIView;

@interface CKTranscriptHeaderCell : CKTranscriptCell {

	UIView* _loadingIndicator;

}

@property (nonatomic,retain) UIView * loadingIndicator;              //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
+(double)defaultCellHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)loadingIndicator;
-(void)setLoadingIndicator:(UIView *)arg1 ;
-(void)layoutSubviewsForAlignmentContents;
-(void)startAnimatingActivityIndicator;
@end

