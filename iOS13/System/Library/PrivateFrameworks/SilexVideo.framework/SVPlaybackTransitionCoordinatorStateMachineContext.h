/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/NFStateMachineContextType.h>

@protocol SVPlaybackTransitionContext;
@class NSString;

@interface SVPlaybackTransitionCoordinatorStateMachineContext : NSObject <NFStateMachineContextType> {

	id<SVPlaybackTransitionContext> _context;

}

@property (nonatomic,readonly) id<SVPlaybackTransitionContext> context;              //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVPlaybackTransitionContext>)context;
-(id)initWithTransitionContext:(id)arg1 ;
@end

