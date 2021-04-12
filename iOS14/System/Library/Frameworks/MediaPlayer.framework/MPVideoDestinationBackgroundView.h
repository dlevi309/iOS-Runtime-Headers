/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(NSString *)destinationName;
-(void)setDestinationName:(NSString *)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
@end

