/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


#import <WorkflowEditor/WorkflowEditor-Structs.h>
@class UIColor;

@interface CKTextKitShadower : NSObject {

	UIEdgeInsets _calculatedShadowPadding;
	UIColor* _shadowColor;
	double _shadowOpacity;
	double _shadowRadius;
	CGSize _shadowOffset;

}

@property (nonatomic,readonly) CGSize shadowOffset;                //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (nonatomic,readonly) UIColor * shadowColor;              //@synthesize shadowColor=_shadowColor - In the implementation block
@property (nonatomic,readonly) double shadowOpacity;               //@synthesize shadowOpacity=_shadowOpacity - In the implementation block
@property (nonatomic,readonly) double shadowRadius;                //@synthesize shadowRadius=_shadowRadius - In the implementation block
-(double)shadowRadius;
-(double)shadowOpacity;
-(UIColor *)shadowColor;
-(CGSize)shadowOffset;
-(UIEdgeInsets)shadowPadding;
-(CGRect)offsetRectWithInternalRect:(CGRect)arg1 ;
-(CGPoint)offsetPointWithExternalPoint:(CGPoint)arg1 ;
-(void)setShadowInContext:(CGContextRef)arg1 ;
-(CGRect)insetRectWithConstrainedRect:(CGRect)arg1 ;
-(CGSize)outsetSizeWithInsetSize:(CGSize)arg1 ;
-(CGSize)insetSizeWithConstrainedSize:(CGSize)arg1 ;
-(id)initWithShadowOffset:(CGSize)arg1 shadowColor:(id)arg2 shadowOpacity:(double)arg3 shadowRadius:(double)arg4 ;
-(BOOL)_shouldDrawShadow;
-(CGRect)outsetRectWithInsetRect:(CGRect)arg1 ;
-(CGPoint)offsetPointWithInternalPoint:(CGPoint)arg1 ;
@end

