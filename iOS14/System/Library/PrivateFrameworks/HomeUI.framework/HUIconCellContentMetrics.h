/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


#import <HomeUI/HomeUI-Structs.h>
@interface HUIconCellContentMetrics : NSObject {

	CGSize _iconSize;
	UIEdgeInsets _contentInset;

}

@property (assign,nonatomic) CGSize iconSize;                        //@synthesize iconSize=_iconSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;              //@synthesize contentInset=_contentInset - In the implementation block
+(id)defaultMetrics;
+(id)compactMetrics;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInset;
-(CGSize)iconSize;
-(void)setIconSize:(CGSize)arg1 ;
@end

