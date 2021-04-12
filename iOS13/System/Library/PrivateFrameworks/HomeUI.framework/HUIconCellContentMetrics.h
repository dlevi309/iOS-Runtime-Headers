/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


#import <HomeUI/HomeUI-Structs.h>
@interface HUIconCellContentMetrics : NSObject {

	CGSize _iconSize;
	UIEdgeInsets _contentInset;

}

@property (assign,nonatomic) CGSize iconSize;                        //@synthesize iconSize=_iconSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;              //@synthesize contentInset=_contentInset - In the implementation block
+(id)compactMetrics;
+(id)defaultMetrics;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInset;
-(CGSize)iconSize;
-(void)setIconSize:(CGSize)arg1 ;
@end

