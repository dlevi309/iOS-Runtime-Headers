/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIView *)container;
-(CGAffineTransform)transform;
-(CGPoint)center;
-(id)initWithContainer:(id)arg1 center:(CGPoint)arg2 transform:(CGAffineTransform)arg3 ;
-(id)initWithContainer:(id)arg1 center:(CGPoint)arg2 ;
@end

