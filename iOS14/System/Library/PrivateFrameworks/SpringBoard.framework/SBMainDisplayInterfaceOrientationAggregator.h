/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol BSInvalidatable;
@class NSArray;

@interface SBMainDisplayInterfaceOrientationAggregator : NSObject {

	id<BSInvalidatable> _stateCaptureHandle;

}

@property (nonatomic,readonly) long long activeInterfaceOrientation; 
@property (nonatomic,retain,readonly) NSArray * interfaceOrientationSources; 
-(long long)_layoutOrientation;
-(id)succinctDescription;
-(long long)activeInterfaceOrientationBelow:(double)arg1 ;
-(long long)activeInterfaceOrientation;
-(id)init;
-(id)highestActiveInterfaceOrientationSourceBelow:(double)arg1 ;
-(void)_sortSources:(id)arg1 ;
-(id)highestActiveInterfaceOrientationSourceIgnoringSourcesAbove:(double)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)highestActiveInterfaceOrientationSource;
-(id)_highestSourceAtOrBelow:(double)arg1 amongSources:(id)arg2 ;
-(id)description;
-(long long)activeInterfaceOrientationAtOrBelow:(double)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSArray *)interfaceOrientationSources;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
@end

