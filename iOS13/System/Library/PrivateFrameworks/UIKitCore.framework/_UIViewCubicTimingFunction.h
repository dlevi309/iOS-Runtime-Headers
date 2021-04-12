/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _UIViewCubicTimingFunction : NSObject <NSCoding, NSCopying> {

	CGPoint _point1;
	CGPoint _point2;

}

@property (nonatomic,readonly) CGPoint controlPoint1; 
@property (nonatomic,readonly) CGPoint controlPoint2; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithControlPoint1:(CGPoint)arg1 controlPoint2:(CGPoint)arg2 ;
-(CGPoint)controlPoint1;
-(CGPoint)controlPoint2;
-(id)_mediaTimingFunction;
@end

