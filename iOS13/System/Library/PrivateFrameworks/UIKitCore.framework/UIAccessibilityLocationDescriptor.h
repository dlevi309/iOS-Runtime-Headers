/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIView, NSAttributedString, NSString;

@interface UIAccessibilityLocationDescriptor : NSObject {

	UIView* _view;
	NSAttributedString* _attributedName;
	CGPoint _point;

}

@property (nonatomic,__weak,readonly) UIView * view;                             //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) CGPoint point;                                    //@synthesize point=_point - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSAttributedString * attributedName;              //@synthesize attributedName=_attributedName - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(CGPoint)point;
-(UIView *)view;
-(NSAttributedString *)attributedName;
-(id)initWithName:(id)arg1 point:(CGPoint)arg2 inView:(id)arg3 ;
-(id)initWithAttributedName:(id)arg1 point:(CGPoint)arg2 inView:(id)arg3 ;
-(id)initWithName:(id)arg1 view:(id)arg2 ;
@end

