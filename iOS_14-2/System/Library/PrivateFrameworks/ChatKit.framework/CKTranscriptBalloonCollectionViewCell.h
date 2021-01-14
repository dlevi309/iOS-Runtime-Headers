/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKTranscriptCollectionViewCell.h>

@class CKBalloonView;

@interface CKTranscriptBalloonCollectionViewCell : CKTranscriptCollectionViewCell {

	CKBalloonView* _balloonView;
	long long _animationPauseReasons;

}

@property (nonatomic,retain) CKBalloonView * balloonView;                  //@synthesize balloonView=_balloonView - In the implementation block
@property (assign,nonatomic) long long animationPauseReasons;              //@synthesize animationPauseReasons=_animationPauseReasons - In the implementation block
+(id)reuseIdentifier;
-(void)clearFilters;
-(void)setAnimationPauseReasons:(long long)arg1 ;
-(void)prepareForReuse;
-(void)addFilter:(id)arg1 ;
-(id)description;
-(void)layoutSubviews;
-(CKBalloonView *)balloonView;
-(void)setBalloonView:(CKBalloonView *)arg1 ;
-(void)configureForChatItem:(id)arg1 ;
-(long long)animationPauseReasons;
-(id)_balloonViewForChatItem:(id)arg1 ;
-(void)dealloc;
@end

