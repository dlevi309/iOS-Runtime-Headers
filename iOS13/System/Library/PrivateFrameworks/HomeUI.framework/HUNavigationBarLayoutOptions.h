/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HUNavigationButtonLayoutOptions;

@interface HUNavigationBarLayoutOptions : NSObject <NSCopying> {

	double _topMargin;
	double _bottomMargin;
	double _height;
	HUNavigationButtonLayoutOptions* _buttonLayoutOptions;
	long long _viewSizeSubclass;
	double _containerLeadingMargin;
	double _containerTrailingMargin;

}

@property (nonatomic,readonly) long long viewSizeSubclass;                                     //@synthesize viewSizeSubclass=_viewSizeSubclass - In the implementation block
@property (assign,nonatomic) double containerLeadingMargin;                                    //@synthesize containerLeadingMargin=_containerLeadingMargin - In the implementation block
@property (assign,nonatomic) double containerTrailingMargin;                                   //@synthesize containerTrailingMargin=_containerTrailingMargin - In the implementation block
@property (assign,nonatomic) double topMargin;                                                 //@synthesize topMargin=_topMargin - In the implementation block
@property (assign,nonatomic) double bottomMargin;                                              //@synthesize bottomMargin=_bottomMargin - In the implementation block
@property (assign,nonatomic) double height;                                                    //@synthesize height=_height - In the implementation block
@property (nonatomic,copy) HUNavigationButtonLayoutOptions * buttonLayoutOptions;              //@synthesize buttonLayoutOptions=_buttonLayoutOptions - In the implementation block
@property (nonatomic,readonly) double leadingMargin; 
@property (nonatomic,readonly) double trailingMargin; 
+(id)defaultOptionsForViewSizeSubclass:(long long)arg1 containerLeadingMargin:(double)arg2 containerTrailingMargin:(double)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)height;
-(void)setHeight:(double)arg1 ;
-(void)setTopMargin:(double)arg1 ;
-(void)setBottomMargin:(double)arg1 ;
-(double)topMargin;
-(double)bottomMargin;
-(double)leadingMargin;
-(double)trailingMargin;
-(long long)viewSizeSubclass;
-(double)containerLeadingMargin;
-(double)containerTrailingMargin;
-(id)initWithViewSizeSubclass:(long long)arg1 ;
-(void)setContainerLeadingMargin:(double)arg1 ;
-(void)setContainerTrailingMargin:(double)arg1 ;
-(void)setButtonLayoutOptions:(HUNavigationButtonLayoutOptions *)arg1 ;
-(HUNavigationButtonLayoutOptions *)buttonLayoutOptions;
@end

