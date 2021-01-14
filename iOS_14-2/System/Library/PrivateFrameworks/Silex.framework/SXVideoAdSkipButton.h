/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXMaterialButton.h>

@interface SXVideoAdSkipButton : SXMaterialButton {

	unsigned long long _skipDuration;

}

@property (assign,nonatomic) unsigned long long skipDuration;              //@synthesize skipDuration=_skipDuration - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)titleForDuration:(unsigned long long)arg1 ;
-(void)setSkipDuration:(unsigned long long)arg1 ;
-(unsigned long long)skipDuration;
@end

