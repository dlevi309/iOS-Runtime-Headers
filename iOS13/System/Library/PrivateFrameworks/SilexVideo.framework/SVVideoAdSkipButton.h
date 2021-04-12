/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <SilexVideo/SVMaterialButton.h>

@interface SVVideoAdSkipButton : SVMaterialButton {

	unsigned long long _skipDuration;

}

@property (assign,nonatomic) unsigned long long skipDuration;              //@synthesize skipDuration=_skipDuration - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(unsigned long long)skipDuration;
-(void)setSkipDuration:(unsigned long long)arg1 ;
-(id)titleForDuration:(unsigned long long)arg1 ;
@end

