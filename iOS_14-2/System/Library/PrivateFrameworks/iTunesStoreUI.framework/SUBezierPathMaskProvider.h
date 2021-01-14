/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUMaskProvider.h>

@class UIBezierPath;

@interface SUBezierPathMaskProvider : SUMaskProvider {

	UIBezierPath* _bezierPath;

}

@property (nonatomic,retain) UIBezierPath * bezierPath;              //@synthesize bezierPath=_bezierPath - In the implementation block
-(UIBezierPath *)bezierPath;
-(void)dealloc;
-(CGPathRef)copyPathForMaskWithSize:(CGSize)arg1 ;
-(void)setBezierPath:(UIBezierPath *)arg1 ;
@end

