/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol BSInvalidatable;
@class NSArray;

@interface SBMainDisplayInterfaceOrientationAggregator : NSObject {

	id<BSInvalidatable> _stateCaptureHandle;

}

@property (nonatomic,readonly) long long activeInterfaceOrientation; 
@property (nonatomic,retain,readonly) NSArray * interfaceOrientationSources; 
-(id)init;
-(void)dealloc;
-(id)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)_layoutOrientation;
-(long long)activeInterfaceOrientation;
-(void)_sortSources:(id)arg1 ;
-(long long)activeInterfaceOrientationAtOrBelow:(double)arg1 ;
-(id)highestActiveInterfaceOrientationSourceBelow:(double)arg1 ;
-(id)highestActiveInterfaceOrientationSourceIgnoringSourcesAbove:(double)arg1 ;
-(NSArray *)interfaceOrientationSources;
-(id)_highestSourceAtOrBelow:(double)arg1 amongSources:(id)arg2 ;
-(long long)activeInterfaceOrientationBelow:(double)arg1 ;
-(id)highestActiveInterfaceOrientationSource;
@end

