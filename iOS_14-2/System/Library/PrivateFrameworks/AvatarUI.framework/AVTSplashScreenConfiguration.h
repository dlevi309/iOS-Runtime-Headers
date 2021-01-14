/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)subTitleString;
-(void)setSubTitleString:(NSString *)arg1 ;
-(void)setButtonString:(NSString *)arg1 ;
-(void)setPrimaryPlayerItem:(AVPlayerItem *)arg1 ;
-(NSString *)buttonString;
-(AVPlayerItem *)primaryPlayerItem;
-(AVPlayerItem *)secondaryPlayerItem;
-(NSString *)titleString;
-(void)setTitleString:(NSString *)arg1 ;
-(void)setSecondaryPlayerItem:(AVPlayerItem *)arg1 ;
@end

