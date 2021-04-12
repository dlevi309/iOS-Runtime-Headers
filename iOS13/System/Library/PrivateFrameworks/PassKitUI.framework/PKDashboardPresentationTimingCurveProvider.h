/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)timingCurveType;
-(UICubicTimingParameters *)cubicTimingParameters;
-(UISpringTimingParameters *)springTimingParameters;
-(double)fractionComplete;
-(void)setFractionComplete:(double)arg1 ;
@end

