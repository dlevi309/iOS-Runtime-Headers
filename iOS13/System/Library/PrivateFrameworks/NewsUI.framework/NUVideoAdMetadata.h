/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/


@class NUAdBannerView, NSString;

@interface NUVideoAdMetadata : NSObject {

	NUAdBannerView* _bannerView;
	NSString* _adCampaign;
	NSString* _adLine;
	NSString* _adCreative;
	NSString* _impressionIdentifier;
	double _duration;
	double _timePlayed;
	unsigned long long _position;
	double _impressionThreshold;

}

@property (nonatomic,retain) NUAdBannerView * bannerView;                //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,copy) NSString * adCampaign;                        //@synthesize adCampaign=_adCampaign - In the implementation block
@property (nonatomic,copy) NSString * adLine;                            //@synthesize adLine=_adLine - In the implementation block
@property (nonatomic,copy) NSString * adCreative;                        //@synthesize adCreative=_adCreative - In the implementation block
@property (nonatomic,copy) NSString * impressionIdentifier;              //@synthesize impressionIdentifier=_impressionIdentifier - In the implementation block
@property (assign,nonatomic) double duration;                            //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double timePlayed;                          //@synthesize timePlayed=_timePlayed - In the implementation block
@property (assign,nonatomic) unsigned long long position;                //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) double impressionThreshold;                 //@synthesize impressionThreshold=_impressionThreshold - In the implementation block
-(unsigned long long)position;
-(double)duration;
-(void)setPosition:(unsigned long long)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setTimePlayed:(double)arg1 ;
-(double)timePlayed;
-(NUAdBannerView *)bannerView;
-(void)setBannerView:(NUAdBannerView *)arg1 ;
-(double)impressionThreshold;
-(void)setImpressionThreshold:(double)arg1 ;
-(NSString *)impressionIdentifier;
-(NSString *)adCampaign;
-(void)setAdCampaign:(NSString *)arg1 ;
-(NSString *)adLine;
-(void)setAdLine:(NSString *)arg1 ;
-(NSString *)adCreative;
-(void)setAdCreative:(NSString *)arg1 ;
-(void)setImpressionIdentifier:(NSString *)arg1 ;
@end

