/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUTitleDescriptionCell.h>

@class NSString;

@interface HUButtonCell : HUTitleDescriptionCell {

	BOOL _destructive;
	BOOL _textColorFollowsTintColor;
	long long _textAlignment;

}

@property (assign,getter=isDestructive,nonatomic) BOOL destructive;              //@synthesize destructive=_destructive - In the implementation block
@property (assign,nonatomic) long long textAlignment;                            //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) BOOL textColorFollowsTintColor;                     //@synthesize textColorFollowsTintColor=_textColorFollowsTintColor - In the implementation block
@property (nonatomic,retain) NSString * descriptionText; 
-(void)prepareForReuse;
-(void)setDestructive:(BOOL)arg1 ;
-(BOOL)isDestructive;
-(void)setTextAlignment:(long long)arg1 ;
-(void)tintColorDidChange;
-(void)didMoveToSuperview;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(long long)textAlignment;
-(void)setTextColorFollowsTintColor:(BOOL)arg1 ;
-(BOOL)textColorFollowsTintColor;
-(void)updateTitle;
@end

