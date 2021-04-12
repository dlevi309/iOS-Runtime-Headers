/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <libobjc.A.dylib/CCUIAnimationTimingFunctionDescription.h>

@class NSString;

@interface CCUIAnimationCustomTimingFunctionParameters : NSObject <CCUIAnimationTimingFunctionDescription> {

	CGPoint _controlPoint1;
	CGPoint _controlPoint2;

}

@property (nonatomic,readonly) CGPoint controlPoint1;               //@synthesize controlPoint1=_controlPoint1 - In the implementation block
@property (nonatomic,readonly) CGPoint controlPoint2;               //@synthesize controlPoint2=_controlPoint2 - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)functionWithControlPoint1:(CGPoint)arg1 controlPoint2:(CGPoint)arg2 ;
-(CGPoint)controlPoint2;
-(NSString *)description;
-(unsigned long long)hash;
-(CGPoint)controlPoint1;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_initWithControlPoint1:(CGPoint)arg1 controlPoint2:(CGPoint)arg2 ;
@end

