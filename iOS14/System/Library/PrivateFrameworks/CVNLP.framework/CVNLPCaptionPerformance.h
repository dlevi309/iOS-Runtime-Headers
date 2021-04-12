/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
*/


@class NSMutableDictionary;

@interface CVNLPCaptionPerformance : NSObject {

	BOOL _computePerf;
	NSMutableDictionary* _results;

}

@property (nonatomic,readonly) BOOL computePerf;                           //@synthesize computePerf=_computePerf - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * results;              //@synthesize results=_results - In the implementation block
-(id)initWithOptions:(id)arg1 ;
-(NSMutableDictionary *)results;
-(void)run:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)computePerf;
@end

