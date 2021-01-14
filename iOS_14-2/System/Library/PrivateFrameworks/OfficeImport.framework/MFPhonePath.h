/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/MFPath.h>

@class OITSUBezierPath;

@interface MFPhonePath : MFPath {

	OITSUBezierPath* m_path;
	int m_state;

}
-(int)abort;
-(int)end;
-(int)begin;
-(id)init;
-(BOOL)isOpen;
-(int)fill:(id)arg1 ;
-(CGPoint)currentPoint;
-(int)flatten;
-(int)widen:(id)arg1 ;
-(int)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)stroke:(id)arg1 ;
-(int)closeFigure;
-(void)appendBezierPath:(id)arg1 dc:(id)arg2 ;
-(id)initWithPath:(id)arg1 state:(int)arg2 ;
-(id)getBezierPath;
@end

