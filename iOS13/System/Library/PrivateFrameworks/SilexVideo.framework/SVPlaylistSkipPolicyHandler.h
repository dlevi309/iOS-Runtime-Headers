/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoSkipPolicy.h>

@protocol SVContentTransitionTypeProviding;
@class NSString;

@interface SVPlaylistSkipPolicyHandler : NSObject <SVVideoSkipPolicy> {

	id<SVContentTransitionTypeProviding> _contentTransitionTypeProvider;

}

@property (nonatomic,readonly) id<SVContentTransitionTypeProviding> contentTransitionTypeProvider;              //@synthesize contentTransitionTypeProvider=_contentTransitionTypeProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL canSkip; 
-(BOOL)canSkip;
-(id<SVContentTransitionTypeProviding>)contentTransitionTypeProvider;
-(id)initWithContentTransitionTypeProvider:(id)arg1 ;
@end

