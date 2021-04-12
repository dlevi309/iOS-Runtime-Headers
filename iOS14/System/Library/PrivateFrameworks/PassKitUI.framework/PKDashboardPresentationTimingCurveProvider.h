/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKit/UITimingCurveProvider.h>

@class UICubicTimingParameters, UISpringTimingParameters;

@interface PKDashboardPresentationTimingCurveProvider : NSObject <UITimingCurveProvider> {

	double _fractionComplete;
	unsigned long long _type;

}

@property (assign,nonatomic) double fractionComplete;                                          //@synthesize fractionComplete=_fractionComplete - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long timingCurveType; 
@property (nonatomic,readonly) UICubicTimingParameters * cubicTimingParameters; 
@property (nonatomic,readonly) UISpringTimingParameters * springTimingParameters; 
-(void)setFractionComplete:(double)arg1 ;
-(double)fractionComplete;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(long long)timingCurveType;
-(unsigned long long)type;
-(UICubicTimingParameters *)cubicTimingParameters;
-(id)initWithCoder:(id)arg1 ;
-(UISpringTimingParameters *)springTimingParameters;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

