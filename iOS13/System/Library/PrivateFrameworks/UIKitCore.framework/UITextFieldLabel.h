/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UILabel.h>

@interface UITextFieldLabel : UILabel {

	BOOL _shouldRenderWithoutTextField;

}

@property (assign,nonatomic) BOOL shouldRenderWithoutTextField;              //@synthesize shouldRenderWithoutTextField=_shouldRenderWithoutTextField - In the implementation block
+(id)defaultFont;
+(id)_defaultAttributes;
-(void)drawTextInRect:(CGRect)arg1 ;
-(BOOL)shouldRenderWithoutTextField;
-(void)_defaultDrawTextInRect:(CGRect)arg1 ;
-(BOOL)_shouldDrawUnderlinesLikeWebKit;
-(void)setShouldRenderWithoutTextField:(BOOL)arg1 ;
@end

