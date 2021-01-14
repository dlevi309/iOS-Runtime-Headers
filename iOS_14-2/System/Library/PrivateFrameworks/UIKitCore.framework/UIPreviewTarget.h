/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIView;

@interface UIPreviewTarget : NSObject <NSCopying> {

	UIView* _container;
	CGPoint _center;
	CGAffineTransform _transform;

}

@property (nonatomic,readonly) UIView * container;                       //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) CGPoint center;                           //@synthesize center=_center - In the implementation block
@property (nonatomic,readonly) CGAffineTransform transform;              //@synthesize transform=_transform - In the implementation block
+(id)new;
-(CGPoint)center;
-(id)init;
-(CGAffineTransform)transform;
-(id)initWithContainer:(id)arg1 center:(CGPoint)arg2 ;
-(id)initWithContainer:(id)arg1 center:(CGPoint)arg2 transform:(CGAffineTransform)arg3 ;
-(UIView *)container;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

