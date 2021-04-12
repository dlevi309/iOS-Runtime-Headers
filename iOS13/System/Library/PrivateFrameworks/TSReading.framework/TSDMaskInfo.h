/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSDDrawableInfo.h>
#import <TSReading/TSDMixing.h>

@class TSDPathSource;

@interface TSDMaskInfo : TSDDrawableInfo <TSDMixing> {

	TSDPathSource* mPathSource;

}

@property (nonatomic,retain) TSDPathSource * pathSource; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)setGeometry:(id)arg1 ;
-(Class)layoutClass;
-(id)copyWithContext:(id)arg1 ;
-(Class)repClass;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(void)setPathSource:(TSDPathSource *)arg1 ;
-(TSDPathSource *)pathSource;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 pathSource:(id)arg3 ;
@end

