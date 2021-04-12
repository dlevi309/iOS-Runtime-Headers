/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FCColor : NSObject <NSCopying> {

	double _red;
	double _green;
	double _blue;
	double _alpha;

}

@property (nonatomic,readonly) double red;                //@synthesize red=_red - In the implementation block
@property (nonatomic,readonly) double green;              //@synthesize green=_green - In the implementation block
@property (nonatomic,readonly) double blue;               //@synthesize blue=_blue - In the implementation block
@property (nonatomic,readonly) double alpha;              //@synthesize alpha=_alpha - In the implementation block
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)blackColor;
+(id)whiteColor;
+(id)clearColor;
+(id)colorWithHexString:(id)arg1 ;
+(id)nullableColorWithHexString:(id)arg1 ;
+(id)colorWithPBColor:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(double)red;
-(double)green;
-(double)blue;
-(double)alpha;
-(id)legibleColor;
-(BOOL)isSimilarToColor:(id)arg1 withinPercentage:(double)arg2 ;
-(void)readDeconstructedRepresentationWithAcccessor:(/*^block*/id)arg1 ;
-(id)pbColor;
@end

