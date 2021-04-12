/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGPoint)origin;
-(CGPoint)normal;
-(double)distanceToPoint:(CGPoint)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToClipPlane:(id)arg1 ;
-(id)initWithOrigin:(CGPoint)arg1 normal:(CGPoint)arg2 ;
@end

