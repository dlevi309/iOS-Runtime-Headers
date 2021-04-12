/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)pathAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(CsPoint<int>)limo;
-(void)addPath:(id)arg1 ;
-(id)description;
-(unsigned long long)pathCount;
-(int)type;
-(void)dealloc;
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
@end

