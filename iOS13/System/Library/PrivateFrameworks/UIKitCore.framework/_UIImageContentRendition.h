/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIColor;

@interface _UIImageContentRendition : NSObject {

	BOOL _requiresMasking;
	CGImageRef _CGImage;
	UIColor* _multiplyColor;

}

@property (nonatomic,readonly) CGImageRef CGImage;                   //@synthesize CGImage=_CGImage - In the implementation block
@property (nonatomic,readonly) UIColor * multiplyColor;              //@synthesize multiplyColor=_multiplyColor - In the implementation block
@property (nonatomic,readonly) BOOL requiresMasking;                 //@synthesize requiresMasking=_requiresMasking - In the implementation block
+(id)renditionWithCGImage:(CGImageRef)arg1 color:(id)arg2 requiresMasking:(BOOL)arg3 ;
-(void)dealloc;
-(CGImageRef)CGImage;
-(UIColor *)multiplyColor;
-(BOOL)requiresMasking;
@end

