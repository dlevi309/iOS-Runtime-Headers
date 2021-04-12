/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/


@class NSMutableArray;

@interface FBOrderedRequesters : NSObject {

	NSMutableArray* _bands[4];

}
-(id)init;
-(id)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)removeRequester:(id)arg1 ;
-(id)requesters;
-(BOOL)containsRequester:(id)arg1 inBand:(int)arg2 ;
-(void)addRequester:(id)arg1 toBand:(int)arg2 ;
-(void)prioritizeRequester:(id)arg1 ;
-(id)highestPriorityRequester;
-(id)lowestPriorityRequester;
@end

