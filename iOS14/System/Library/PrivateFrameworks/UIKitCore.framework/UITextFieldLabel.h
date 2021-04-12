/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UILabel.h>

@interface UITextFieldLabel : UILabel {

	BOOL _shouldRenderWithoutTextField;

}

@property (assign,nonatomic) BOOL shouldRenderWithoutTextField;              //@synthesize shouldRenderWithoutTextField=_shouldRenderWithoutTextField - In the implementation block
+(id)_defaultAttributes;
+(id)defaultFont;
-(BOOL)_shouldDrawUnderlinesLikeWebKit;
-(void)setShouldRenderWithoutTextField:(BOOL)arg1 ;
-(void)_defaultDrawTextInRect:(CGRect)arg1 ;
-(BOOL)shouldRenderWithoutTextField;
-(void)drawTextInRect:(CGRect)arg1 ;
@end

