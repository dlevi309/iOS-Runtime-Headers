/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/


@class BSCompoundAssertion, NSSet;

@interface BKSMousePointerPerDisplayInfo : NSObject {

	BSCompoundAssertion* _pointerSuppressionAssertion;
	BSCompoundAssertion* _globalEventsAssertion;
	NSSet* _previouslyRoutedContextIDs;

}

@property (nonatomic,retain) BSCompoundAssertion * pointerSuppressionAssertion;              //@synthesize pointerSuppressionAssertion=_pointerSuppressionAssertion - In the implementation block
@property (nonatomic,retain) BSCompoundAssertion * globalEventsAssertion;                    //@synthesize globalEventsAssertion=_globalEventsAssertion - In the implementation block
@property (nonatomic,retain) NSSet * previouslyRoutedContextIDs;                             //@synthesize previouslyRoutedContextIDs=_previouslyRoutedContextIDs - In the implementation block
-(BSCompoundAssertion *)pointerSuppressionAssertion;
-(void)setPointerSuppressionAssertion:(BSCompoundAssertion *)arg1 ;
-(BSCompoundAssertion *)globalEventsAssertion;
-(void)setGlobalEventsAssertion:(BSCompoundAssertion *)arg1 ;
-(NSSet *)previouslyRoutedContextIDs;
-(void)setPreviouslyRoutedContextIDs:(NSSet *)arg1 ;
@end

