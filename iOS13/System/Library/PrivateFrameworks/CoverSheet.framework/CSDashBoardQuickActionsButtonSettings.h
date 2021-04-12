/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <PrototypeTools/PTSettings.h>

@interface CSDashBoardQuickActionsButtonSettings : PTSettings {

	BOOL _showsButtons;
	BOOL _colorsBackground;
	double _topOutset;
	double _leadingOutset;
	double _trailingOutset;
	double _bottomOutset;

}

@property (assign,nonatomic) BOOL showsButtons;                  //@synthesize showsButtons=_showsButtons - In the implementation block
@property (assign,nonatomic) BOOL colorsBackground;              //@synthesize colorsBackground=_colorsBackground - In the implementation block
@property (assign,nonatomic) double topOutset;                   //@synthesize topOutset=_topOutset - In the implementation block
@property (assign,nonatomic) double leadingOutset;               //@synthesize leadingOutset=_leadingOutset - In the implementation block
@property (assign,nonatomic) double trailingOutset;              //@synthesize trailingOutset=_trailingOutset - In the implementation block
@property (assign,nonatomic) double bottomOutset;                //@synthesize bottomOutset=_bottomOutset - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(BOOL)showsButtons;
-(double)topOutset;
-(void)setTopOutset:(double)arg1 ;
-(void)setShowsButtons:(BOOL)arg1 ;
-(void)setColorsBackground:(BOOL)arg1 ;
-(void)setLeadingOutset:(double)arg1 ;
-(void)setTrailingOutset:(double)arg1 ;
-(void)setBottomOutset:(double)arg1 ;
-(BOOL)colorsBackground;
-(double)leadingOutset;
-(double)trailingOutset;
-(double)bottomOutset;
@end

