/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADShapeGeometry.h>

@class NSMutableArray;

@interface OADCustomShapeGeometry : OADShapeGeometry {

	CsRect<int>* mGeometryCoordSpace;
	CsPoint<int>* mLimo;
	NSMutableArray* mFormulas;
	NSMutableArray* mTextBodyRects;
	NSMutableArray* mPaths;

}
-(id)init;
-(void)dealloc;
-(id)description;
-(int)type;
-(unsigned long long)pathCount;
-(void)addPath:(id)arg1 ;
-(id)pathAtIndex:(unsigned long long)arg1 ;
-(id)equivalentCustomGeometry;
-(unsigned long long)textBodyRectCount;
-(id)textBodyRectAtIndex:(unsigned long long)arg1 ;
-(CsRect<int>)geometryCoordSpace;
-(void)setGeometryCoordSpace:(CsRect<int>)arg1 ;
-(unsigned long long)formulaCount;
-(id)formulaAtIndex:(unsigned long long)arg1 ;
-(void)addFormula:(id)arg1 ;
-(void)addTextBodyRect:(id)arg1 ;
-(void)setLimo:(CsPoint<int>)arg1 ;
-(CsPoint<int>)limo;
@end

