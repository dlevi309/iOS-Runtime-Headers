/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface UIViewSpringAnimationDescription : NSObject {

	BOOL _usesDampingRatioAndResponse;
	double _tension;
	double _friction;
	SCD_Struct_UI134 _parameters;

}

@property (assign,nonatomic) BOOL usesDampingRatioAndResponse;              //@synthesize usesDampingRatioAndResponse=_usesDampingRatioAndResponse - In the implementation block
@property (assign,nonatomic) double tension;                                //@synthesize tension=_tension - In the implementation block
@property (assign,nonatomic) double friction;                               //@synthesize friction=_friction - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI134 parameters;                   //@synthesize parameters=_parameters - In the implementation block
+(id)descriptionWithTension:(double)arg1 friction:(double)arg2 ;
+(id)descriptionWithSpringAnimationParameters:(SCD_Struct_UI134)arg1 ;
-(SCD_Struct_UI134)parameters;
-(void)setParameters:(SCD_Struct_UI134)arg1 ;
-(double)friction;
-(void)setFriction:(double)arg1 ;
-(BOOL)usesDampingRatioAndResponse;
-(double)tension;
-(void)setUsesDampingRatioAndResponse:(BOOL)arg1 ;
-(void)setTension:(double)arg1 ;
@end

