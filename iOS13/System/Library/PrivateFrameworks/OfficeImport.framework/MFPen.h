/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <libobjc.A.dylib/MFObject.h>

@class OITSUColor;

@interface MFPen : NSObject <MFObject> {

	int m_penStyle;
	int m_penWidth;
	OITSUColor* m_colour;
	double* m_userStyleArray;

}
+(id)penWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double*)arg4 ;
+(id)pen;
-(id)init;
-(int)selectInto:(id)arg1 ;
-(int)getWidth;
-(id)initWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double*)arg4 ;
-(int)getStyle;
-(id)getColor;
@end

