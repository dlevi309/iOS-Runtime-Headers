/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGPoint)point;
-(id)initWithAttributedName:(id)arg1 point:(CGPoint)arg2 inView:(id)arg3 ;
-(NSString *)name;
-(UIView *)view;
-(NSAttributedString *)attributedName;
-(unsigned long long)hash;
-(id)initWithName:(id)arg1 point:(CGPoint)arg2 inView:(id)arg3 ;
-(id)initWithName:(id)arg1 view:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

