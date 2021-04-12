/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@class AVPlayerItem, NSString;

@interface AVTSplashScreenConfiguration : NSObject {

	AVPlayerItem* _primaryPlayerItem;
	AVPlayerItem* _secondaryPlayerItem;
	NSString* _titleString;
	NSString* _subTitleString;
	NSString* _buttonString;

}

@property (nonatomic,retain) AVPlayerItem * primaryPlayerItem;                //@synthesize primaryPlayerItem=_primaryPlayerItem - In the implementation block
@property (nonatomic,retain) AVPlayerItem * secondaryPlayerItem;              //@synthesize secondaryPlayerItem=_secondaryPlayerItem - In the implementation block
@property (nonatomic,retain) NSString * titleString;                          //@synthesize titleString=_titleString - In the implementation block
@property (nonatomic,retain) NSString * subTitleString;                       //@synthesize subTitleString=_subTitleString - In the implementation block
@property (nonatomic,retain) NSString * buttonString;                         //@synthesize buttonString=_buttonString - In the implementation block
-(NSString *)titleString;
-(void)setTitleString:(NSString *)arg1 ;
-(void)setSubTitleString:(NSString *)arg1 ;
-(void)setButtonString:(NSString *)arg1 ;
-(void)setPrimaryPlayerItem:(AVPlayerItem *)arg1 ;
-(NSString *)subTitleString;
-(NSString *)buttonString;
-(AVPlayerItem *)primaryPlayerItem;
-(AVPlayerItem *)secondaryPlayerItem;
-(void)setSecondaryPlayerItem:(AVPlayerItem *)arg1 ;
@end

