/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)orientation;
-(void)setOrientation:(unsigned long long)arg1 ;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(unsigned long long)controlSize;
-(void)setControlSize:(unsigned long long)arg1 ;
-(BOOL)supportsTouchContinuation;
-(id<HFIconDescriptor>)decorationIconDescriptor;
-(id<HFDynamicFormattingValue>)supplementaryFormattedValue;
-(double)gestureDragCoefficient;
-(void)setSupplementaryFormattedValue:(id<HFDynamicFormattingValue>)arg1 ;
-(void)setDecorationIconDescriptor:(id<HFIconDescriptor>)arg1 ;
@end

