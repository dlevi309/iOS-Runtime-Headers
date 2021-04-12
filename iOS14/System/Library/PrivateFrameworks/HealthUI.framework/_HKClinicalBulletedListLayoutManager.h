/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSAttributedString *)bullet;
-(void)drawGlyphsForGlyphRange:(NSRange)arg1 atPoint:(CGPoint)arg2 ;
-(void)setBullet:(NSAttributedString *)arg1 ;
@end

