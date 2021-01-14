/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/

#import <ActionPredictionHeuristicsInternal/ATXInformationHeuristicRefreshTrigger.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ATXInformationHeuristicRefreshNotitifcationTrigger : ATXInformationHeuristicRefreshTrigger <NSSecureCoding> {

	BOOL _isDistributed;
	NSString* _notificationName;
	id _observerToken;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_start;
-(id)description;
-(void)_stop;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNotification:(id)arg1 distributed:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

