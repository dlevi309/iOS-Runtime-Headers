/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setGlobalEventsAssertion:(BSCompoundAssertion *)arg1 ;
-(BSCompoundAssertion *)pointerSuppressionAssertion;
-(BSCompoundAssertion *)globalEventsAssertion;
-(void)setPointerSuppressionAssertion:(BSCompoundAssertion *)arg1 ;
-(NSSet *)previouslyRoutedContextIDs;
-(void)setPreviouslyRoutedContextIDs:(NSSet *)arg1 ;
@end

