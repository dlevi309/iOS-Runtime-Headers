/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/CMDiagramPointMapper.h>

@interface CMDiagramPointSegmentedPieMapper : CMDiagramPointMapper {

	double mStartAngle;
	double mStopAngle;
	BOOL mDrawArrows;
	unsigned long long mSegmentIndex;
	unsigned long long mSegmentCount;

}
-(void)setStartAngle:(double)arg1 ;
-(void)setSegmentCount:(unsigned long long)arg1 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(void)setDrawArrows:(BOOL)arg1 ;
-(id)transformPresentationName;
-(void)setStopAngle:(double)arg1 ;
-(void)setSegmentIndex:(unsigned long long)arg1 ;
-(id)_arrowFillWithState:(id)arg1 ;
@end

