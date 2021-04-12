/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)sendCustomFeedback:(id)arg1 ;
-(void)setSession:(PARSession *)arg1 ;
-(void)setFeedbackDelegate:(id)arg1 ;
-(void)setPARSession:(id)arg1 ;
@end

