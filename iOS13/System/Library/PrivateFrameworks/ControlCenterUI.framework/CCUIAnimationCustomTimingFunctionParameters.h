/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)controlPoint1;
-(CGPoint)controlPoint2;
-(id)_initWithControlPoint1:(CGPoint)arg1 controlPoint2:(CGPoint)arg2 ;
@end

