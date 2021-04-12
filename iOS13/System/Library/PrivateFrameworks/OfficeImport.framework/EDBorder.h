/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class EDResources, EDColorReference;

@interface EDBorder : NSObject {

	EDResources* mResources;
	int mType;
	EDColorReference* mColorReference;
	int mDiagonalType;

}
+(id)borderWithType:(int)arg1 colorReference:(id)arg2 resources:(id)arg3 ;
+(id)borderWithType:(int)arg1 colorReference:(id)arg2 diagonalType:(int)arg3 resources:(id)arg4 ;
+(id)borderWithType:(int)arg1 color:(id)arg2 resources:(id)arg3 ;
+(id)borderWithType:(int)arg1 color:(id)arg2 diagonalType:(int)arg3 resources:(id)arg4 ;
+(id)borderWithType:(int)arg1 resources:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)color;
-(id)initWithResources:(id)arg1 ;
-(void)setDiagonalType:(int)arg1 ;
-(id)colorReference;
-(int)diagonalType;
-(BOOL)isEqualToBorder:(id)arg1 ;
@end

