/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)topOutset;
-(void)setDefaultValues;
-(void)setTrailingOutset:(double)arg1 ;
-(void)setShowsButtons:(BOOL)arg1 ;
-(void)setColorsBackground:(BOOL)arg1 ;
-(BOOL)showsButtons;
-(double)trailingOutset;
-(double)bottomOutset;
-(void)setLeadingOutset:(double)arg1 ;
-(BOOL)colorsBackground;
-(void)setBottomOutset:(double)arg1 ;
-(double)leadingOutset;
-(void)setTopOutset:(double)arg1 ;
@end

