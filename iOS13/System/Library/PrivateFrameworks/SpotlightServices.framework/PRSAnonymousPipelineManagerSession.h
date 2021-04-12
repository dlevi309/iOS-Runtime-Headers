/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/

#import <SpotlightServices/PRSAnonymousPipelineManager.h>

@class PARSession;

@interface PRSAnonymousPipelineManagerSession : PRSAnonymousPipelineManager {

	PARSession* _session;

}

@property (nonatomic,retain) PARSession * session;              //@synthesize session=_session - In the implementation block
+(id)sharedManager;
-(id)init;
-(PARSession *)session;
-(void)setSession:(PARSession *)arg1 ;
-(void)sendCustomFeedback:(id)arg1 ;
-(void)setFeedbackDelegate:(id)arg1 ;
-(void)setPARSession:(id)arg1 ;
@end

