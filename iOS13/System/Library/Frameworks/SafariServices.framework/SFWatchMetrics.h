/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@interface SFWatchMetrics : NSObject {

	double _closeButtonTopToBaselineSpacing;
	double _headerButtonFontPointSize;
	double _headerButtonPadding;

}

@property (nonatomic,readonly) double minimumFontScaleFactor; 
@property (nonatomic,readonly) double closeButtonTopToBaselineSpacing;              //@synthesize closeButtonTopToBaselineSpacing=_closeButtonTopToBaselineSpacing - In the implementation block
@property (nonatomic,readonly) double headerButtonFontPointSize;                    //@synthesize headerButtonFontPointSize=_headerButtonFontPointSize - In the implementation block
@property (nonatomic,readonly) double headerButtonPadding;                          //@synthesize headerButtonPadding=_headerButtonPadding - In the implementation block
+(id)currentMetrics;
-(id)init;
-(double)minimumFontScaleFactor;
-(double)closeButtonTopToBaselineSpacing;
-(double)headerButtonFontPointSize;
-(double)headerButtonPadding;
@end

