/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <UIKitCore/UIButton.h>

@interface TSKStretchableBackgroundButton : UIButton {

	long long mBackgroundTopCapHeight;
	long long mBackgroundLeftCapWidth;

}

@property (assign,nonatomic) long long backgroundTopCapHeight; 
@property (assign,nonatomic) long long backgroundLeftCapWidth; 
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)awakeFromNib;
-(void)p_resetBackgroundImage;
-(void)setBackgroundTopLeftCapHeight:(long long)arg1 width:(long long)arg2 ;
-(void)guessBackgroundTopLeftCapSize;
-(void)p_resetBackgroundImageForState:(unsigned long long)arg1 ;
-(void)setBackgroundTopCapHeight:(long long)arg1 ;
-(void)setBackgroundLeftCapWidth:(long long)arg1 ;
-(long long)backgroundTopCapHeight;
-(long long)backgroundLeftCapWidth;
@end

