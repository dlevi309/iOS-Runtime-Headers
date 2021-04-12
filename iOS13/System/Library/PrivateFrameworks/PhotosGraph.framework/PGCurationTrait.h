/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)debugDescription;
-(BOOL)isActive;
-(BOOL)isMatchingRequired;
-(NSString *)niceDescription;
-(double)minimumScore;
-(void)setMinimumScore:(double)arg1 ;
@end

