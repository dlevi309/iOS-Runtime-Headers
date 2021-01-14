/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)execute;
-(NSString *)file;
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(id)initWithCorrelationsFile:(id)arg1 knowledgeStore:(id)arg2 ;
-(id)longFormVideoAppBundleIDs;
@end

