/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCPersonalizationFeature;

@interface NTPersonalizationFeatureCTRLookupRequest : NSObject <NSCopying> {

	FCPersonalizationFeature* _personalizationFeature;
	double _clickPrior;
	double _impressionPrior;

}

@property (nonatomic,copy) FCPersonalizationFeature * personalizationFeature;              //@synthesize personalizationFeature=_personalizationFeature - In the implementation block
@property (assign,nonatomic) double clickPrior;                                            //@synthesize clickPrior=_clickPrior - In the implementation block
@property (assign,nonatomic) double impressionPrior;                                       //@synthesize impressionPrior=_impressionPrior - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FCPersonalizationFeature *)personalizationFeature;
-(void)setPersonalizationFeature:(FCPersonalizationFeature *)arg1 ;
-(double)clickPrior;
-(void)setClickPrior:(double)arg1 ;
-(double)impressionPrior;
-(void)setImpressionPrior:(double)arg1 ;
@end

