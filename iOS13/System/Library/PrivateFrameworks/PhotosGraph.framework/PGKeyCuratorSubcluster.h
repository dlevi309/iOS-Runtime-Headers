/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@protocol CLSInvestigationItem;
@interface PGKeyCuratorSubcluster : NSObject {

	id<CLSInvestigationItem> _keyItem;
	double _score;

}

@property (readonly) id<CLSInvestigationItem> keyItem;              //@synthesize keyItem=_keyItem - In the implementation block
@property (readonly) double score;                                  //@synthesize score=_score - In the implementation block
-(double)score;
-(id<CLSInvestigationItem>)keyItem;
-(id)initWithItems:(id)arg1 keyItem:(id)arg2 score:(double)arg3 ;
@end

