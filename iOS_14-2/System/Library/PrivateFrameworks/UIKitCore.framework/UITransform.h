/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)scale:(double)arg1 ;
+(id)identity;
+(id)translation:(CGPoint)arg1 ;
+(id)rotationWithRadians:(double)arg1 ;
+(id)transformWithCGAffineTransform:(CGAffineTransform)arg1 ;
+(id)rotationWithDegrees:(long long)arg1 ;
+(id)scaleX:(double)arg1 scaleY:(double)arg2 ;
-(id)succinctDescription;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(CGAffineTransform)transform;
-(NSString *)description;
-(unsigned long long)hash;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithTransform:(CGAffineTransform)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

