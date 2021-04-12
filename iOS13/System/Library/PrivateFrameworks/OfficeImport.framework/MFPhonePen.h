/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/MFPen.h>

@interface MFPhonePen : MFPen {

	float m_PixelSize;

}
+(id)penWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double*)arg4 LPToDPTransform:(CGAffineTransform)arg5 ;
-(void)strokePath:(id)arg1 in_path:(id)arg2 ;
-(id)initWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double*)arg4 ;
-(void)applyDashedLinesToPath:(id)arg1 ;
-(void)applyLineCapStyleToPath:(id)arg1 ;
-(void)applyLineJoinStyleToPath:(id)arg1 in_path:(id)arg2 ;
@end

