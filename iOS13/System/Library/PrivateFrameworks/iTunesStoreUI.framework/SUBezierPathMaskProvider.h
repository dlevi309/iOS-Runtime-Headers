/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUMaskProvider.h>

@class UIBezierPath;

@interface SUBezierPathMaskProvider : SUMaskProvider {

	UIBezierPath* _bezierPath;

}

@property (nonatomic,retain) UIBezierPath * bezierPath;              //@synthesize bezierPath=_bezierPath - In the implementation block
-(void)dealloc;
-(UIBezierPath *)bezierPath;
-(CGPathRef)copyPathForMaskWithSize:(CGSize)arg1 ;
-(void)setBezierPath:(UIBezierPath *)arg1 ;
@end

