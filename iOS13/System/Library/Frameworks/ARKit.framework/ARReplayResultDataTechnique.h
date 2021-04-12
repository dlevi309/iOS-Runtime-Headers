/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARTechnique.h>

@class NSSet;

@interface ARReplayResultDataTechnique : ARTechnique {

	NSSet* _resultDataClasses;
	/*^block*/id _retrieveResultsForTimestampBlock;

}

@property (nonatomic,retain) NSSet * resultDataClasses;                      //@synthesize resultDataClasses=_resultDataClasses - In the implementation block
@property (nonatomic,copy) id retrieveResultsForTimestampBlock;              //@synthesize retrieveResultsForTimestampBlock=_retrieveResultsForTimestampBlock - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(NSSet *)resultDataClasses;
-(void)setResultDataClasses:(NSSet *)arg1 ;
-(void)setRetrieveResultsForTimestampBlock:(id)arg1 ;
-(id)retrieveResultsForTimestampBlock;
@end

