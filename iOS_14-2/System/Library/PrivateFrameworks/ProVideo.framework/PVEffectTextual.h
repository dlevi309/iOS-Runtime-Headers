/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@protocol PVEffectTextual
@required
-(int)orientation;
-(BOOL)isTextFlipped;
-(BOOL)supportsFlippingText;
-(BOOL)supportsOrientation;
-(id)defaultAttributedString:(unsigned long long)arg1;
-(PVCGPointQuad*)textCornersAtTime:(SCD_Struct_PV22)arg1 index:(unsigned long long)arg2 forcePosterFrame:(BOOL)arg3 includeDropShadow:(BOOL)arg4 scale:(CGPoint)arg5 viewSize:(CGSize)arg6 viewOrigin:(int)arg7;
-(id)textEditingBoundsAtTime:(SCD_Struct_PV22)arg1 forcePosterFrame:(BOOL)arg2 useParagraphBounds:(BOOL)arg3 includeDropShadow:(BOOL)arg4 includeMasks:(BOOL)arg5;
-(void)beginTextEditing;
-(void)endTextEditing;
-(id)textTransformsAtTime:(SCD_Struct_PV22)arg1 forcePosterFrame:(BOOL)arg2 viewSize:(CGSize)arg3 viewOrigin:(int)arg4;
-(id)textEditingBounds:(SCD_Struct_PV22)arg1;
-(id)textTransformsAtTime:(SCD_Struct_PV22)arg1 forcePosterFrame:(BOOL)arg2 includeTransformAnimation:(BOOL)arg3 viewSize:(CGSize)arg4 viewOrigin:(int)arg5;

@end

