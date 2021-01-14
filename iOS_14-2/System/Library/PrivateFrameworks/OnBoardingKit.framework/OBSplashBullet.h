/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/


@class NSString, OBImage;

@interface OBSplashBullet : NSObject {

	NSString* _text;
	OBImage* _icon;

}

@property (copy) NSString * text;               //@synthesize text=_text - In the implementation block
@property (retain) OBImage * icon;              //@synthesize icon=_icon - In the implementation block
-(OBImage *)icon;
-(void)setText:(NSString *)arg1 ;
-(void)setIcon:(OBImage *)arg1 ;
-(NSString *)text;
@end

