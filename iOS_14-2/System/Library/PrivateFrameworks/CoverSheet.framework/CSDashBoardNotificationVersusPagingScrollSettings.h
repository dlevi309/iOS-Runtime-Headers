/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <PrototypeTools/PTSettings.h>

@interface CSDashBoardNotificationVersusPagingScrollSettings : PTSettings {

	BOOL _colorsBackground;
	double _leadingInset;
	double _trailingInset;

}

@property (assign,nonatomic) BOOL colorsBackground;              //@synthesize colorsBackground=_colorsBackground - In the implementation block
@property (assign,nonatomic) double leadingInset;                //@synthesize leadingInset=_leadingInset - In the implementation block
@property (assign,nonatomic) double trailingInset;               //@synthesize trailingInset=_trailingInset - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setColorsBackground:(BOOL)arg1 ;
-(BOOL)colorsBackground;
-(double)leadingInset;
-(double)trailingInset;
-(void)setLeadingInset:(double)arg1 ;
-(void)setTrailingInset:(double)arg1 ;
@end

