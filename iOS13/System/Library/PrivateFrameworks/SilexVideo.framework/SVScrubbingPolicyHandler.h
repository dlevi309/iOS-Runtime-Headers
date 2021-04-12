/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVScrubbingPolicyHandling.h>

@class NSString;

@interface SVScrubbingPolicyHandler : NSObject <SVScrubbingPolicyHandling> {

	unsigned long long _policy;

}

@property (nonatomic,readonly) unsigned long long policy;              //@synthesize policy=_policy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)policy;
-(BOOL)scrubbingAllowedForVideo:(id)arg1 ;
-(id)initWithScrubbingPolicy:(unsigned long long)arg1 ;
@end

