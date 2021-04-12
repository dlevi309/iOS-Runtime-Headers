/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EDResources;

@interface EDBorders : NSObject <NSCopying> {

	EDResources* mResources;
	unsigned long long mLeftBorderIndex;
	unsigned long long mRightBorderIndex;
	unsigned long long mTopBorderIndex;
	unsigned long long mBottomBorderIndex;
	unsigned long long mDiagonalBorderIndex;
	unsigned long long mVerticalBorderIndex;
	unsigned long long mHorizontalBorderIndex;

}
+(id)bordersWithLeft:(id)arg1 right:(id)arg2 top:(id)arg3 bottom:(id)arg4 diagonal:(id)arg5 resources:(id)arg6 ;
+(id)bordersWithResources:(id)arg1 ;
+(id)bordersWithLeft:(id)arg1 right:(id)arg2 top:(id)arg3 bottom:(id)arg4 diagonal:(id)arg5 vertical:(id)arg6 horizontal:(id)arg7 resources:(id)arg8 ;
-(void)setRightBorder:(id)arg1 ;
-(id)rightBorder;
-(id)description;
-(unsigned long long)hash;
-(id)initWithResources:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)topBorder;
-(id)bottomBorder;
-(void)setTopBorder:(id)arg1 ;
-(void)setBottomBorder:(id)arg1 ;
-(id)leftBorder;
-(void)setLeftBorder:(id)arg1 ;
-(void)setVerticalBorder:(id)arg1 ;
-(void)setHorizontalBorder:(id)arg1 ;
-(BOOL)isEqualToBorders:(id)arg1 ;
-(void)setDiagonalBorder:(id)arg1 ;
-(id)verticalBorder;
-(id)horizontalBorder;
-(id)diagonalBorder;
@end

