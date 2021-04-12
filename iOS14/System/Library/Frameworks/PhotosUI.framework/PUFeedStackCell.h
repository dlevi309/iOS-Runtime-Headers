/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUFeedCell.h>

@class PUStackView;

@interface PUFeedStackCell : PUFeedCell {

	PUStackView* _stackView;
	UIOffset _stackOffset;

}

@property (nonatomic,retain) PUStackView * stackView;              //@synthesize stackView=_stackView - In the implementation block
@property (assign,nonatomic) UIOffset stackOffset;                 //@synthesize stackOffset=_stackOffset - In the implementation block
-(UIOffset)stackOffset;
-(id)initWithFrame:(CGRect)arg1 ;
-(PUStackView *)stackView;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)setStackOffset:(UIOffset)arg1 ;
-(void)setStackView:(PUStackView *)arg1 ;
@end

