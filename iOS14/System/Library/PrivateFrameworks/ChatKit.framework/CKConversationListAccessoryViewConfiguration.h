/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, UIColor, UIBlurEffect;

@interface CKConversationListAccessoryViewConfiguration : NSObject <NSCopying> {

	UIImage* _image;
	UIColor* _backgroundColor;
	UIColor* _tintColor;
	UIBlurEffect* _blurEffect;
	long long _vibrancyStyle;

}

@property (nonatomic,retain) UIImage * image;                        //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                    //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) UIBlurEffect * blurEffect;              //@synthesize blurEffect=_blurEffect - In the implementation block
@property (assign,nonatomic) long long vibrancyStyle;                //@synthesize vibrancyStyle=_vibrancyStyle - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(long long)vibrancyStyle;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIBlurEffect *)blurEffect;
-(UIImage *)image;
-(UIColor *)backgroundColor;
-(void)setBlurEffect:(UIBlurEffect *)arg1 ;
-(void)setVibrancyStyle:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)tintColor;
@end

