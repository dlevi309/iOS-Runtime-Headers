/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@class ICSuzeLeaseSession;

@interface MPCSuzeLeaseSession : NSObject {

	ICSuzeLeaseSession* _icSuzeLeaseSession;

}

@property (nonatomic,readonly) ICSuzeLeaseSession * icSuzeLeaseSession;              //@synthesize icSuzeLeaseSession=_icSuzeLeaseSession - In the implementation block
-(void)beginAutomaticallyRefreshingLease;
-(void)endAutomaticallyRefreshingLease;
-(ICSuzeLeaseSession *)icSuzeLeaseSession;
-(id)initWithICSuzeLeaseSession:(id)arg1 ;
@end

