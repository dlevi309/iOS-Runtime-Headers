/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIFoundation/NSLayoutManager.h>

@class NSAttributedString;

@interface _HKClinicalBulletedListLayoutManager : NSLayoutManager {

	CGSize _bulletSize;
	NSAttributedString* _bullet;

}

@property (nonatomic,copy) NSAttributedString * bullet;              //@synthesize bullet=_bullet - In the implementation block
-(void)drawGlyphsForGlyphRange:(NSRange)arg1 atPoint:(CGPoint)arg2 ;
-(void)setBullet:(NSAttributedString *)arg1 ;
-(NSAttributedString *)bullet;
@end

