/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface FCPersonalizationCohortConfig : NSObject <NSCopying, NSSecureCoding> {

	double _favoritedBoost;
	double _globalWeight;
	double _userBaseline;
	double _preBaselineCurvature;
	double _postBaselineCurvature;
	double _dilutionFactor;
	double _paddingFactor;

}

@property (assign,nonatomic) double favoritedBoost;                     //@synthesize favoritedBoost=_favoritedBoost - In the implementation block
@property (assign,nonatomic) double globalWeight;                       //@synthesize globalWeight=_globalWeight - In the implementation block
@property (assign,nonatomic) double userBaseline;                       //@synthesize userBaseline=_userBaseline - In the implementation block
@property (assign,nonatomic) double preBaselineCurvature;               //@synthesize preBaselineCurvature=_preBaselineCurvature - In the implementation block
@property (assign,nonatomic) double postBaselineCurvature;              //@synthesize postBaselineCurvature=_postBaselineCurvature - In the implementation block
@property (assign,nonatomic) double dilutionFactor;                     //@synthesize dilutionFactor=_dilutionFactor - In the implementation block
@property (assign,nonatomic) double paddingFactor;                      //@synthesize paddingFactor=_paddingFactor - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithConfigDictionary:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(double)preBaselineCurvature;
-(double)postBaselineCurvature;
-(double)userBaseline;
-(double)favoritedBoost;
-(double)dilutionFactor;
-(double)paddingFactor;
-(double)globalWeight;
-(void)setGlobalWeight:(double)arg1 ;
-(void)setUserBaseline:(double)arg1 ;
-(void)setDilutionFactor:(double)arg1 ;
-(id)initWithFavoritedBoost:(double)arg1 globalWeight:(double)arg2 userBaseline:(double)arg3 preBaselineCurvature:(double)arg4 postBaselineCurvature:(double)arg5 dilutionFactor:(double)arg6 paddingFactor:(double)arg7 ;
-(void)setFavoritedBoost:(double)arg1 ;
-(void)setPreBaselineCurvature:(double)arg1 ;
-(void)setPostBaselineCurvature:(double)arg1 ;
-(void)setPaddingFactor:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

