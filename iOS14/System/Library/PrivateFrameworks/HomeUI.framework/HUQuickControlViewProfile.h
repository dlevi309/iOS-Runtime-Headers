/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol HFDynamicFormattingValue, HFIconDescriptor;
@class UIColor;

@interface HUQuickControlViewProfile : NSObject <NSCopying> {

	unsigned long long _controlSize;
	id<HFDynamicFormattingValue> _supplementaryFormattedValue;
	id<HFIconDescriptor> _decorationIconDescriptor;
	unsigned long long _orientation;
	UIColor* _tintColor;

}

@property (nonatomic,readonly) double gestureDragCoefficient; 
@property (assign,nonatomic) unsigned long long controlSize;                                        //@synthesize controlSize=_controlSize - In the implementation block
@property (nonatomic,readonly) BOOL supportsTouchContinuation; 
@property (nonatomic,retain) id<HFDynamicFormattingValue> supplementaryFormattedValue;              //@synthesize supplementaryFormattedValue=_supplementaryFormattedValue - In the implementation block
@property (nonatomic,retain) id<HFIconDescriptor> decorationIconDescriptor;                         //@synthesize decorationIconDescriptor=_decorationIconDescriptor - In the implementation block
@property (assign,nonatomic) unsigned long long orientation;                                        //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                                   //@synthesize tintColor=_tintColor - In the implementation block
-(void)setControlSize:(unsigned long long)arg1 ;
-(unsigned long long)controlSize;
-(void)setTintColor:(UIColor *)arg1 ;
-(unsigned long long)orientation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)tintColor;
-(void)setOrientation:(unsigned long long)arg1 ;
-(BOOL)supportsTouchContinuation;
-(id<HFIconDescriptor>)decorationIconDescriptor;
-(id<HFDynamicFormattingValue>)supplementaryFormattedValue;
-(double)gestureDragCoefficient;
-(void)setSupplementaryFormattedValue:(id<HFDynamicFormattingValue>)arg1 ;
-(void)setDecorationIconDescriptor:(id<HFIconDescriptor>)arg1 ;
@end

