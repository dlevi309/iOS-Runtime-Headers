/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)color;
-(void)setType:(int)arg1 ;
-(id)description;
-(int)type;
-(unsigned long long)hash;
-(id)initWithResources:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDiagonalType:(int)arg1 ;
-(id)colorReference;
-(int)diagonalType;
-(BOOL)isEqualToBorder:(id)arg1 ;
@end

