/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _PKStrokeClipPlane : NSObject <NSCopying> {

	CGPoint _origin;
	CGPoint _normal;

}

@property (nonatomic,readonly) CGPoint origin;              //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) CGPoint normal;              //@synthesize normal=_normal - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)origin;
-(CGPoint)normal;
-(double)distanceToPoint:(CGPoint)arg1 ;
-(BOOL)isEqualToClipPlane:(id)arg1 ;
-(id)initWithOrigin:(CGPoint)arg1 normal:(CGPoint)arg2 ;
@end

