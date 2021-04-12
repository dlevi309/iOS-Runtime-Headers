/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


#import <HomeUI/HomeUI-Structs.h>
@interface HUDynamicScrollingOptions : NSObject {

	long long _viewSizeSubclass;
	SCD_Struct_HU15 _textScaleSetting;

}

@property (nonatomic,readonly) long long viewSizeSubclass;                  //@synthesize viewSizeSubclass=_viewSizeSubclass - In the implementation block
@property (assign,nonatomic) SCD_Struct_HU15 textScaleSetting;              //@synthesize textScaleSetting=_textScaleSetting - In the implementation block
+(id)_defaultOptionsWithStatusSectionForViewSizeSubclass:(long long)arg1 ;
+(id)_defaultOptionsWithoutStatusSectionForViewSizeSubclass:(long long)arg1 ;
+(id)defaultOptionsForViewSizeSubclass:(long long)arg1 showsStatusSection:(BOOL)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)viewSizeSubclass;
-(id)initWithViewSizeSubclass:(long long)arg1 ;
-(void)setTextScaleSetting:(SCD_Struct_HU15)arg1 ;
-(SCD_Struct_HU15)textScaleSetting;
@end

