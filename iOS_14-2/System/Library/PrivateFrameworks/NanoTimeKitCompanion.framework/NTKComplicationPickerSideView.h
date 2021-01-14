/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKEditOptionPickerSideView.h>
#import <libobjc.A.dylib/NTKCurvedPickerSideView.h>

@class NTKComplicationLayoutRule, NSString;

@interface NTKComplicationPickerSideView : NTKEditOptionPickerSideView <NTKCurvedPickerSideView> {

	NTKComplicationLayoutRule* _layoutRule;
	long long _style;

}

@property (nonatomic,copy) NTKComplicationLayoutRule * layoutRule;              //@synthesize layoutRule=_layoutRule - In the implementation block
@property (assign,nonatomic) long long style;                                   //@synthesize style=_style - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(NTKComplicationLayoutRule *)layoutRule;
-(void)setLayoutRule:(NTKComplicationLayoutRule *)arg1 ;
-(void)setCurvedAngle:(double)arg1 ;
@end

