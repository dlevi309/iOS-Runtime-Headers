/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/


#import <GameCenterUI/GameCenterUI-Structs.h>
@interface GameLayerPageGrid : NSObject {

	 columnWidth;
	 rowHeight;
	 interColumnSpacing;
	 columnCount;
	 minimumInsets;
	 centeringInsets;
	 representingWidth;
	 columnSizeCategory;
	 contentSizeCategory;
	 horizontalSizeClass;

}

@property (readonly,nonatomic) long long columnCount; 
@property (readonly,nonatomic) UIEdgeInsets centeringInsets; 
-(id)init;
-(id)initWithContainerSize:(CGSize)arg1 traitCollection:(id)arg2 ;
-(id)initWithWidth:(double)arg1 columnSizeCategory:(long long)arg2 maxColumns:(id)arg3 ;
-(UIEdgeInsets)centeringInsets;
-(id)initWithSize:(CGSize)arg1 traitCollection:(id)arg2 ;
-(long long)columnCount;
@end

