/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface UIViewSpringAnimationDescription : NSObject {

	BOOL _usesDampingRatioAndResponse;
	double _tension;
	double _friction;
	SCD_Struct_UI155 _parameters;

}

@property (assign,nonatomic) BOOL usesDampingRatioAndResponse;              //@synthesize usesDampingRatioAndResponse=_usesDampingRatioAndResponse - In the implementation block
@property (assign,nonatomic) double tension;                                //@synthesize tension=_tension - In the implementation block
@property (assign,nonatomic) double friction;                               //@synthesize friction=_friction - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI155 parameters;                   //@synthesize parameters=_parameters - In the implementation block
+(id)descriptionWithTension:(double)arg1 friction:(double)arg2 ;
+(id)descriptionWithSpringAnimationParameters:(SCD_Struct_UI155)arg1 ;
-(SCD_Struct_UI155)parameters;
-(void)setParameters:(SCD_Struct_UI155)arg1 ;
-(double)friction;
-(double)tension;
-(void)setTension:(double)arg1 ;
-(BOOL)usesDampingRatioAndResponse;
-(void)setFriction:(double)arg1 ;
-(void)setUsesDampingRatioAndResponse:(BOOL)arg1 ;
@end

