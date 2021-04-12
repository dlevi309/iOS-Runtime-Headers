/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class LPCaptionBarView, LPComponentView, UIView, LPTextView, LPDomainNameIndicator;

@interface LPLinkViewComponents : NSObject {

	LPCaptionBarView* _captionBar;
	LPComponentView* _media;
	UIView* _mediaBackground;
	LPCaptionBarView* _mediaTopCaptionBar;
	LPCaptionBarView* _mediaBottomCaptionBar;
	LPTextView* _quote;
	LPDomainNameIndicator* _domainNameIndicator;

}

@property (nonatomic,retain) LPCaptionBarView * captionBar;                            //@synthesize captionBar=_captionBar - In the implementation block
@property (nonatomic,retain) LPComponentView * media;                                  //@synthesize media=_media - In the implementation block
@property (nonatomic,retain) UIView * mediaBackground;                                 //@synthesize mediaBackground=_mediaBackground - In the implementation block
@property (nonatomic,retain) LPCaptionBarView * mediaTopCaptionBar;                    //@synthesize mediaTopCaptionBar=_mediaTopCaptionBar - In the implementation block
@property (nonatomic,retain) LPCaptionBarView * mediaBottomCaptionBar;                 //@synthesize mediaBottomCaptionBar=_mediaBottomCaptionBar - In the implementation block
@property (nonatomic,retain) LPTextView * quote;                                       //@synthesize quote=_quote - In the implementation block
@property (nonatomic,retain) LPDomainNameIndicator * domainNameIndicator;              //@synthesize domainNameIndicator=_domainNameIndicator - In the implementation block
-(LPTextView *)quote;
-(LPComponentView *)media;
-(LPCaptionBarView *)captionBar;
-(LPCaptionBarView *)mediaBottomCaptionBar;
-(LPCaptionBarView *)mediaTopCaptionBar;
-(void)setCaptionBar:(LPCaptionBarView *)arg1 ;
-(void)setMediaBottomCaptionBar:(LPCaptionBarView *)arg1 ;
-(void)setMediaTopCaptionBar:(LPCaptionBarView *)arg1 ;
-(void)setMedia:(LPComponentView *)arg1 ;
-(void)setQuote:(LPTextView *)arg1 ;
-(UIView *)mediaBackground;
-(void)setMediaBackground:(UIView *)arg1 ;
-(LPDomainNameIndicator *)domainNameIndicator;
-(void)setDomainNameIndicator:(LPDomainNameIndicator *)arg1 ;
@end

