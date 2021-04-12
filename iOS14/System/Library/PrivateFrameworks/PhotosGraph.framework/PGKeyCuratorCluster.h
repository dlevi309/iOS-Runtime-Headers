/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@protocol CLSInvestigationItem;
@class NSArray;

@interface PGKeyCuratorCluster : NSObject {

	NSArray* _subclusters;
	id<CLSInvestigationItem> _keyItem;
	double _score;

}

@property (readonly) NSArray * subclusters;                         //@synthesize subclusters=_subclusters - In the implementation block
@property (readonly) id<CLSInvestigationItem> keyItem;              //@synthesize keyItem=_keyItem - In the implementation block
@property (readonly) double score;                                  //@synthesize score=_score - In the implementation block
-(double)score;
-(id<CLSInvestigationItem>)keyItem;
-(NSArray *)subclusters;
-(id)initWithSubclusters:(id)arg1 keyItem:(id)arg2 score:(double)arg3 ;
@end

