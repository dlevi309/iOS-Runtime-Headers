/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITextFieldBackgroundProvider.h>

@interface _UITextFieldDrawingBackgroundProvider : _UITextFieldBackgroundProvider {

	SCD_Struct_UI34 _flags;
	BOOL _drawsContent;

}

@property (assign,nonatomic) BOOL drawsContent;              //@synthesize drawsContent=_drawsContent - In the implementation block
-(id)init;
-(void)setNeedsDisplay;
-(void)drawInBounds:(CGRect)arg1 ;
-(BOOL)drawsContent;
-(void)_buildDescription:(id)arg1 ;
-(void)removeFromTextField;
-(void)addToTextField:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setDrawsContent:(BOOL)arg1 ;
-(void)_setDrawsContent:(BOOL)arg1 ;
-(void)setDrawsContentBasedOnTraitsIfNeeded;
@end

