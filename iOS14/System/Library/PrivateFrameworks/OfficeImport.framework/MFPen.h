/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)pen;
+(id)penWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double*)arg4 ;
-(id)init;
-(int)getWidth;
-(int)selectInto:(id)arg1 ;
-(id)initWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double*)arg4 ;
-(int)getStyle;
-(id)getColor;
@end

