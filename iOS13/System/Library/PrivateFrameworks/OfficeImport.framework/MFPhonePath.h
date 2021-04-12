/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/MFPath.h>

@class OITSUBezierPath;

@interface MFPhonePath : MFPath {

	OITSUBezierPath* m_path;
	int m_state;

}
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)state;
-(int)end;
-(BOOL)isOpen;
-(int)begin;
-(int)abort;
-(CGPoint)currentPoint;
-(int)flatten;
-(int)stroke:(id)arg1 ;
-(int)closeFigure;
-(int)widen:(id)arg1 ;
-(int)fill:(id)arg1 ;
-(void)appendBezierPath:(id)arg1 dc:(id)arg2 ;
-(id)initWithPath:(id)arg1 state:(int)arg2 ;
-(id)getBezierPath;
@end

