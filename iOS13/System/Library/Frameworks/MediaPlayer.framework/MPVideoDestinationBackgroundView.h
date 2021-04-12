/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UILabel, UIImageView;

@interface MPVideoDestinationBackgroundView : UIView {

	NSString* _destinationName;
	UILabel* _destinationSubtitleLabel;
	UILabel* _destinationTitleLabel;
	long long _style;
	UIImageView* _videosImageView;

}

@property (nonatomic,copy) NSString * destinationName;              //@synthesize destinationName=_destinationName - In the implementation block
@property (assign,nonatomic) long long style;                       //@synthesize style=_style - In the implementation block
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NSString *)destinationName;
-(void)setDestinationName:(NSString *)arg1 ;
@end

