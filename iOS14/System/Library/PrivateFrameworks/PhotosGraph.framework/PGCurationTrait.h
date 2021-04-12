/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSString;

@interface PGCurationTrait : NSObject {

	double _minimumScore;

}

@property (assign,nonatomic) double minimumScore;                    //@synthesize minimumScore=_minimumScore - In the implementation block
@property (nonatomic,readonly) BOOL isMatchingRequired; 
@property (nonatomic,readonly) BOOL isActive; 
@property (readonly) NSString * niceDescription; 
-(id)init;
-(NSString *)niceDescription;
-(BOOL)isActive;
-(id)debugDescription;
-(double)minimumScore;
-(BOOL)isMatchingRequired;
-(void)setMinimumScore:(double)arg1 ;
@end

