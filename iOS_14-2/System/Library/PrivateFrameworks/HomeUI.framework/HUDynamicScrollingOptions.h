/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


#import <HomeUI/HomeUI-Structs.h>
@interface HUDynamicScrollingOptions : NSObject {

	long long _viewSizeSubclass;
	SCD_Struct_HU16 _textScaleSetting;

}

@property (nonatomic,readonly) long long viewSizeSubclass;                  //@synthesize viewSizeSubclass=_viewSizeSubclass - In the implementation block
@property (assign,nonatomic) SCD_Struct_HU16 textScaleSetting;              //@synthesize textScaleSetting=_textScaleSetting - In the implementation block
+(id)defaultOptionsForViewSizeSubclass:(long long)arg1 showsStatusSection:(BOOL)arg2 ;
+(id)_defaultOptionsWithStatusSectionForViewSizeSubclass:(long long)arg1 ;
+(id)_defaultOptionsWithoutStatusSectionForViewSizeSubclass:(long long)arg1 ;
-(long long)viewSizeSubclass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithViewSizeSubclass:(long long)arg1 ;
-(void)setTextScaleSetting:(SCD_Struct_HU16)arg1 ;
-(SCD_Struct_HU16)textScaleSetting;
@end

