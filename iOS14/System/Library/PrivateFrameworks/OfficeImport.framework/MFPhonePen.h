/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

