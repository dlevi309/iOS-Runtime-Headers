/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPlayRoutePrediction.framework/AirPlayRoutePrediction
*/


@protocol _DKKnowledgeQuerying;
@class NSString;

@interface ARPCorrelationTask : NSObject {

	NSString* _file;
	id<_DKKnowledgeQuerying> _knowledgeStore;

}

@property (nonatomic,copy,readonly) NSString * file;                                 //@synthesize file=_file - In the implementation block
@property (nonatomic,readonly) id<_DKKnowledgeQuerying> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
-(NSString *)file;
-(void)execute;
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(id)initWithCorrelationsFile:(id)arg1 knowledgeStore:(id)arg2 ;
-(id)longFormVideoAppBundleIDs;
@end

