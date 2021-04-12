/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeRecommendationEngine.framework/HomeRecommendationEngine
*/

#import <libobjc.A.dylib/HRERecommendationSource.h>

@class NSString;

@interface HREStandardAsyncRecommendationSource : NSObject <HRERecommendationSource> {

	Class _generationProcessClass;

}

@property (nonatomic,readonly) Class generationProcessClass;                     //@synthesize generationProcessClass=_generationProcessClass - In the implementation block
@property (nonatomic,readonly) unsigned long long disablingOptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setupProcess:(id)arg1 ;
-(unsigned long long)disablingOptions;
-(Class)generationProcessClass;
-(id)dispatchProcess:(id)arg1 options:(unsigned long long)arg2 actionBlock:(/*^block*/id)arg3 ;
-(id)recommendationsForHome:(id)arg1 withServiceLikeItems:(id)arg2 options:(unsigned long long)arg3 ;
@end

