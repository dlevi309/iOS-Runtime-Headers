/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface UITransform : NSObject <BSDescriptionProviding, NSCopying> {

	CGAffineTransform _transform;

}

@property (nonatomic,readonly) CGAffineTransform transform;              //@synthesize transform=_transform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identity;
+(id)rotationWithRadians:(double)arg1 ;
+(id)transformWithCGAffineTransform:(CGAffineTransform)arg1 ;
+(id)rotationWithDegrees:(long long)arg1 ;
+(id)translation:(CGPoint)arg1 ;
+(id)scaleX:(double)arg1 scaleY:(double)arg2 ;
+(id)scale:(double)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGAffineTransform)transform;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)_initWithTransform:(CGAffineTransform)arg1 ;
@end

