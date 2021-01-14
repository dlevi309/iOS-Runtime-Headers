/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/BRCPersistedState.h>

@interface BRCStagePersistedState : BRCPersistedState {

	long long _latestGCStartTime;

}
+(BOOL)supportsSecureCoding;
+(id)loadFromClientStateInSession:(id)arg1 options:(id)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithLatestGCStartTime:(long long)arg1 ;
-(long long)timeSinceLatestGCStartTime;
@end

