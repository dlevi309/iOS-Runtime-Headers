/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


@protocol TVPMediaItem;
@class NSObject, UIImage, NSAttributedString;

@interface TVPBumperConfig : NSObject {

	NSObject*<TVPMediaItem> _mediaItem;
	UIImage* _logoImage;
	NSAttributedString* _attributedWarningText;
	NSAttributedString* _attributedAppleIDText;
	double _textDwellTime;
	double _maxTextWidth;

}

@property (nonatomic,retain) NSObject*<TVPMediaItem> mediaItem;                       //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,retain) UIImage * logoImage;                                     //@synthesize logoImage=_logoImage - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedWarningText;              //@synthesize attributedWarningText=_attributedWarningText - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedAppleIDText;              //@synthesize attributedAppleIDText=_attributedAppleIDText - In the implementation block
@property (assign,nonatomic) double textDwellTime;                                    //@synthesize textDwellTime=_textDwellTime - In the implementation block
@property (assign,nonatomic) double maxTextWidth;                                     //@synthesize maxTextWidth=_maxTextWidth - In the implementation block
-(id)init;
-(NSObject*<TVPMediaItem>)mediaItem;
-(void)setMediaItem:(NSObject*<TVPMediaItem>)arg1 ;
-(UIImage *)logoImage;
-(void)setLogoImage:(UIImage *)arg1 ;
-(void)setMaxTextWidth:(double)arg1 ;
-(double)maxTextWidth;
-(NSAttributedString *)attributedWarningText;
-(void)setAttributedWarningText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedAppleIDText;
-(void)setAttributedAppleIDText:(NSAttributedString *)arg1 ;
-(double)textDwellTime;
-(void)setTextDwellTime:(double)arg1 ;
@end

