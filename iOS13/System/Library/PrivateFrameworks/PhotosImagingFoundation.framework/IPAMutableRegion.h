/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/IPARegion.h>

@interface IPAMutableRegion : IPARegion
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clear;
-(void)scaleBy:(CGPoint)arg1 ;
-(void)addRegion:(id)arg1 ;
-(void)setRegion:(id)arg1 ;
-(void)clipToRect:(CGRect)arg1 ;
-(void)addRect:(CGRect)arg1 ;
-(void)translateBy:(CGPoint)arg1 ;
-(void)removeRect:(CGRect)arg1 ;
-(void)removeRegion:(id)arg1 ;
-(void)addRectArray:(id)arg1 ;
-(void)removeRectArray:(id)arg1 ;
-(void)clipToRegion:(id)arg1 ;
-(void)clipToRectArray:(id)arg1 ;
-(void)diffWithRect:(CGRect)arg1 ;
-(void)diffWithRegion:(id)arg1 ;
-(void)flipInRect:(CGRect)arg1 ;
-(void)growBy:(CGPoint)arg1 ;
-(void)growBy:(CGPoint)arg1 inRect:(CGRect)arg2 ;
-(void)shrinkBy:(CGPoint)arg1 ;
-(void)shrinkBy:(CGPoint)arg1 inRect:(CGRect)arg2 ;
-(void)roundUp;
-(void)roundDown;
-(void)applyOrientation:(long long)arg1 imageSize:(CGSize)arg2 ;
-(void)applyAffineTransform:(CGAffineTransform)arg1 ;
@end

