/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/MFRegion.h>

@class OITSUBezierPath;

@interface MFPhoneRegion : MFRegion {

	OITSUBezierPath* m_path;
	CGRect m_bounds;

}
-(int)invert:(id)arg1 ;
-(id)initWithRects:(id)arg1 in_bounds:(CGRect)arg2 in_dc:(id)arg3 ;
-(id)initWithPath:(id)arg1 in_bounds:(CGRect)arg2 ;
-(id)pathForClippingWithDeviceContext:(id)arg1 ;
-(int)fill:(id)arg1 in_brush:(id)arg2 ;
-(int)frame:(id)arg1 in_brush:(id)arg2 ;
@end

