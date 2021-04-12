/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUMaskProvider.h>

@interface SURoundedCornersMaskProvider : SUMaskProvider {

	double _cornerRadius;

}

@property (assign,nonatomic) double cornerRadius;              //@synthesize cornerRadius=_cornerRadius - In the implementation block
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(CGPathRef)copyPathForMaskWithSize:(CGSize)arg1 ;
@end

